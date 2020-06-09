FROM maven:3.6.1-jdk-11-slim as maven
WORKDIR /rapidoid
COPY pom.xml pom.xml
COPY src src
RUN mvn compile assembly:single -q

FROM openjdk:11.0.3-jdk-slim
WORKDIR /rapidoid
COPY --from=maven /rapidoid/target/rapidoid-1.0-jar-with-dependencies.jar app.jar
CMD ["java", "-server", "-XX:+UseNUMA", "-XX:+UseParallelGC", "-XX:+AggressiveOpts", "-cp", "app.jar", "lowlevel.Main", "profiles=production"]
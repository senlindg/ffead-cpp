/*
	Copyright 2009-2020, Sumeet Chhetri

    Licensed under the Apache License, Version 2.0 (const the& "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#define INC_MEMORYCACHE 1
/* #undef INC_REDISCACHE */
/* #undef INC_MEMCACHED */
#define INC_SDORM 1
#define INC_SDORM_SQL 1
/* #undef INC_SDORM_MONGO */
/* #undef INC_BINSER */
#define INC_JOBS 1
#define APPLE 1
/* #undef MINGW */
/* #undef DEBUG_MODE */

/* #undef USE_EPOLL */
#define USE_KQUEUE 1
/* #undef USE_EVPORT */
/* #undef USE_DEVPOLL */
#define USE_POLL 1
#define USE_SELECT 1

#define HAVE_SSLINC 1
#define HAVE_SSLLIB /usr/local/lib/libssl.dylib
/* #undef HAVE_REDISINC */
/* #undef HAVE_REDISLIB */
/* #undef HAVE_MEMCACHEDINC */
/* #undef HAVE_MEMCACHEDLIB */
#define HAVE_CURLLIB /usr/lib/libcurl.dylib
#define HAVE_UUIDINC 1
/* #undef HAVE_BSDUUIDINC */
#define HAVE_SQLINC 1
#define HAVE_ODBCLIB /usr/local/lib/libodbc.dylib
/* #undef HAVE_MONGOINC */
/* #undef HAVE_MONGOCLIB */
/* #undef HAVE_BSONINC */
/* #undef HAVE_BSONLIB */
#define INC_JOBS 1
/* #undef OS_BSD */
#define SRV_EMB 1
/* #undef SRV_CINATRA */
/* #undef SRV_LITHIUM */
/* #undef SRV_DROGON */

#ifdef HAVE_ODBCLIB
#define HAVE_LIBODBC 1
#endif

#define INC_WEBSVC 1
#define INC_TPE 1
#define INC_DVIEW 1
#define INC_DCP 1
#define INC_XMLSER 1
#define IS_SENDFILE 1
#define BUILD_CMAKE 1

#ifdef APPLE
#define OS_DARWIN 1
#endif

#ifdef MINGW
#undef USE_SELECT
#define USE_MINGW_SELECT 1
#endif

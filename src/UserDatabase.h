#pragma once

#ifdef DB_SQLITE
#include "UserDatabase_SQLite.h"
#elif defined DB_MYSQL
#include "UserDatabase_MySQL.h"
#elif defined DB_POSTGRESQL
#include "UserDatabase_PostgreSQL.h"
#else
#include "UserDatabase_KeyValues.h"
#endif

#define LOGIN_DB_ERROR 0 
#define LOGIN_OK 1
#define LOGIN_NO_SUCH_USER -1
#define LOGIN_USER_ALREADY_LOGGED_IN_UID -2
#define LOGIN_USER_ALREADY_LOGGED_IN_UUID -3
#define LOGIN_USER_BANNED -4
#define LOGIN_USER_INVALID_CLIENT_VERSION -5
#define LOGIN_SERVER_IS_FULL -6
#define LOGIN_SERVER_CANNOT_VALIDATE_CLIENT -7

#define REGISTER_DB_ERROR 0 
#define REGISTER_OK 1
#define REGISTER_USERNAME_EXIST -1
#define REGISTER_USERNAME_WRONG -2
#define REGISTER_PASSWORD_WRONG -3
#define REGISTER_IP_LIMIT -4

#define	EXT_UFLAG_GAMEMASTER				(1<<0)
#define	EXT_UFLAG_KILLSTOGETGACHAPONITEM	(1<<1)
#define	EXT_UFLAG_NEXTINVENTORYSLOT			(1<<2)
#define	EXT_UFLAG_CONFIG					(1<<3)
#define EXT_UFLAG_CURLOADOUT				(1<<4)
#define EXT_UFLAG_CHARACTERID				(1<<5)
#define EXT_UFLAG_BANSETTINGS				(1<<6)
#define EXT_UFLAG_2NDPASSWORD				(1<<7)
#define EXT_UFLAG_SECURITYQNA				(1<<8)
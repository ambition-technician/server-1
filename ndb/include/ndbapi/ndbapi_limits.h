/* Copyright (C) 2003 MySQL AB

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

#ifndef NDBAPI_LIMITS_H
#define NDBAPI_LIMITS_H

#define NDB_MAX_NO_OF_ATTRIBUTES_IN_KEY 32
#define NDB_MAX_TABLES 1600
#define NDB_MAX_DATABASE_NAME_SIZE 128
#define NDB_MAX_SCHEMA_NAME_SIZE 128
#define NDB_MAX_TAB_NAME_SIZE 128
#define NDB_MAX_ATTR_NAME_SIZE 32
#define NDB_MAX_ATTR_DEFAULT_VALUE_SIZE 128
#define NDB_MAX_ATTRIBUTES_IN_TABLE 91
#define NDB_MAX_ATTRIBUTES_IN_INDEX NDB_MAX_NO_OF_ATTRIBUTES_IN_KEY
#define NDB_MAX_TUPLE_SIZE_IN_WORDS 1023
#define NDB_MAX_FIXED_KEY_LENGTH_IN_WORDS 8
#define NDB_MAX_KEYSIZE_IN_WORDS 1023
#define NDB_MAX_KEY_SIZE NDB_MAX_KEYSIZE_IN_WORDS*sizeof(Uint32)
#define NDB_MAX_TUPLE_SIZE 8191
#define NDB_MAX_CONNECTIONS 127
#define NDB_MAX_TRANSACTIONS 1024
#define NDB_MAX_PARALLEL_SCANS 12
#define NDB_MAX_ACTIVE_EVENTS 100

#ifndef MIN
#define MIN(x,y) (((x)<(y))?(x):(y))
#endif
 
#ifndef MAX
#define MAX(x,y) (((x)>(y))?(x):(y))
#endif

#endif

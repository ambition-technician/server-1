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


#include <NdbStdio.h>
#include <kernel_types.h>
#include <BlockNumbers.h>
#include <signaldata/DihContinueB.hpp>
#include <signaldata/NdbfsContinueB.hpp>

bool
printCONTINUEB(FILE * output, const Uint32 * theData, Uint32 len, 
	       Uint16 receiverBlockNo){
  if(receiverBlockNo == DBDIH){
    return printCONTINUEB_DBDIH(output, theData, len);
  } else if(receiverBlockNo == NDBFS) {
    return printCONTINUEB_NDBFS(output, theData, len);
  }
  
  return false;
}



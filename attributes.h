/**
 *  Attributes for different compilers
 * 
 *	@author 	Navin Tiwari
 *	@email		navintiwari08@yahoo.com
 *	@github		https://github.com/navintiwari08
 *	@license	GNU GPL v3
 *	
 * |----------------------------------------------------------------------
 * | Copyright (C) Navin Tiwari, 2018
 * | 
 * | This program is free software: you can redistribute it and/or modify
 * | it under the terms of the GNU General Public License as published by
 * | the Free Software Foundation, either version 3 of the License, or
 * | any later version.
 * |  
 * | This program is distributed in the hope that it will be useful,
 * | but WITHOUT ANY WARRANTY; without even the implied warranty of
 * | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * | GNU General Public License for more details.
 * | 
 * | You should have received a copy of the GNU General Public License
 * | along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * |----------------------------------------------------------------------
 *
 * Different compilers uses different special keywords for functions/variables. etc.
 * For this purpose that file has been made. On one place to all possible attributes used in my libs.
 */
#ifndef NT_ATTRIBUTES_H
#define NT_ATTRIBUTES_H

/* Check for GNUC */
#if defined (__GNUC__)
	#ifndef __weak		
		#define __weak   	__attribute__((weak))
	#endif	/* Weak attribute */
	#ifndef __packed	
		#define __packed 	__attribute__((__packed__))
	#endif	/* Packed attribute */
#endif

#endif

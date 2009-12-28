/*
* Copyright (C) 2009 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou@yahoo.fr>
*	
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*	
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*	
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
*/

/**@file tcomp_rfc3485_dictionary_sip.h
 * @brief RFC 3485 - The Session Initiation Protocol (SIP) and Session Description Protocol
 *  (SDP) Static Dictionary for Signaling Compression (SigComp)
 *
 * @author Mamadou Diop <diopmamadou(at)yahoo.fr>
 *
 * @date Created: Sat Nov 8 16:54:58 2009 mdiop
 */

#ifndef _TINYSIGCOMPP_RFC3485_H_
#define _TINYSIGCOMPP_RFC3485_H_

#define RFC3485_DICTIONARY_SIP_VALUE_LENGTH				0x12e4
#define RFC3485_DICTIONARY_SIP_STATE_ADDRESS			0 /*(not relevant for the dictionary) */
#define RFC3485_DICTIONARY_SIP_STATE_INSTRUCTION        0 /*(not relevant for the dictionary) */
#define RFC3485_DICTIONARY_SIP_MINIMUM_ACCESS_LENGTH    6

#define RFC3485_DICTIONARY_SIP_IDENTIFIER_LENGTH		20

#define RFC3485_DICTIONARY_SIP_IDENTIFIER \
	"\xfb\xe5\x07\xdf\xe5\xe6\xaa\x5a\xf2\xab\xb9\x14\xce\xaa\x05\xf9\x9c\xe6\x1b\xa5"

#define RFC3485_DICTIONARY_SIP_VALUE \
	"\x0d\x0a\x52\x65\x6a\x65\x63\x74\x2d\x43\x6f\x6e\x74\x61\x63\x74\x3a\x20\x0d\x0a\x45\x72" \
	"\x72\x6f\x72\x2d\x49\x6e\x66\x6f\x3a\x20\x0d\x0a\x54\x69\x6d\x65\x73\x74\x61\x6d\x70\x3a" \
	"\x20\x0d\x0a\x43\x61\x6c\x6c\x2d\x49\x6e\x66\x6f\x3a\x20\x0d\x0a\x52\x65\x70\x6c\x79\x2d" \
	"\x54\x6f\x3a\x20\x0d\x0a\x57\x61\x72\x6e\x69\x6e\x67\x3a\x20\x0d\x0a\x53\x75\x62\x6a\x65" \
	"\x63\x74\x3a\x20\x3b\x68\x61\x6e\x64\x6c\x69\x6e\x67\x3d\x69\x6d\x61\x67\x65\x3b\x70\x75" \
	"\x72\x70\x6f\x73\x65\x3d\x3b\x63\x61\x75\x73\x65\x3d\x3b\x74\x65\x78\x74\x3d\x63\x61\x72" \
	"\x64\x33\x30\x30\x20\x4d\x75\x6c\x74\x69\x70\x6c\x65\x20\x43\x68\x6f\x69\x63\x65\x73\x6d" \
	"\x69\x6d\x65\x73\x73\x61\x67\x65\x2f\x73\x69\x70\x66\x72\x61\x67\x34\x30\x37\x20\x50\x72" \
	"\x6f\x78\x79\x20\x41\x75\x74\x68\x65\x6e\x74\x69\x63\x61\x74\x69\x6f\x6e\x20\x52\x65\x71" \
	"\x75\x69\x72\x65\x64\x69\x67\x65\x73\x74\x2d\x69\x6e\x74\x65\x67\x72\x69\x74\x79\x34\x38" \
	"\x34\x20\x41\x64\x64\x72\x65\x73\x73\x20\x49\x6e\x63\x6f\x6d\x70\x6c\x65\x74\x65\x6c\x65" \
	"\x70\x68\x6f\x6e\x65\x2d\x65\x76\x65\x6e\x74\x73\x34\x39\x34\x20\x53\x65\x63\x75\x72\x69" \
	"\x74\x79\x20\x41\x67\x72\x65\x65\x6d\x65\x6e\x74\x20\x52\x65\x71\x75\x69\x72\x65\x64\x65" \
	"\x61\x63\x74\x69\x76\x61\x74\x65\x64\x34\x38\x31\x20\x43\x61\x6c\x6c\x2f\x54\x72\x61\x6e" \
	"\x73\x61\x63\x74\x69\x6f\x6e\x20\x44\x6f\x65\x73\x20\x4e\x6f\x74\x20\x45\x78\x69\x73\x74" \
	"\x61\x6c\x65\x3d\x35\x30\x30\x20\x53\x65\x72\x76\x65\x72\x20\x49\x6e\x74\x65\x72\x6e\x61" \
	"\x6c\x20\x45\x72\x72\x6f\x72\x6f\x62\x75\x73\x74\x2d\x73\x6f\x72\x74\x69\x6e\x67\x3d\x34" \
	"\x31\x36\x20\x55\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x55\x52\x49\x20\x53\x63\x68" \
	"\x65\x6d\x65\x72\x67\x65\x6e\x63\x79\x34\x31\x35\x20\x55\x6e\x73\x75\x70\x70\x6f\x72\x74" \
	"\x65\x64\x20\x4d\x65\x64\x69\x61\x20\x54\x79\x70\x65\x6e\x64\x69\x6e\x67\x34\x38\x38\x20" \
	"\x4e\x6f\x74\x20\x41\x63\x63\x65\x70\x74\x61\x62\x6c\x65\x20\x48\x65\x72\x65\x6a\x65\x63" \
	"\x74\x65\x64\x34\x32\x33\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x20\x54\x6f\x6f\x20\x42\x72" \
	"\x69\x65\x66\x72\x6f\x6d\x2d\x74\x61\x67\x51\x2e\x38\x35\x30\x35\x20\x56\x65\x72\x73\x69" \
	"\x6f\x6e\x20\x4e\x6f\x74\x20\x53\x75\x70\x70\x6f\x72\x74\x65\x64\x34\x30\x33\x20\x46\x6f" \
	"\x72\x62\x69\x64\x64\x65\x6e\x6f\x6e\x2d\x75\x72\x67\x65\x6e\x74\x34\x32\x39\x20\x50\x72" \
	"\x6f\x76\x69\x64\x65\x20\x52\x65\x66\x65\x72\x72\x6f\x72\x20\x49\x64\x65\x6e\x74\x69\x74" \
	"\x79\x34\x32\x30\x20\x42\x61\x64\x20\x45\x78\x74\x65\x6e\x73\x69\x6f\x6e\x6f\x72\x65\x73" \
	"\x6f\x75\x72\x63\x65\x0d\x0a\x61\x3d\x6b\x65\x79\x2d\x6d\x67\x6d\x74\x3a\x6d\x69\x6b\x65" \
	"\x79\x4f\x50\x54\x49\x4f\x4e\x53\x20\x4c\x61\x6e\x67\x75\x61\x67\x65\x3a\x20\x35\x30\x34" \
	"\x20\x53\x65\x72\x76\x65\x72\x20\x54\x69\x6d\x65\x2d\x6f\x75\x74\x6f\x2d\x74\x61\x67\x0d" \
	"\x0a\x41\x75\x74\x68\x65\x6e\x74\x69\x63\x61\x74\x69\x6f\x6e\x2d\x49\x6e\x66\x6f\x3a\x20" \
	"\x44\x65\x63\x20\x33\x38\x30\x20\x41\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65\x20\x53\x65" \
	"\x72\x76\x69\x63\x65\x35\x30\x33\x20\x53\x65\x72\x76\x69\x63\x65\x20\x55\x6e\x61\x76\x61" \
	"\x69\x6c\x61\x62\x6c\x65\x34\x32\x31\x20\x45\x78\x74\x65\x6e\x73\x69\x6f\x6e\x20\x52\x65" \
	"\x71\x75\x69\x72\x65\x64\x34\x30\x35\x20\x4d\x65\x74\x68\x6f\x64\x20\x4e\x6f\x74\x20\x41" \
	"\x6c\x6c\x6f\x77\x65\x64\x34\x38\x37\x20\x52\x65\x71\x75\x65\x73\x74\x20\x54\x65\x72\x6d" \
	"\x69\x6e\x61\x74\x65\x64\x61\x75\x74\x68\x2d\x69\x6e\x74\x65\x72\x6c\x65\x61\x76\x69\x6e" \
	"\x67\x3d\x0d\x0a\x6d\x3d\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x20\x41\x75\x67\x20" \
	"\x35\x31\x33\x20\x4d\x65\x73\x73\x61\x67\x65\x20\x54\x6f\x6f\x20\x4c\x61\x72\x67\x65\x36" \
	"\x38\x37\x20\x44\x69\x61\x6c\x6f\x67\x20\x54\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x33\x30" \
	"\x32\x20\x4d\x6f\x76\x65\x64\x20\x54\x65\x6d\x70\x6f\x72\x61\x72\x69\x6c\x79\x33\x30\x31" \
	"\x20\x4d\x6f\x76\x65\x64\x20\x50\x65\x72\x6d\x61\x6e\x65\x6e\x74\x6c\x79\x6d\x75\x6c\x74" \
	"\x69\x70\x61\x72\x74\x2f\x73\x69\x67\x6e\x65\x64\x0d\x0a\x52\x65\x74\x72\x79\x2d\x41\x66" \
	"\x74\x65\x72\x3a\x20\x47\x4d\x54\x68\x75\x2c\x20\x34\x30\x32\x20\x50\x61\x79\x6d\x65\x6e" \
	"\x74\x20\x52\x65\x71\x75\x69\x72\x65\x64\x0d\x0a\x61\x3d\x6f\x72\x69\x65\x6e\x74\x3a\x6c" \
	"\x61\x6e\x64\x73\x63\x61\x70\x65\x34\x30\x30\x20\x42\x61\x64\x20\x52\x65\x71\x75\x65\x73" \
	"\x74\x72\x75\x65\x34\x39\x31\x20\x52\x65\x71\x75\x65\x73\x74\x20\x50\x65\x6e\x64\x69\x6e" \
	"\x67\x35\x30\x31\x20\x4e\x6f\x74\x20\x49\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64\x34\x30" \
	"\x36\x20\x4e\x6f\x74\x20\x41\x63\x63\x65\x70\x74\x61\x62\x6c\x65\x36\x30\x36\x20\x4e\x6f" \
	"\x74\x20\x41\x63\x63\x65\x70\x74\x61\x62\x6c\x65\x0d\x0a\x61\x3d\x74\x79\x70\x65\x3a\x62" \
	"\x72\x6f\x61\x64\x63\x61\x73\x74\x6f\x6e\x65\x34\x39\x33\x20\x55\x6e\x64\x65\x63\x69\x70" \
	"\x68\x65\x72\x61\x62\x6c\x65\x0d\x0a\x4d\x49\x4d\x45\x2d\x56\x65\x72\x73\x69\x6f\x6e\x3a" \
	"\x20\x4d\x61\x79\x20\x34\x38\x32\x20\x4c\x6f\x6f\x70\x20\x44\x65\x74\x65\x63\x74\x65\x64" \
	"\x0d\x0a\x4f\x72\x67\x61\x6e\x69\x7a\x61\x74\x69\x6f\x6e\x3a\x20\x4a\x75\x6e\x20\x6d\x6f" \
	"\x64\x65\x2d\x63\x68\x61\x6e\x67\x65\x2d\x6e\x65\x69\x67\x68\x62\x6f\x72\x3d\x63\x72\x69" \
	"\x74\x69\x63\x61\x6c\x65\x72\x74\x63\x70\x2d\x66\x62\x34\x38\x39\x20\x42\x61\x64\x20\x45" \
	"\x76\x65\x6e\x74\x6c\x73\x0d\x0a\x55\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20\x4a" \
	"\x61\x6e\x20\x35\x30\x32\x20\x42\x61\x64\x20\x47\x61\x74\x65\x77\x61\x79\x6d\x6f\x64\x65" \
	"\x2d\x63\x68\x61\x6e\x67\x65\x2d\x70\x65\x72\x69\x6f\x64\x3d\x0d\x0a\x61\x3d\x6f\x72\x69" \
	"\x65\x6e\x74\x3a\x73\x65\x61\x73\x63\x61\x70\x65\x0d\x0a\x61\x3d\x74\x79\x70\x65\x3a\x6d" \
	"\x6f\x64\x65\x72\x61\x74\x65\x64\x34\x30\x34\x20\x4e\x6f\x74\x20\x46\x6f\x75\x6e\x64\x33" \
	"\x30\x35\x20\x55\x73\x65\x20\x50\x72\x6f\x78\x79\x0d\x0a\x61\x3d\x74\x79\x70\x65\x3a\x72" \
	"\x65\x63\x76\x6f\x6e\x6c\x79\x0d\x0a\x61\x3d\x74\x79\x70\x65\x3a\x6d\x65\x65\x74\x69\x6e" \
	"\x67\x0d\x0a\x6b\x3d\x70\x72\x6f\x6d\x70\x74\x3a\x0d\x0a\x52\x65\x66\x65\x72\x72\x65\x64" \
	"\x2d\x42\x79\x3a\x20\x0d\x0a\x49\x6e\x2d\x52\x65\x70\x6c\x79\x2d\x54\x6f\x3a\x20\x54\x52" \
	"\x55\x45\x6e\x63\x6f\x64\x69\x6e\x67\x3a\x20\x31\x38\x32\x20\x51\x75\x65\x75\x65\x64\x41" \
	"\x75\x74\x68\x65\x6e\x74\x69\x63\x61\x74\x65\x3a\x20\x0d\x0a\x55\x73\x65\x72\x2d\x41\x67" \
	"\x65\x6e\x74\x3a\x20\x0d\x0a\x61\x3d\x66\x72\x61\x6d\x65\x72\x61\x74\x65\x3a\x0d\x0a\x41" \
	"\x6c\x65\x72\x74\x2d\x49\x6e\x66\x6f\x3a\x20\x43\x41\x4e\x43\x45\x4c\x20\x0d\x0a\x61\x3d" \
	"\x6d\x61\x78\x70\x74\x69\x6d\x65\x3a\x3b\x72\x65\x74\x72\x79\x2d\x61\x66\x74\x65\x72\x3d" \
	"\x75\x61\x63\x68\x61\x6e\x6e\x65\x6c\x73\x3d\x34\x31\x30\x20\x47\x6f\x6e\x65\x0d\x0a\x52" \
	"\x65\x66\x65\x72\x2d\x54\x6f\x3a\x20\x0d\x0a\x50\x72\x69\x6f\x72\x69\x74\x79\x3a\x20\x0d" \
	"\x0a\x6d\x3d\x63\x6f\x6e\x74\x72\x6f\x6c\x20\x0d\x0a\x61\x3d\x71\x75\x61\x6c\x69\x74\x79" \
	"\x3a\x0d\x0a\x61\x3d\x73\x64\x70\x6c\x61\x6e\x67\x3a\x0d\x0a\x61\x3d\x63\x68\x61\x72\x73" \
	"\x65\x74\x3a\x0d\x0a\x52\x65\x70\x6c\x61\x63\x65\x73\x3a\x20\x52\x45\x46\x45\x52\x20\x69" \
	"\x70\x73\x65\x63\x2d\x69\x6b\x65\x3b\x74\x72\x61\x6e\x73\x70\x6f\x72\x74\x3d\x0d\x0a\x61" \
	"\x3d\x6b\x65\x79\x77\x64\x73\x3a\x0d\x0a\x6b\x3d\x62\x61\x73\x65\x36\x34\x3a\x3b\x72\x65" \
	"\x66\x72\x65\x73\x68\x65\x72\x3d\x0d\x0a\x61\x3d\x70\x74\x69\x6d\x65\x3a\x0d\x0a\x6b\x3d" \
	"\x63\x6c\x65\x61\x72\x3a\x3b\x72\x65\x63\x65\x69\x76\x65\x64\x3d\x3b\x64\x75\x72\x61\x74" \
	"\x69\x6f\x6e\x3d\x0d\x0a\x41\x63\x63\x65\x70\x74\x3a\x20\x0d\x0a\x61\x3d\x67\x72\x6f\x75" \
	"\x70\x3a\x46\x41\x4c\x53\x45\x3a\x20\x49\x4e\x46\x4f\x20\x0d\x0a\x41\x63\x63\x65\x70\x74" \
	"\x2d\x0d\x0a\x61\x3d\x6c\x61\x6e\x67\x3a\x0d\x0a\x6d\x3d\x64\x61\x74\x61\x20\x6d\x6f\x64" \
	"\x65\x2d\x73\x65\x74\x3d\x0d\x0a\x61\x3d\x74\x6f\x6f\x6c\x3a\x54\x4c\x53\x75\x6e\x2c\x20" \
	"\x0d\x0a\x44\x61\x74\x65\x3a\x20\x0d\x0a\x61\x3d\x63\x61\x74\x3a\x0d\x0a\x6b\x3d\x75\x72" \
	"\x69\x3a\x0d\x0a\x50\x72\x6f\x78\x79\x2d\x3b\x72\x65\x61\x73\x6f\x6e\x3d\x3b\x6d\x65\x74" \
	"\x68\x6f\x64\x3d\x0d\x0a\x61\x3d\x6d\x69\x64\x3a\x3b\x6d\x61\x64\x64\x72\x3d\x6f\x70\x61" \
	"\x71\x75\x65\x3d\x0d\x0a\x4d\x69\x6e\x2d\x3b\x61\x6c\x67\x3d\x4d\x6f\x6e\x2c\x20\x54\x75" \
	"\x65\x2c\x20\x57\x65\x64\x2c\x20\x46\x72\x69\x2c\x20\x53\x61\x74\x2c\x20\x3b\x74\x74\x6c" \
	"\x3d\x61\x75\x74\x73\x3d\x0d\x0a\x72\x3d\x0d\x0a\x7a\x3d\x0d\x0a\x65\x3d\x3b\x69\x64\x3d" \
	"\x0d\x0a\x69\x3d\x63\x72\x63\x3d\x0d\x0a\x75\x3d\x3b\x71\x3d\x75\x61\x73\x34\x31\x34\x20" \
	"\x52\x65\x71\x75\x65\x73\x74\x2d\x55\x52\x49\x20\x54\x6f\x6f\x20\x4c\x6f\x6e\x67\x69\x76" \
	"\x65\x75\x70\x72\x69\x76\x61\x63\x79\x75\x64\x70\x72\x65\x66\x65\x72\x36\x30\x30\x20\x42" \
	"\x75\x73\x79\x20\x45\x76\x65\x72\x79\x77\x68\x65\x72\x65\x71\x75\x69\x72\x65\x64\x34\x38" \
	"\x30\x20\x54\x65\x6d\x70\x6f\x72\x61\x72\x69\x6c\x79\x20\x55\x6e\x61\x76\x61\x69\x6c\x61" \
	"\x62\x6c\x65\x0d\x0a\x61\x3d\x74\x79\x70\x65\x3a\x48\x2e\x33\x33\x32\x30\x32\x20\x41\x63" \
	"\x63\x65\x70\x74\x65\x64\x0d\x0a\x53\x65\x73\x73\x69\x6f\x6e\x2d\x45\x78\x70\x69\x72\x65" \
	"\x73\x3a\x20\x0d\x0a\x53\x75\x62\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x2d\x53\x74\x61\x74" \
	"\x65\x3a\x20\x4e\x6f\x76\x20\x0d\x0a\x53\x65\x72\x76\x69\x63\x65\x2d\x52\x6f\x75\x74\x65" \
	"\x3a\x20\x53\x65\x70\x20\x0d\x0a\x41\x6c\x6c\x6f\x77\x2d\x45\x76\x65\x6e\x74\x73\x3a\x20" \
	"\x46\x65\x62\x20\x0d\x0a\x61\x3d\x69\x6e\x61\x63\x74\x69\x76\x65\x52\x54\x50\x2f\x53\x41" \
	"\x56\x50\x20\x52\x54\x50\x2f\x41\x56\x50\x46\x20\x41\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x69" \
	"\x70\x73\x3a\x0d\x0a\x61\x3d\x74\x79\x70\x65\x3a\x74\x65\x73\x74\x65\x6c\x3a\x4d\x45\x53" \
	"\x53\x41\x47\x45\x20\x0d\x0a\x61\x3d\x72\x65\x63\x76\x6f\x6e\x6c\x79\x0d\x0a\x61\x3d\x73" \
	"\x65\x6e\x64\x6f\x6e\x6c\x79\x0d\x0a\x63\x3d\x49\x4e\x20\x49\x50\x34\x20\x0d\x0a\x52\x65" \
	"\x61\x73\x6f\x6e\x3a\x20\x0d\x0a\x41\x6c\x6c\x6f\x77\x3a\x20\x0d\x0a\x45\x76\x65\x6e\x74" \
	"\x3a\x20\x0d\x0a\x50\x61\x74\x68\x3a\x20\x3b\x75\x73\x65\x72\x3d\x0d\x0a\x62\x3d\x41\x53" \
	"\x20\x43\x54\x20\x0d\x0a\x57\x57\x57\x2d\x41\x75\x74\x68\x65\x6e\x74\x69\x63\x61\x74\x65" \
	"\x3a\x20\x44\x69\x67\x65\x73\x74\x20\x0d\x0a\x61\x3d\x73\x65\x6e\x64\x72\x65\x63\x76\x69" \
	"\x64\x65\x6f\x63\x74\x65\x74\x2d\x61\x6c\x69\x67\x6e\x3d\x61\x70\x70\x6c\x69\x63\x61\x74" \
	"\x69\x6f\x6e\x2f\x73\x64\x70\x61\x74\x68\x65\x61\x64\x65\x72\x73\x70\x61\x75\x74\x68\x3d" \
	"\x0d\x0a\x61\x3d\x6f\x72\x69\x65\x6e\x74\x3a\x70\x6f\x72\x74\x72\x61\x69\x74\x69\x6d\x65" \
	"\x6f\x75\x74\x74\x72\x2d\x69\x6e\x74\x69\x63\x6f\x6e\x63\x3d\x34\x38\x33\x20\x54\x6f\x6f" \
	"\x20\x4d\x61\x6e\x79\x20\x48\x6f\x70\x73\x6c\x69\x6e\x66\x6f\x70\x74\x69\x6f\x6e\x61\x6c" \
	"\x67\x6f\x72\x69\x74\x68\x6d\x3d\x36\x30\x34\x20\x44\x6f\x65\x73\x20\x4e\x6f\x74\x20\x45" \
	"\x78\x69\x73\x74\x20\x41\x6e\x79\x77\x68\x65\x72\x65\x73\x70\x6f\x6e\x73\x65\x3d\x0d\x0a" \
	"\x0d\x0a\x52\x65\x71\x75\x65\x73\x74\x2d\x44\x69\x73\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a" \
	"\x20\x4d\x44\x35\x38\x30\x20\x50\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x46\x61" \
	"\x69\x6c\x75\x72\x65\x70\x6c\x61\x63\x65\x73\x34\x32\x32\x20\x53\x65\x73\x73\x69\x6f\x6e" \
	"\x20\x49\x6e\x74\x65\x72\x76\x61\x6c\x20\x54\x6f\x6f\x20\x53\x6d\x61\x6c\x6c\x6f\x63\x61" \
	"\x6c\x31\x38\x31\x20\x43\x61\x6c\x6c\x20\x49\x73\x20\x42\x65\x69\x6e\x67\x20\x46\x6f\x72" \
	"\x77\x61\x72\x64\x65\x64\x6f\x6d\x61\x69\x6e\x3d\x66\x61\x69\x6c\x75\x72\x65\x6e\x64\x65" \
	"\x72\x65\x61\x6c\x6d\x3d\x53\x55\x42\x53\x43\x52\x49\x42\x45\x20\x70\x72\x65\x63\x6f\x6e" \
	"\x64\x69\x74\x69\x6f\x6e\x6f\x72\x6d\x61\x6c\x69\x70\x73\x65\x63\x2d\x6d\x61\x6e\x64\x61" \
	"\x74\x6f\x72\x79\x34\x31\x33\x20\x52\x65\x71\x75\x65\x73\x74\x20\x45\x6e\x74\x69\x74\x79" \
	"\x20\x54\x6f\x6f\x20\x4c\x61\x72\x67\x65\x32\x65\x31\x38\x33\x20\x53\x65\x73\x73\x69\x6f" \
	"\x6e\x20\x50\x72\x6f\x67\x72\x65\x73\x73\x63\x74\x70\x34\x38\x36\x20\x42\x75\x73\x79\x20" \
	"\x48\x65\x72\x65\x6d\x6f\x74\x65\x72\x6d\x69\x6e\x61\x74\x65\x64\x41\x4b\x41\x76\x31\x2d" \
	"\x4d\x44\x35\x2d\x73\x65\x73\x73\x69\x6f\x6e\x6f\x6e\x65\x0d\x0a\x41\x75\x74\x68\x6f\x72" \
	"\x69\x7a\x61\x74\x69\x6f\x6e\x3a\x20\x36\x30\x33\x20\x44\x65\x63\x6c\x69\x6e\x65\x78\x74" \
	"\x6e\x6f\x6e\x63\x65\x3d\x34\x38\x35\x20\x41\x6d\x62\x69\x67\x75\x6f\x75\x73\x65\x72\x6e" \
	"\x61\x6d\x65\x3d\x61\x75\x64\x69\x6f\x0d\x0a\x43\x6f\x6e\x74\x65\x6e\x74\x2d\x54\x79\x70" \
	"\x65\x3a\x20\x4d\x61\x72\x20\x0d\x0a\x52\x65\x63\x6f\x72\x64\x2d\x52\x6f\x75\x74\x65\x3a" \
	"\x20\x4a\x75\x6c\x20\x34\x30\x31\x20\x55\x6e\x61\x75\x74\x68\x6f\x72\x69\x7a\x65\x64\x0d" \
	"\x0a\x52\x65\x71\x75\x69\x72\x65\x3a\x20\x0d\x0a\x74\x3d\x30\x20\x30\x2e\x30\x2e\x30\x2e" \
	"\x30\x0d\x0a\x53\x65\x72\x76\x65\x72\x3a\x20\x52\x45\x47\x49\x53\x54\x45\x52\x20\x0d\x0a" \
	"\x63\x3d\x49\x4e\x20\x49\x50\x36\x20\x31\x38\x30\x20\x52\x69\x6e\x67\x69\x6e\x67\x31\x30" \
	"\x30\x20\x54\x72\x79\x69\x6e\x67\x76\x3d\x30\x0d\x0a\x6f\x3d\x55\x50\x44\x41\x54\x45\x20" \
	"\x4e\x4f\x54\x49\x46\x59\x20\x0d\x0a\x53\x75\x70\x70\x6f\x72\x74\x65\x64\x3a\x20\x75\x6e" \
	"\x6b\x6e\x6f\x77\x6e\x41\x4d\x52\x54\x50\x2f\x41\x56\x50\x20\x0d\x0a\x50\x72\x69\x76\x61" \
	"\x63\x79\x3a\x20\x0d\x0a\x53\x65\x63\x75\x72\x69\x74\x79\x2d\x0d\x0a\x45\x78\x70\x69\x72" \
	"\x65\x73\x3a\x20\x0d\x0a\x61\x3d\x72\x74\x70\x6d\x61\x70\x3a\x0d\x0a\x6d\x3d\x76\x69\x64" \
	"\x65\x6f\x20\x0d\x0a\x6d\x3d\x61\x75\x64\x69\x6f\x20\x0d\x0a\x73\x3d\x20\x66\x61\x6c\x73" \
	"\x65\x0d\x0a\x61\x3d\x63\x6f\x6e\x66\x3a\x3b\x65\x78\x70\x69\x72\x65\x73\x3d\x0d\x0a\x52" \
	"\x6f\x75\x74\x65\x3a\x20\x0d\x0a\x61\x3d\x66\x6d\x74\x70\x3a\x0d\x0a\x61\x3d\x63\x75\x72" \
	"\x72\x3a\x43\x6c\x69\x65\x6e\x74\x3a\x20\x56\x65\x72\x69\x66\x79\x3a\x20\x0d\x0a\x61\x3d" \
	"\x64\x65\x73\x3a\x0d\x0a\x52\x41\x63\x6b\x3a\x20\x0d\x0a\x52\x53\x65\x71\x3a\x20\x42\x59" \
	"\x45\x20\x63\x6e\x6f\x6e\x63\x65\x3d\x31\x30\x30\x72\x65\x6c\x75\x72\x69\x3d\x71\x6f\x70" \
	"\x3d\x54\x43\x50\x55\x44\x50\x71\x6f\x73\x78\x6d\x6c\x3b\x6c\x72\x0d\x0a\x56\x69\x61\x3a" \
	"\x20\x53\x49\x50\x2f\x32\x2e\x30\x2f\x54\x43\x50\x20\x34\x30\x38\x20\x52\x65\x71\x75\x65" \
	"\x73\x74\x20\x54\x69\x6d\x65\x6f\x75\x74\x69\x6d\x65\x72\x70\x73\x69\x70\x3a\x0d\x0a\x43" \
	"\x6f\x6e\x74\x65\x6e\x74\x2d\x4c\x65\x6e\x67\x74\x68\x3a\x20\x4f\x63\x74\x20\x0d\x0a\x56" \
	"\x69\x61\x3a\x20\x53\x49\x50\x2f\x32\x2e\x30\x2f\x55\x44\x50\x20\x3b\x63\x6f\x6d\x70\x3d" \
	"\x73\x69\x67\x63\x6f\x6d\x70\x72\x6f\x62\x61\x74\x69\x6f\x6e\x61\x63\x6b\x3b\x62\x72\x61" \
	"\x6e\x63\x68\x3d\x7a\x39\x68\x47\x34\x62\x4b\x0d\x0a\x4d\x61\x78\x2d\x46\x6f\x72\x77\x61" \
	"\x72\x64\x73\x3a\x20\x41\x70\x72\x20\x53\x43\x54\x50\x52\x41\x43\x4b\x20\x49\x4e\x56\x49" \
	"\x54\x45\x20\x0d\x0a\x43\x61\x6c\x6c\x2d\x49\x44\x3a\x20\x0d\x0a\x43\x6f\x6e\x74\x61\x63" \
	"\x74\x3a\x20\x32\x30\x30\x20\x4f\x4b\x0d\x0a\x46\x72\x6f\x6d\x3a\x20\x0d\x0a\x43\x53\x65" \
	"\x71\x3a\x20\x0d\x0a\x54\x6f\x3a\x20\x3b\x74\x61\x67\x3d\x04\x10\xdd\x10\x11\x31\x0d\x11" \
	"\x0a\x07\x10\xb9\x0c\x10\xfe\x12\x10\xe1\x06\x11\x4e\x07\x11\x4e\x03\x11\x4a\x04\x11\x4a" \
	"\x07\x10\xb2\x08\x11\x79\x06\x11\x81\x0f\x11\x22\x0b\x11\x55\x06\x11\x6b\x0b\x11\x60\x13" \
	"\x10\xb2\x08\x11\x71\x05\x11\x87\x13\x10\xf7\x09\x0e\x8d\x08\x0d\xae\x0c\x10\xb9\x07\x10" \
	"\x8e\x03\x0d\x96\x03\x10\x8a\x04\x10\x8a\x09\x0d\xd7\x0a\x0f\x12\x08\x0f\x8f\x09\x0f\x8f" \
	"\x08\x0d\x6c\x06\x0e\x66\x09\x0e\x6c\x0a\x0e\x6c\x06\x0f\xc6\x07\x0f\xc6\x05\x11\x48\x06" \
	"\x11\x48\x06\x0f\xbf\x07\x0f\xbf\x07\x0e\x55\x06\x0f\x16\x04\x0e\xf4\x03\x0e\xb1\x03\x10" \
	"\xa6\x09\x10\x50\x03\x10\xa3\x0a\x0d\xb4\x05\x0e\x36\x06\x0e\xd6\x03\x0d\xf9\x11\x0e\xf8" \
	"\x04\x0c\xd9\x08\x0e\xea\x04\x09\x53\x03\x0a\x4b\x04\x0e\xe4\x10\x0f\x35\x09\x0e\xe4\x08" \
	"\x0d\x3f\x03\x0f\xe1\x0b\x10\x01\x03\x10\xac\x06\x10\x95\x0c\x0e\x76\x0b\x0f\xeb\x0a\x0f" \
	"\xae\x05\x10\x2b\x04\x10\x2b\x08\x10\x7a\x10\x0f\x49\x07\x0f\xb8\x09\x10\x3e\x0b\x10\x0c" \
	"\x07\x0f\x78\x0b\x0f\x6d\x09\x10\x47\x08\x10\x82\x0b\x0f\xf6\x08\x10\x62\x08\x0f\x87\x08" \
	"\x10\x6a\x04\x0f\x78\x0d\x0f\xcd\x08\x0d\xae\x10\x0f\x5d\x0b\x0f\x98\x14\x0d\x20\x1b\x0d" \
	"\x20\x04\x0d\xe0\x14\x0e\xb4\x0b\x0f\xa3\x0b\x07\x34\x0f\x0d\x56\x04\x0e\xf4\x03\x10\xaf" \
	"\x07\x0d\x34\x09\x0f\x27\x04\x10\x9b\x04\x10\x9f\x09\x10\x59\x08\x10\x72\x09\x10\x35\x0a" \
	"\x10\x21\x0a\x10\x17\x08\x0f\xe3\x03\x10\xa9\x05\x0c\xac\x04\x0c\xbd\x07\x0c\xc1\x08\x0c" \
	"\xc1\x09\x0c\xf6\x10\x0c\x72\x0c\x0c\x86\x04\x0d\x64\x0c\x0c\xd5\x09\x0c\xff\x1b\x0b\xfc" \
	"\x11\x0c\x5d\x13\x0c\x30\x09\x0c\xa4\x0c\x0c\x24\x0c\x0d\x3b\x03\x0d\x1a\x03\x0d\x1d\x16" \
	"\x0c\x43\x09\x0c\x92\x09\x0c\x9b\x0d\x0e\xcb\x04\x0d\x16\x06\x0d\x10\x05\x04\xf2\x0b\x0c" \
	"\xe1\x05\x0b\xde\x0a\x0c\xec\x13\x0b\xe3\x07\x0b\xd4\x08\x0d\x08\x0c\x0c\xc9\x09\x0c\x3a" \
	"\x04\x0a\xe5\x0c\x0a\x23\x08\x0b\x3a\x0e\x09\xab\x0f\x0e\xfa\x09\x0f\x6f\x0c\x0a\x17\x0f" \
	"\x09\x76\x0c\x0a\x5f\x17\x0d\xe2\x0f\x07\xa8\x0a\x0f\x85\x0f\x08\xd6\x0e\x09\xb9\x0b\x0a" \
	"\x7a\x03\x0b\xdb\x03\x08\xc1\x04\x0e\xc7\x03\x08\xd3\x02\x04\x8d\x08\x0b\x4a\x05\x0b\x8c" \
	"\x07\x0b\x61\x06\x05\x48\x04\x07\xf4\x05\x10\x30\x04\x07\x1e\x08\x07\x1e\x05\x0b\x91\x10" \
	"\x04\xca\x09\x0a\x71\x09\x0e\x87\x05\x04\x98\x05\x0b\x6e\x0b\x04\x9b\x0f\x04\x9b\x07\x04" \
	"\x9b\x03\x04\xa3\x07\x04\xa3\x10\x07\x98\x09\x07\x98\x05\x0b\x73\x05\x0b\x78\x05\x0b\x7d" \
	"\x05\x07\xb9\x05\x0b\x82\x05\x0b\x87\x05\x0b\x1d\x05\x08\xe4\x05\x0c\x81\x05\x0f\x44\x05" \
	"\x11\x40\x05\x08\x78\x05\x08\x9d\x05\x0f\x58\x05\x07\x3f\x05\x0c\x6d\x05\x10\xf2\x05\x0c" \
	"\x58\x05\x06\xa9\x04\x07\xb6\x09\x05\x8c\x06\x06\x1a\x06\x0e\x81\x0a\x06\x16\x0a\x0a\xc4" \
	"\x07\x0b\x5a\x0a\x0a\xba\x03\x0b\x1b\x04\x11\x45\x06\x0c\x8c\x07\x05\xad\x0a\x0e\xda\x08" \
	"\x0b\x42\x0d\x09\xf7\x0b\x05\x1c\x09\x11\x16\x08\x05\xc9\x07\x0d\x86\x06\x0b\xcf\x0a\x06" \
	"\x4d\x04\x0b\xa2\x06\x06\x8d\x08\x05\xe6\x08\x0e\x11\x0b\x0a\x9b\x03\x0a\x04\x03\x0b\xb5" \
	"\x05\x10\xd7\x04\x09\x94\x05\x0a\xe2\x03\x0b\xb2\x06\x0d\x67\x04\x0d\x11\x08\x08\xb7\x1b" \
	"\x0e\x3b\x0a\x09\xa1\x14\x04\x85\x15\x07\x83\x15\x07\x6e\x0d\x09\x3d\x17\x06\xae\x0f\x07" \
	"\xe6\x14\x07\xbe\x0d\x06\x0a\x0d\x09\x30\x16\x06\xf2\x12\x08\x1e\x21\x04\xaa\x13\x10\xc5" \
	"\x08\x0a\x0f\x1c\x0e\x96\x18\x0b\xb8\x1a\x05\x95\x1a\x05\x75\x11\x06\x3d\x16\x06\xdc\x1e" \
	"\x0e\x19\x16\x05\xd1\x1d\x06\x20\x23\x05\x27\x11\x08\x7d\x11\x0d\x99\x16\x04\xda\x0d\x0f" \
	"\x1c\x16\x07\x08\x17\x05\xb4\x0d\x08\xc7\x13\x07\xf8\x12\x08\x57\x1f\x04\xfe\x19\x05\x4e" \
	"\x13\x08\x0b\x0f\x08\xe9\x17\x06\xc5\x13\x06\x7b\x19\x05\xf1\x15\x07\x44\x18\x0d\xfb\x0b" \
	"\x0f\x09\x1b\x0d\xbe\x12\x08\x30\x15\x07\x59\x04\x0b\xa6\x04\x0b\xae\x04\x0b\x9e\x04\x0b" \
	"\x96\x04\x0b\x9a\x0a\x0a\xb0\x0b\x0a\x90\x08\x0b\x32\x0b\x09\x6b\x08\x0b\x2a\x0b\x0a\x85" \
	"\x09\x0b\x12\x0a\x0a\xa6\x0d\x09\xea\x13\x0d\x74\x14\x07\xd2\x13\x09\x0b\x12\x08\x42\x10" \
	"\x09\x5b\x12\x09\x1e\x0d\x0c\xb1\x0e\x0c\x17\x11\x09\x4a\x0c\x0a\x53\x0c\x0a\x47\x09\x0a" \
	"\xf7\x0e\x09\xc7\x0c\x0a\x3b\x07\x06\x69\x08\x06\x69\x06\x09\xe3\x08\x0b\x52\x0a\x0a\xd8" \
	"\x12\x06\x57\x0d\x06\x57\x07\x09\xe3\x04\x0a\xe9\x10\x07\x30\x09\x0b\x00\x0c\x0a\x2f\x05" \
	"\x0a\xe9\x05\x0a\x6b\x06\x0a\x6b\x0a\x0a\xce\x09\x0a\xee\x03\x0b\xdb\x07\x0f\x7e\x0a\x09" \
	"\x97\x0a\x06\x71\x0e\x09\xd5\x17\x06\x93\x07\x0e\x5c\x07\x0f\xda\x0a\x0f\x35\x0d\x0d\xec" \
	"\x0a\x09\x97\x0a\x06\x71\x08\x0b\x22\x0f\x09\x85\x06\x0b\x68\x0c\x0d\x4a\x09\x0b\x09\x13" \
	"\x08\xf8\x15\x08\xa2\x04\x0b\xaa\x0f\x05\x66\x0d\x07\x23\x09\x0a\x06\x0b\x0d\x4a\x0f\x04" \
	"\xee\x06\x04\xf8\x04\x09\x2b\x04\x08\x53\x07\x08\xc0\x03\x11\x1f\x04\x11\x1e\x07\x0d\x8c" \
	"\x03\x07\x34\x04\x10\xdb\x03\x07\x36\x03\x0d\xa9\x0d\x04\x20\x0b\x04\x51\x0c\x04\x3a\x04" \
	"\x0b\xb8\x04\x0c\x24\x04\x05\x95\x04\x04\x7c\x04\x05\x75\x04\x04\x85\x04\x09\x6b\x04\x06" \
	"\x3d\x06\x04\x7b\x04\x06\xdc\x04\x07\x83\x04\x0e\x19\x12\x04\x00\x10\x08\x8e\x10\x08\x69" \
	"\x0e\x04\x12\x0d\x04\x2d\x03\x10\xb9\x04\x05\xd1\x04\x07\x6e\x04\x06\x20\x07\x04\x74\x04" \
	"\x0b\xfc\x0a\x04\x5c\x04\x05\x27\x04\x09\x3d\x04\x08\x7d\x04\x0f\xae\x04\x0d\x99\x04\x06" \
	"\xae\x04\x04\xda\x09\x04\x09\x08\x11\x22\x04\x0f\x1c\x04\x07\xe6\x04\x0e\xcb\x05\x08\xbd" \
	"\x04\x07\x08\x04\x0f\xa3\x04\x06\x57\x04\x05\xb4\x04\x0f\x5d\x04\x08\xc7\x08\x0b\xf4\x04" \
	"\x07\xf8\x04\x07\x30\x04\x07\xbe\x04\x08\x57\x05\x0d\x46\x04\x04\xfe\x04\x06\x0a\x04\x05" \
	"\x4e\x04\x0e\x3b\x04\x08\x0b\x04\x09\x30\x04\x08\xe9\x05\x05\xee\x04\x06\xc5\x04\x06\xf2" \
	"\x04\x06\x7b\x04\x09\xa1\x04\x05\xf1\x04\x08\x1e\x04\x07\x44\x04\x0b\xdd\x04\x0d\xfb\x04" \
	"\x04\xaa\x04\x0b\xe3\x07\x0e\xee\x04\x0f\x09\x04\x0e\xb4\x04\x0d\xbe\x04\x10\xc5\x04\x08" \
	"\x30\x05\x0f\x30\x04\x07\x59\x04\x0a\x0f\x06\x0e\x61\x04\x04\x81\x04\x0d\xab\x04\x0d\x93" \
	"\x04\x11\x6b\x04\x0e\x96\x05\x04\x66\x09\x04\x6b\x0b\x04\x46\x04\x0c\xe1"

#endif /* _TINYSIGCOMPP_RFC3485_H_ */


/* Automatically generated header (sfdc 1.5)! Do not edit! */
#ifndef PRAGMAS_AMISSL_PRAGMAS_H
#define PRAGMAS_AMISSL_PRAGMAS_H

/*
**	$VER: amissl_pragmas.h $Id$ $Id$
**
**	Direct ROM interface (pragma) definitions.
**
**	Copyright � 2001 Amiga, Inc.
**	    All Rights Reserved
*/

#if defined(LATTICE) || defined(__SASC) || defined(_DCC)
#ifndef __CLIB_PRAGMA_LIBCALL
#define __CLIB_PRAGMA_LIBCALL
#endif /* __CLIB_PRAGMA_LIBCALL */
#else /* __MAXON__, __STORM__ or AZTEC_C */
#ifndef __CLIB_PRAGMA_AMICALL
#define __CLIB_PRAGMA_AMICALL
#endif /* __CLIB_PRAGMA_AMICALL */
#endif /* */

#if defined(__SASC_60) || defined(__STORM__)
#ifndef __CLIB_PRAGMA_TAGCALL
#define __CLIB_PRAGMA_TAGCALL
#endif /* __CLIB_PRAGMA_TAGCALL */
#endif /* __MAXON__, __STORM__ or AZTEC_C */

#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase InitAmiSSLA 24 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24, InitAmiSSLA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLBase InitAmiSSL 24 801
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLBase, 0x24, InitAmiSSL(a0))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CleanupAmiSSLA 2a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a, CleanupAmiSSLA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLBase CleanupAmiSSL 2a 801
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLBase, 0x2a, CleanupAmiSSL(a0))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_new 66 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66, ASN1_TYPE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_free 6c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6c, ASN1_TYPE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_TYPE 72 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x72, d2i_ASN1_TYPE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_TYPE 78 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x78, i2d_ASN1_TYPE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ANY_it 7e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7e, ASN1_ANY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_get 84 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x84, ASN1_TYPE_get(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_set 8a 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8a, ASN1_TYPE_set(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OBJECT_new 90 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x90, ASN1_OBJECT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OBJECT_free 96 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x96, ASN1_OBJECT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_OBJECT 9c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9c, i2d_ASN1_OBJECT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_OBJECT a8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa8, d2i_ASN1_OBJECT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OBJECT_it ae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xae, ASN1_OBJECT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_new b4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb4, ASN1_STRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_free ba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xba, ASN1_STRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_dup c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc0, ASN1_STRING_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_type_new c6 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc6, ASN1_STRING_type_new(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_cmp cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcc, ASN1_STRING_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_set d2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd2, ASN1_STRING_set(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_length d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd8, ASN1_STRING_length(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_length_set de 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xde, ASN1_STRING_length_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_type e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe4, ASN1_STRING_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_data ea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xea, ASN1_STRING_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_new f0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf0, ASN1_BIT_STRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_free f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf6, ASN1_BIT_STRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_BIT_STRING fc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfc, d2i_ASN1_BIT_STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_BIT_STRING 102 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x102, i2d_ASN1_BIT_STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_it 108 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x108, ASN1_BIT_STRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_set 11a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11a, ASN1_BIT_STRING_set(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_set_bit 120 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x120, ASN1_BIT_STRING_set_bit(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_get_bit 126 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x126, ASN1_BIT_STRING_get_bit(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_name_print 12c 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12c, ASN1_BIT_STRING_name_print(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_num_asc 132 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x132, ASN1_BIT_STRING_num_asc(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_set_asc 138 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x138, ASN1_BIT_STRING_set_asc(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_new 14a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x14a, ASN1_INTEGER_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_free 150 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x150, ASN1_INTEGER_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_INTEGER 156 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x156, d2i_ASN1_INTEGER(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_INTEGER 15c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15c, i2d_ASN1_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_it 162 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x162, ASN1_INTEGER_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_UINTEGER 174 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x174, d2i_ASN1_UINTEGER(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_dup 17a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17a, ASN1_INTEGER_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_cmp 180 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x180, ASN1_INTEGER_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_new 186 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x186, ASN1_ENUMERATED_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_free 18c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18c, ASN1_ENUMERATED_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_ENUMERATED 192 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x192, d2i_ASN1_ENUMERATED(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_ENUMERATED 198 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x198, i2d_ASN1_ENUMERATED(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_it 19e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19e, ASN1_ENUMERATED_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_check 1a4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a4, ASN1_UTCTIME_check(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_set 1aa 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1aa, ASN1_UTCTIME_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_set_string 1b0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b0, ASN1_UTCTIME_set_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_cmp_time_t 1b6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b6, ASN1_UTCTIME_cmp_time_t(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_check 1bc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bc, ASN1_GENERALIZEDTIME_check(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_set 1c2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c2, ASN1_GENERALIZEDTIME_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_set_string 1c8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c8, ASN1_GENERALIZEDTIME_set_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_new 1ce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ce, ASN1_OCTET_STRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_free 1d4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d4, ASN1_OCTET_STRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_OCTET_STRING 1da 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1da, d2i_ASN1_OCTET_STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_OCTET_STRING 1e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e0, i2d_ASN1_OCTET_STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_it 1e6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e6, ASN1_OCTET_STRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_dup 1ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ec, ASN1_OCTET_STRING_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_cmp 1f2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f2, ASN1_OCTET_STRING_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_set 1f8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f8, ASN1_OCTET_STRING_set(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_VISIBLESTRING_new 1fe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fe, ASN1_VISIBLESTRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_VISIBLESTRING_free 204 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x204, ASN1_VISIBLESTRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_VISIBLESTRING 20a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20a, d2i_ASN1_VISIBLESTRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_VISIBLESTRING 210 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x210, i2d_ASN1_VISIBLESTRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_VISIBLESTRING_it 216 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x216, ASN1_VISIBLESTRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UNIVERSALSTRING_new 21c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21c, ASN1_UNIVERSALSTRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UNIVERSALSTRING_free 222 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x222, ASN1_UNIVERSALSTRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_UNIVERSALSTRING 228 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x228, d2i_ASN1_UNIVERSALSTRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_UNIVERSALSTRING 22e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22e, i2d_ASN1_UNIVERSALSTRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UNIVERSALSTRING_it 234 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x234, ASN1_UNIVERSALSTRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTF8STRING_new 23a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23a, ASN1_UTF8STRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTF8STRING_free 240 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x240, ASN1_UTF8STRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_UTF8STRING 246 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x246, d2i_ASN1_UTF8STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_UTF8STRING 24c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24c, i2d_ASN1_UTF8STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTF8STRING_it 252 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x252, ASN1_UTF8STRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_NULL_new 258 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x258, ASN1_NULL_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_NULL_free 25e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25e, ASN1_NULL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_NULL 264 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x264, d2i_ASN1_NULL(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_NULL 26a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26a, i2d_ASN1_NULL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_NULL_it 270 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x270, ASN1_NULL_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BMPSTRING_new 276 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x276, ASN1_BMPSTRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BMPSTRING_free 27c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27c, ASN1_BMPSTRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_BMPSTRING 282 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x282, d2i_ASN1_BMPSTRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_BMPSTRING 288 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x288, i2d_ASN1_BMPSTRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BMPSTRING_it 28e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28e, ASN1_BMPSTRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UTF8_getc 294 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x294, UTF8_getc(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UTF8_putc 29a 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29a, UTF8_putc(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLE_new 2a0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a0, ASN1_PRINTABLE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLE_free 2a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a6, ASN1_PRINTABLE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_PRINTABLE 2ac 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ac, d2i_ASN1_PRINTABLE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_PRINTABLE 2b2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b2, i2d_ASN1_PRINTABLE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLE_it 2b8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b8, ASN1_PRINTABLE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIRECTORYSTRING_new 2be 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2be, DIRECTORYSTRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIRECTORYSTRING_free 2c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c4, DIRECTORYSTRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DIRECTORYSTRING 2ca 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ca, d2i_DIRECTORYSTRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DIRECTORYSTRING 2d0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d0, i2d_DIRECTORYSTRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIRECTORYSTRING_it 2d6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d6, DIRECTORYSTRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DISPLAYTEXT_new 2dc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dc, DISPLAYTEXT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DISPLAYTEXT_free 2e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e2, DISPLAYTEXT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DISPLAYTEXT 2e8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e8, d2i_DISPLAYTEXT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DISPLAYTEXT 2ee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ee, i2d_DISPLAYTEXT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DISPLAYTEXT_it 2f4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f4, DISPLAYTEXT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLESTRING_new 2fa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fa, ASN1_PRINTABLESTRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLESTRING_free 300 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x300, ASN1_PRINTABLESTRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_PRINTABLESTRING 306 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x306, d2i_ASN1_PRINTABLESTRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_PRINTABLESTRING 30c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30c, i2d_ASN1_PRINTABLESTRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLESTRING_it 312 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x312, ASN1_PRINTABLESTRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_T61STRING_new 318 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x318, ASN1_T61STRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_T61STRING_free 31e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31e, ASN1_T61STRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_T61STRING 324 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x324, d2i_ASN1_T61STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_T61STRING 32a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32a, i2d_ASN1_T61STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_T61STRING_it 330 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x330, ASN1_T61STRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_IA5STRING_new 336 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x336, ASN1_IA5STRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_IA5STRING_free 33c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33c, ASN1_IA5STRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_IA5STRING 342 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x342, d2i_ASN1_IA5STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_IA5STRING 348 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x348, i2d_ASN1_IA5STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_IA5STRING_it 34e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34e, ASN1_IA5STRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALSTRING_new 354 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x354, ASN1_GENERALSTRING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALSTRING_free 35a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35a, ASN1_GENERALSTRING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_GENERALSTRING 360 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x360, d2i_ASN1_GENERALSTRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_GENERALSTRING 366 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x366, i2d_ASN1_GENERALSTRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALSTRING_it 36c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x36c, ASN1_GENERALSTRING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_new 372 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x372, ASN1_UTCTIME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_free 378 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x378, ASN1_UTCTIME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_UTCTIME 37e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37e, d2i_ASN1_UTCTIME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_UTCTIME 384 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x384, i2d_ASN1_UTCTIME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_it 38a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38a, ASN1_UTCTIME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_new 390 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x390, ASN1_GENERALIZEDTIME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_free 396 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x396, ASN1_GENERALIZEDTIME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_GENERALIZEDTIME 39c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39c, d2i_ASN1_GENERALIZEDTIME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_GENERALIZEDTIME 3a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a2, i2d_ASN1_GENERALIZEDTIME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_it 3a8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a8, ASN1_GENERALIZEDTIME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_new 3ae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ae, ASN1_TIME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_free 3b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b4, ASN1_TIME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_TIME 3ba 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ba, d2i_ASN1_TIME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_TIME 3c0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c0, i2d_ASN1_TIME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_it 3c6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c6, ASN1_TIME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_set 3cc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cc, ASN1_TIME_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_check 3d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d2, ASN1_TIME_check(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_to_generalizedtime 3d8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d8, ASN1_TIME_to_generalizedtime(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2a_ASN1_INTEGER 3ea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ea, i2a_ASN1_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_ASN1_INTEGER 3f0 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f0, a2i_ASN1_INTEGER(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2a_ASN1_ENUMERATED 3f6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f6, i2a_ASN1_ENUMERATED(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_ASN1_ENUMERATED 3fc 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fc, a2i_ASN1_ENUMERATED(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2a_ASN1_OBJECT 402 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x402, i2a_ASN1_OBJECT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_ASN1_STRING 408 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x408, a2i_ASN1_STRING(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2a_ASN1_STRING 40e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x40e, i2a_ASN1_STRING(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2t_ASN1_OBJECT 414 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x414, i2t_ASN1_OBJECT(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2d_ASN1_OBJECT 41a 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41a, a2d_ASN1_OBJECT(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OBJECT_create 420 a918005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x420, ASN1_OBJECT_create(d0,a0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_set 426 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x426, ASN1_INTEGER_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_get 42c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42c, ASN1_INTEGER_get(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_to_ASN1_INTEGER 432 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x432, BN_to_ASN1_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_to_BN 438 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x438, ASN1_INTEGER_to_BN(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_set 43e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43e, ASN1_ENUMERATED_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_get 444 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x444, ASN1_ENUMERATED_get(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_to_ASN1_ENUMERATED 44a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44a, BN_to_ASN1_ENUMERATED(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_to_BN 450 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x450, ASN1_ENUMERATED_to_BN(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PRINTABLE_type 456 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x456, ASN1_PRINTABLE_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_tag2bit 468 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x468, ASN1_tag2bit(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_get_object 47a 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47a, ASN1_get_object(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_check_infinite_end 480 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x480, ASN1_check_infinite_end(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_put_object 486 3210805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x486, ASN1_put_object(a0,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_object_size 48c 21003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48c, ASN1_object_size(d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_dup 492 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x492, ASN1_dup(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_dup 498 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x498, ASN1_item_dup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_to_UTF8 49e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49e, ASN1_STRING_to_UTF8(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_d2i_bio 4a4 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a4, ASN1_d2i_bio(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_d2i_bio 4aa a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4aa, ASN1_item_d2i_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_i2d_bio 4b0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b0, ASN1_i2d_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_i2d_bio 4b6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b6, ASN1_item_i2d_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_print 4bc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bc, ASN1_UTCTIME_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_print 4c2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4c2, ASN1_GENERALIZEDTIME_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_print 4c8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4c8, ASN1_TIME_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_print 4ce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ce, ASN1_STRING_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_print_ex 4d4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d4, ASN1_STRING_print_ex(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_parse 4da 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4da, ASN1_parse(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_parse_dump 4e0 2109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e0, ASN1_parse_dump(a0,a1,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_tag2str 4e6 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e6, ASN1_tag2str(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UNIVERSALSTRING_to_string 504 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x504, ASN1_UNIVERSALSTRING_to_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_set_octetstring 522 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x522, ASN1_TYPE_set_octetstring(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_get_octetstring 528 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x528, ASN1_TYPE_get_octetstring(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_set_int_octetstring 52e 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52e, ASN1_TYPE_set_int_octetstring(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_get_int_octetstring 534 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x534, ASN1_TYPE_get_int_octetstring(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_unpack 54c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54c, ASN1_item_unpack(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_pack 558 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x558, ASN1_item_pack(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_set_default_mask 55e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55e, ASN1_STRING_set_default_mask(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_set_default_mask_asc 564 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x564, ASN1_STRING_set_default_mask_asc(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_get_default_mask 56a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56a, ASN1_STRING_get_default_mask())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_mbstring_copy 570 2109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x570, ASN1_mbstring_copy(a0,a1,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_mbstring_ncopy 576 432109807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x576, ASN1_mbstring_ncopy(a0,a1,d0,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_set_by_NID 57c 2109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57c, ASN1_STRING_set_by_NID(a0,a1,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_TABLE_get 582 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x582, ASN1_STRING_TABLE_get(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_TABLE_add 588 4321005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x588, ASN1_STRING_TABLE_add(d0,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_TABLE_cleanup 58e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58e, ASN1_STRING_TABLE_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_new 594 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x594, ASN1_item_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_free 59a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59a, ASN1_item_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_d2i 5a0 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a0, ASN1_item_d2i(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_i2d 5a6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a6, ASN1_item_i2d(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_add_oid_module 5ac 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ac, ASN1_add_oid_module())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_ASN1_strings 5b2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b2, ERR_load_ASN1_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BOOLEAN_it 5c4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c4, ASN1_BOOLEAN_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TBOOLEAN_it 5ca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ca, ASN1_TBOOLEAN_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_FBOOLEAN_it 5d0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d0, ASN1_FBOOLEAN_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SEQUENCE_it 5d6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d6, ASN1_SEQUENCE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CBIGNUM_it 5dc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dc, CBIGNUM_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIGNUM_it 5e2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e2, BIGNUM_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase LONG_it 5e8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e8, LONG_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ZLONG_it 5ee 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ee, ZLONG_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_ex_new 5f4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f4, ASN1_item_ex_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_ex_free 5fa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fa, ASN1_item_ex_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_ex_d2i 618 b321a09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x618, ASN1_item_ex_d2i(a0,a1,d0,a2,d1,d2,d3,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_ex_i2d 61e 10a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61e, ASN1_item_ex_i2d(a0,a1,a2,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ctrl_pending 672 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x672, BIO_ctrl_pending(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ctrl_wpending 678 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x678, BIO_ctrl_wpending(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ctrl_get_write_guarantee 67e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67e, BIO_ctrl_get_write_guarantee(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ctrl_get_read_request 684 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x684, BIO_ctrl_get_read_request(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ctrl_reset_read_request 68a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68a, BIO_ctrl_reset_read_request(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set_ex_data 690 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x690, BIO_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_ex_data 696 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x696, BIO_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_number_read 6a2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6a2, BIO_number_read(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_number_written 6a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6a8, BIO_number_written(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_file 6ae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6ae, BIO_s_file())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_file 6b4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6b4, BIO_new_file(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_fp_amiga 6ba 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6ba, BIO_new_fp_amiga(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new 6c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6c0, BIO_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set 6c6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6c6, BIO_set(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_free 6cc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6cc, BIO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_vfree 6d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6d2, BIO_vfree(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_read 6d8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6d8, BIO_read(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_gets 6de 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6de, BIO_gets(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_write 6e4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6e4, BIO_write(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_puts 6ea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6ea, BIO_puts(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_indent 6f0 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6f0, BIO_indent(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ctrl 6f6 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6f6, BIO_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_callback_ctrl 6fc 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6fc, BIO_callback_ctrl(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ptr_ctrl 702 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x702, BIO_ptr_ctrl(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_int_ctrl 708 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x708, BIO_int_ctrl(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_push 70e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x70e, BIO_push(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_pop 714 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x714, BIO_pop(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_free_all 71a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x71a, BIO_free_all(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_find_type 720 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x720, BIO_find_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_next 726 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x726, BIO_next(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_retry_BIO 72c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x72c, BIO_get_retry_BIO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_retry_reason 732 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x732, BIO_get_retry_reason(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_dup_chain 738 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x738, BIO_dup_chain(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_nread0 73e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x73e, BIO_nread0(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_nread 744 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x744, BIO_nread(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_nwrite0 74a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x74a, BIO_nwrite0(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_nwrite 750 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x750, BIO_nwrite(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_debug_callback 756 32190806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x756, BIO_debug_callback(a0,d0,a1,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_mem 75c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x75c, BIO_s_mem())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_mem_buf 762 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x762, BIO_new_mem_buf(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_socket 768 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x768, BIO_s_socket())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_connect 76e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x76e, BIO_s_connect())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_accept 774 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x774, BIO_s_accept())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_fd 77a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x77a, BIO_s_fd())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_log 780 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x780, BIO_s_log())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_bio 786 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x786, BIO_s_bio())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_null 78c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x78c, BIO_s_null())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_null 792 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x792, BIO_f_null())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_buffer 798 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x798, BIO_f_buffer())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_nbio_test 79e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x79e, BIO_f_nbio_test())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_sock_should_retry 7a4 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7a4, BIO_sock_should_retry(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_sock_non_fatal_error 7aa 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7aa, BIO_sock_non_fatal_error(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_fd_should_retry 7b0 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7b0, BIO_fd_should_retry(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_fd_non_fatal_error 7b6 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7b6, BIO_fd_non_fatal_error(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_dump 7bc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7bc, BIO_dump(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_dump_indent 7c2 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7c2, BIO_dump_indent(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_gethostbyname 7c8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7c8, BIO_gethostbyname(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_sock_error 7ce 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7ce, BIO_sock_error(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_socket_ioctl 7d4 81003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7d4, BIO_socket_ioctl(d0,d1,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_socket_nbio 7da 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7da, BIO_socket_nbio(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_port 7e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7e0, BIO_get_port(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_host_ip 7e6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7e6, BIO_get_host_ip(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_accept_socket 7ec 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7ec, BIO_get_accept_socket(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_accept 7f2 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7f2, BIO_accept(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_sock_init 7f8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7f8, BIO_sock_init())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_sock_cleanup 7fe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x7fe, BIO_sock_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set_tcp_ndelay 804 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x804, BIO_set_tcp_ndelay(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_socket 80a 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x80a, BIO_new_socket(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_fd 810 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x810, BIO_new_fd(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_connect 816 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x816, BIO_new_connect(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_accept 81c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x81c, BIO_new_accept(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_bio_pair 822 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x822, BIO_new_bio_pair(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_copy_next_retry 828 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x828, BIO_copy_next_retry(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_vprintf 82e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x82e, BIO_vprintf(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLBase BIO_printf 82e a9803
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLBase, 0x82e, BIO_printf(a0,a1,a2))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_vsnprintf 834 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x834, BIO_vsnprintf(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLBase BIO_snprintf 834 a90804
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLBase, 0x834, BIO_snprintf(a0,d0,a1,a2))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_BIO_strings 83a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x83a, ERR_load_BIO_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_value_one 840 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x840, BN_value_one())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_options 846 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x846, BN_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_CTX_new 84c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x84c, BN_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_CTX_free 858 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x858, BN_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_CTX_start 85e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x85e, BN_CTX_start(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_CTX_get 864 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x864, BN_CTX_get(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_CTX_end 86a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x86a, BN_CTX_end(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_rand 870 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x870, BN_rand(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_pseudo_rand 876 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x876, BN_pseudo_rand(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_rand_range 87c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x87c, BN_rand_range(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_pseudo_rand_range 882 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x882, BN_pseudo_rand_range(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_num_bits 888 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x888, BN_num_bits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_num_bits_word 88e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x88e, BN_num_bits_word(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_new 894 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x894, BN_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_clear_free 8a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8a0, BN_clear_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_copy 8a6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8a6, BN_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_swap 8ac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8ac, BN_swap(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bin2bn 8b2 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8b2, BN_bin2bn(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bn2bin 8b8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8b8, BN_bn2bin(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mpi2bn 8be 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8be, BN_mpi2bn(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bn2mpi 8c4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8c4, BN_bn2mpi(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_sub 8ca a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8ca, BN_sub(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_usub 8d0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8d0, BN_usub(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_uadd 8d6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8d6, BN_uadd(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_add 8dc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8dc, BN_add(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mul 8e2 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8e2, BN_mul(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_sqr 8e8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8e8, BN_sqr(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_div 8ee 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8ee, BN_div(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nnmod 8f4 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8f4, BN_nnmod(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_add 8fa 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x8fa, BN_mod_add(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_add_quick 900 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x900, BN_mod_add_quick(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_sub 906 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x906, BN_mod_sub(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_sub_quick 90c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x90c, BN_mod_sub_quick(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_mul 912 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x912, BN_mod_mul(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_sqr 918 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x918, BN_mod_sqr(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_lshift1 91e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x91e, BN_mod_lshift1(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_lshift1_quick 924 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x924, BN_mod_lshift1_quick(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_lshift 92a ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x92a, BN_mod_lshift(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_lshift_quick 930 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x930, BN_mod_lshift_quick(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_word 936 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x936, BN_mod_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_div_word 93c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x93c, BN_div_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mul_word 942 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x942, BN_mul_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_add_word 948 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x948, BN_add_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_sub_word 94e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x94e, BN_sub_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_set_word 954 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x954, BN_set_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get_word 95a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x95a, BN_get_word(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_cmp 960 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x960, BN_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_free 966 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x966, BN_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_bit_set 96c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x96c, BN_is_bit_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_lshift 972 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x972, BN_lshift(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_lshift1 978 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x978, BN_lshift1(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_exp 97e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x97e, BN_exp(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp 984 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x984, BN_mod_exp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp_mont 98a 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x98a, BN_mod_exp_mont(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp_mont_word 990 1ba90806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x990, BN_mod_exp_mont_word(a0,d0,a1,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp2_mont 996 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x996, BN_mod_exp2_mont(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp_simple 99c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x99c, BN_mod_exp_simple(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mask_bits 9a2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9a2, BN_mask_bits(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_print 9a8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9a8, BN_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_reciprocal 9ae a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9ae, BN_reciprocal(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_rshift 9b4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9b4, BN_rshift(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_rshift1 9ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9ba, BN_rshift1(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_clear 9c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9c0, BN_clear(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_dup 9c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9c6, BN_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_ucmp 9cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9cc, BN_ucmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_set_bit 9d2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9d2, BN_set_bit(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_clear_bit 9d8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9d8, BN_clear_bit(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bn2hex 9de 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9de, BN_bn2hex(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bn2dec 9e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9e4, BN_bn2dec(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_hex2bn 9ea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9ea, BN_hex2bn(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_dec2bn 9f0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9f0, BN_dec2bn(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_gcd 9f6 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9f6, BN_gcd(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_kronecker 9fc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x9fc, BN_kronecker(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_inverse a02 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa02, BN_mod_inverse(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_sqrt a08 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa08, BN_mod_sqrt(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_generate_prime a0e 2ba910807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa0e, BN_generate_prime(a0,d0,d1,a1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_prime a14 ba90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa14, BN_is_prime(a0,d0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_prime_fasttest a1a 1ba90806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa1a, BN_is_prime_fasttest(a0,d0,a1,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_MONT_CTX_new a20 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa20, BN_MONT_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_mul_montgomery a2c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa2c, BN_mod_mul_montgomery(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_from_montgomery a32 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa32, BN_from_montgomery(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_MONT_CTX_free a38 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa38, BN_MONT_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_MONT_CTX_set a3e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa3e, BN_MONT_CTX_set(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_MONT_CTX_copy a44 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa44, BN_MONT_CTX_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_new a4a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa4a, BN_BLINDING_new(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_free a50 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa50, BN_BLINDING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_update a56 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa56, BN_BLINDING_update(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_convert a5c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa5c, BN_BLINDING_convert(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_invert a62 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa62, BN_BLINDING_invert(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_set_params a68 321004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa68, BN_set_params(d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get_params a6e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa6e, BN_get_params(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_RECP_CTX_new a7a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa7a, BN_RECP_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_RECP_CTX_free a80 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa80, BN_RECP_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_RECP_CTX_set a86 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa86, BN_RECP_CTX_set(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_mul_reciprocal a8c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa8c, BN_mod_mul_reciprocal(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp_recp a92 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa92, BN_mod_exp_recp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_div_recp a98 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xa98, BN_div_recp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bntest_rand ace 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xace, BN_bntest_rand(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_BN_strings ad4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xad4, ERR_load_BN_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_MEM_new ada 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xada, BUF_MEM_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_MEM_free ae0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xae0, BUF_MEM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_MEM_grow ae6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xae6, BUF_MEM_grow(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_MEM_grow_clean aec 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xaec, BUF_MEM_grow_clean(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_BUF_strings b04 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb04, ERR_load_BUF_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_CTX_new b0a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb0a, COMP_CTX_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_CTX_free b10 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb10, COMP_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_compress_block b16 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb16, COMP_compress_block(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_expand_block b1c 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb1c, COMP_expand_block(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_zlib b28 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb28, COMP_zlib())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_COMP_strings b2e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb2e, ERR_load_COMP_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_set_default_method b34 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb34, CONF_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_set_nconf b3a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb3a, CONF_set_nconf(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_load b40 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb40, CONF_load(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_load_bio b46 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb46, CONF_load_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_get_section b4c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb4c, CONF_get_section(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_get_string b52 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb52, CONF_get_string(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_get_number b58 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb58, CONF_get_number(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_free b5e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb5e, CONF_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_dump_bio b64 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb64, CONF_dump_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_config b6a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb6a, OPENSSL_config(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_new b76 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb76, NCONF_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_default b7c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb7c, NCONF_default())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_WIN32 b82 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb82, NCONF_WIN32())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_free b88 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb88, NCONF_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_free_data b8e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb8e, NCONF_free_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_load b94 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb94, NCONF_load(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_load_bio b9a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xb9a, NCONF_load_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_get_section ba0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xba0, NCONF_get_section(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_get_string ba6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xba6, NCONF_get_string(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_get_number_e bac ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbac, NCONF_get_number_e(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NCONF_dump_bio bb2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbb2, NCONF_dump_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_modules_load bb8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbb8, CONF_modules_load(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_modules_load_file bbe 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbbe, CONF_modules_load_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_modules_unload bc4 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbc4, CONF_modules_unload(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_modules_finish bca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbca, CONF_modules_finish())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_modules_free bd0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbd0, CONF_modules_free())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_module_add bd6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbd6, CONF_module_add(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_get_name bdc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbdc, CONF_imodule_get_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_get_value be2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbe2, CONF_imodule_get_value(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_get_usr_data be8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbe8, CONF_imodule_get_usr_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_set_usr_data bee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbee, CONF_imodule_set_usr_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_get_module bf4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbf4, CONF_imodule_get_module(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_get_flags bfa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xbfa, CONF_imodule_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_imodule_set_flags c00 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc00, CONF_imodule_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_module_get_usr_data c06 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc06, CONF_module_get_usr_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_module_set_usr_data c0c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc0c, CONF_module_set_usr_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_get1_default_config_file c12 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc12, CONF_get1_default_config_file())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CONF_parse_list c18 a910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc18, CONF_parse_list(a0,d0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_load_builtin_modules c1e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc1e, OPENSSL_load_builtin_modules())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_CONF_strings c24 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc24, ERR_load_CONF_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_mem_ctrl c54 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc54, CRYPTO_mem_ctrl(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_issetugid c6c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc6c, OPENSSL_issetugid())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_ex_new_index c84 ba981006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc84, CRYPTO_get_ex_new_index(d0,d1,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_new_ex_data c8a 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc8a, CRYPTO_new_ex_data(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_dup_ex_data c90 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc90, CRYPTO_dup_ex_data(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_free_ex_data c96 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc96, CRYPTO_free_ex_data(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_ex_data c9c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xc9c, CRYPTO_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_ex_data ca2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xca2, CRYPTO_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cleanup_all_ex_data ca8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xca8, CRYPTO_cleanup_all_ex_data())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_new_lockid cae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcae, CRYPTO_get_new_lockid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_num_locks cb4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcb4, CRYPTO_num_locks())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_lock cba 281004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcba, CRYPTO_lock(d0,d1,a0,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_locking_callback cc0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcc0, CRYPTO_set_locking_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_locking_callback cc6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcc6, CRYPTO_get_locking_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_add_lock_callback ccc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xccc, CRYPTO_set_add_lock_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_add_lock_callback cd2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcd2, CRYPTO_get_add_lock_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_id_callback cd8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcd8, CRYPTO_set_id_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_id_callback cde 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcde, CRYPTO_get_id_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_thread_id ce4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xce4, CRYPTO_thread_id())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_lock_name cea 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcea, CRYPTO_get_lock_name(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_add_lock cf0 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcf0, CRYPTO_add_lock(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_new_dynlockid cf6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcf6, CRYPTO_get_new_dynlockid())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_destroy_dynlockid cfc 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xcfc, CRYPTO_destroy_dynlockid(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_dynlock_value d02 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd02, CRYPTO_get_dynlock_value(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_dynlock_create_callback d08 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd08, CRYPTO_set_dynlock_create_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_dynlock_lock_callback d0e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd0e, CRYPTO_set_dynlock_lock_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_dynlock_destroy_callback d14 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd14, CRYPTO_set_dynlock_destroy_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_dynlock_create_callback d1a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd1a, CRYPTO_get_dynlock_create_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_dynlock_lock_callback d20 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd20, CRYPTO_get_dynlock_lock_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_dynlock_destroy_callback d26 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd26, CRYPTO_get_dynlock_destroy_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_mem_functions d2c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd2c, CRYPTO_set_mem_functions(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_get_mem_functions d4a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd4a, CRYPTO_get_mem_functions(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_malloc d74 18003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd74, CRYPTO_malloc(d0,a0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_free d7a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd7a, CRYPTO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_realloc d80 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd80, CRYPTO_realloc(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_cleanse d92 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xd92, OPENSSL_cleanse(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OpenSSLDie de0 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xde0, OpenSSLDie(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_new dec 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdec, DSO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_new_method df2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdf2, DSO_new_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_free df8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdf8, DSO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_flags dfe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xdfe, DSO_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_up_ref e04 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe04, DSO_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_ctrl e0a 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe0a, DSO_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_set_name_converter e10 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe10, DSO_set_name_converter(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_get_filename e16 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe16, DSO_get_filename(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_set_filename e1c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe1c, DSO_set_filename(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_convert_filename e22 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe22, DSO_convert_filename(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_get_loaded_filename e28 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe28, DSO_get_loaded_filename(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_set_default_method e2e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe2e, DSO_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_get_default_method e34 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe34, DSO_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_get_method e3a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe3a, DSO_get_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_set_method e40 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe40, DSO_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_load e46 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe46, DSO_load(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_bind_var e4c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe4c, DSO_bind_var(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_bind_func e52 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe52, DSO_bind_func(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_openssl e58 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe58, DSO_METHOD_openssl())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_null e5e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe5e, DSO_METHOD_null())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_dlfcn e64 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe64, DSO_METHOD_dlfcn())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_dl e6a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe6a, DSO_METHOD_dl())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_win32 e70 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe70, DSO_METHOD_win32())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_METHOD_vms e76 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe76, DSO_METHOD_vms())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_DSO_strings e7c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe7c, ERR_load_DSO_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GFp_simple_method e82 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe82, EC_GFp_simple_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GFp_mont_method e88 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe88, EC_GFp_mont_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_new e8e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe8e, EC_GROUP_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_free e94 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe94, EC_GROUP_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_clear_free e9a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xe9a, EC_GROUP_clear_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_copy ea0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xea0, EC_GROUP_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_method_of ea6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xea6, EC_GROUP_method_of(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_curve_GFp eac 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xeac, EC_GROUP_set_curve_GFp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_curve_GFp eb2 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xeb2, EC_GROUP_get_curve_GFp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_new_curve_GFp eb8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xeb8, EC_GROUP_new_curve_GFp(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_generator ebe ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xebe, EC_GROUP_set_generator(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get0_generator ec4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xec4, EC_GROUP_get0_generator(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_order eca a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xeca, EC_GROUP_get_order(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_cofactor ed0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xed0, EC_GROUP_get_cofactor(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_new ed6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xed6, EC_POINT_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_free edc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xedc, EC_POINT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_clear_free ee2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xee2, EC_POINT_clear_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_copy ee8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xee8, EC_POINT_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_method_of eee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xeee, EC_POINT_method_of(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_set_to_infinity ef4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xef4, EC_POINT_set_to_infinity(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_set_Jprojective_coordinates_GFp efa 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xefa, EC_POINT_set_Jprojective_coordinates_GFp(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_get_Jprojective_coordinates_GFp f00 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf00, EC_POINT_get_Jprojective_coordinates_GFp(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_set_affine_coordinates_GFp f06 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf06, EC_POINT_set_affine_coordinates_GFp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_get_affine_coordinates_GFp f0c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf0c, EC_POINT_get_affine_coordinates_GFp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_set_compressed_coordinates_GFp f12 b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf12, EC_POINT_set_compressed_coordinates_GFp(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_point2oct f18 b1a09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf18, EC_POINT_point2oct(a0,a1,d0,a2,d1,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_oct2point f1e b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf1e, EC_POINT_oct2point(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_add f24 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf24, EC_POINT_add(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_dbl f2a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf2a, EC_POINT_dbl(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_invert f30 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf30, EC_POINT_invert(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_is_at_infinity f36 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf36, EC_POINT_is_at_infinity(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_is_on_curve f3c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf3c, EC_POINT_is_on_curve(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_cmp f42 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf42, EC_POINT_cmp(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_make_affine f48 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf48, EC_POINT_make_affine(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINTs_make_affine f4e a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf4e, EC_POINTs_make_affine(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINTs_mul f54 21b0a9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf54, EC_POINTs_mul(a0,a1,a2,d0,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_mul f5a 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf5a, EC_POINT_mul(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_precompute_mult f60 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf60, EC_GROUP_precompute_mult(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_EC_strings f66 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf66, ERR_load_EC_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_put_error f6c 3821005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf6c, ERR_put_error(d0,d1,d2,a0,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_set_error_data f72 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf72, ERR_set_error_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_error f78 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf78, ERR_get_error())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_error_line f7e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf7e, ERR_get_error_line(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_error_line_data f84 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf84, ERR_get_error_line_data(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_peek_error f8a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf8a, ERR_peek_error())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_peek_error_line f90 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf90, ERR_peek_error_line(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_peek_error_line_data f96 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf96, ERR_peek_error_line_data(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_peek_last_error f9c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xf9c, ERR_peek_last_error())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_peek_last_error_line fa2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfa2, ERR_peek_last_error_line(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_peek_last_error_line_data fa8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfa8, ERR_peek_last_error_line_data(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_clear_error fae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfae, ERR_clear_error())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_error_string fb4 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfb4, ERR_error_string(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_error_string_n fba 18003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfba, ERR_error_string_n(d0,a0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_lib_error_string fc0 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfc0, ERR_lib_error_string(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_func_error_string fc6 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfc6, ERR_func_error_string(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_reason_error_string fcc 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfcc, ERR_reason_error_string(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_print_errors_cb fd2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfd2, ERR_print_errors_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_print_errors fd8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfd8, ERR_print_errors(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_add_error_vdata fde 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfde, ERR_add_error_vdata(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLBase ERR_add_error_data fde 8002
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLBase, 0xfde, ERR_add_error_data(d0,a0))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_strings fe4 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfe4, ERR_load_strings(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_unload_strings fea 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xfea, ERR_unload_strings(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_ERR_strings ff0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xff0, ERR_load_ERR_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_crypto_strings ff6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xff6, ERR_load_crypto_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_free_strings ffc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0xffc, ERR_free_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_remove_state 1002 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1002, ERR_remove_state(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_state 1008 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1008, ERR_get_state())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_string_table 100e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x100e, ERR_get_string_table())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_err_state_table 1014 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1014, ERR_get_err_state_table())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_release_err_state_table 101a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x101a, ERR_release_err_state_table(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_get_next_error_library 1020 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1020, ERR_get_next_error_library())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_copy_ex 104a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x104a, EVP_MD_CTX_copy_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestInit_ex 1050 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1050, EVP_DigestInit_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestUpdate 1056 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1056, EVP_DigestUpdate(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestFinal_ex 105c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x105c, EVP_DigestFinal_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_Digest 1062 1ba90806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1062, EVP_Digest(a0,d0,a1,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_copy 1068 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1068, EVP_MD_CTX_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestInit 106e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x106e, EVP_DigestInit(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestFinal 1074 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1074, EVP_DigestFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_read_pw_string 107a 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x107a, EVP_read_pw_string(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_set_pw_prompt 1080 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1080, EVP_set_pw_prompt(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_get_pw_prompt 1086 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1086, EVP_get_pw_prompt())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_BytesToKey 108c 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x108c, EVP_BytesToKey(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncryptInit 1092 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1092, EVP_EncryptInit(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncryptInit_ex 1098 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1098, EVP_EncryptInit_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncryptUpdate 109e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x109e, EVP_EncryptUpdate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncryptFinal_ex 10a4 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10a4, EVP_EncryptFinal_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncryptFinal 10aa a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10aa, EVP_EncryptFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecryptInit 10b0 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10b0, EVP_DecryptInit(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecryptInit_ex 10b6 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10b6, EVP_DecryptInit_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecryptUpdate 10bc 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10bc, EVP_DecryptUpdate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecryptFinal 10c2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10c2, EVP_DecryptFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecryptFinal_ex 10c8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10c8, EVP_DecryptFinal_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CipherInit 10ce 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10ce, EVP_CipherInit(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CipherInit_ex 10d4 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10d4, EVP_CipherInit_ex(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CipherUpdate 10da 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10da, EVP_CipherUpdate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CipherFinal 10e0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10e0, EVP_CipherFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CipherFinal_ex 10e6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10e6, EVP_CipherFinal_ex(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_SignFinal 10ec ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10ec, EVP_SignFinal(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_VerifyFinal 10f2 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10f2, EVP_VerifyFinal(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_OpenInit 10f8 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10f8, EVP_OpenInit(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_OpenFinal 10fe a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x10fe, EVP_OpenFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_SealInit 1104 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1104, EVP_SealInit(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_SealFinal 110a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x110a, EVP_SealFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncodeInit 1110 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1110, EVP_EncodeInit(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncodeUpdate 1116 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1116, EVP_EncodeUpdate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncodeFinal 111c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x111c, EVP_EncodeFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_EncodeBlock 1122 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1122, EVP_EncodeBlock(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecodeInit 1128 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1128, EVP_DecodeInit(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecodeUpdate 112e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x112e, EVP_DecodeUpdate(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecodeFinal 1134 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1134, EVP_DecodeFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DecodeBlock 113a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x113a, EVP_DecodeBlock(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_set_key_length 114c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x114c, EVP_CIPHER_CTX_set_key_length(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_set_padding 1152 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1152, EVP_CIPHER_CTX_set_padding(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_ctrl 1158 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1158, EVP_CIPHER_CTX_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_md 115e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x115e, BIO_f_md())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_base64 1164 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1164, BIO_f_base64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_cipher 116a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x116a, BIO_f_cipher())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_reliable 1170 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1170, BIO_f_reliable())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set_cipher 1176 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1176, BIO_set_cipher(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_md_null 117c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x117c, EVP_md_null())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_md2 1182 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1182, EVP_md2())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_md4 1188 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1188, EVP_md4())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_md5 118e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x118e, EVP_md5())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_sha1 119a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x119a, EVP_sha1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_mdc2 11ac 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11ac, EVP_mdc2())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_ripemd160 11b2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11b2, EVP_ripemd160())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_enc_null 11b8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11b8, EVP_enc_null())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ecb 11be 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11be, EVP_des_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede 11c4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11c4, EVP_des_ede())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3 11ca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11ca, EVP_des_ede3())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede_ecb 11d0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11d0, EVP_des_ede_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_ecb 11d6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11d6, EVP_des_ede3_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_cfb64 11dc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11dc, EVP_des_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_cfb1 11e2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11e2, EVP_des_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_cfb8 11e8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11e8, EVP_des_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede_cfb64 11ee 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11ee, EVP_des_ede_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_cfb64 11f4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11f4, EVP_des_ede3_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_cfb1 11fa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x11fa, EVP_des_ede3_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_cfb8 1200 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1200, EVP_des_ede3_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ofb 1206 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1206, EVP_des_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede_ofb 120c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x120c, EVP_des_ede_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_ofb 1212 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1212, EVP_des_ede3_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_cbc 1218 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1218, EVP_des_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede_cbc 121e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x121e, EVP_des_ede_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_cbc 1224 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1224, EVP_des_ede3_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_desx_cbc 122a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x122a, EVP_desx_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc4 1230 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1230, EVP_rc4())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc4_40 1236 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1236, EVP_rc4_40())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_idea_ecb 123c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x123c, EVP_idea_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_idea_cfb64 1242 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1242, EVP_idea_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_idea_ofb 1248 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1248, EVP_idea_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_idea_cbc 124e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x124e, EVP_idea_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc2_ecb 1254 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1254, EVP_rc2_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc2_cbc 125a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x125a, EVP_rc2_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc2_40_cbc 1260 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1260, EVP_rc2_40_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc2_64_cbc 1266 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1266, EVP_rc2_64_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc2_cfb64 126c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x126c, EVP_rc2_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc2_ofb 1272 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1272, EVP_rc2_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_bf_ecb 1278 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1278, EVP_bf_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_bf_cbc 127e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x127e, EVP_bf_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_bf_cfb64 1284 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1284, EVP_bf_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_bf_ofb 128a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x128a, EVP_bf_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_cast5_ecb 1290 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1290, EVP_cast5_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_cast5_cbc 1296 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1296, EVP_cast5_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_cast5_cfb64 129c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x129c, EVP_cast5_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_cast5_ofb 12a2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12a2, EVP_cast5_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc5_32_12_16_cbc 12a8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12a8, EVP_rc5_32_12_16_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc5_32_12_16_ecb 12ae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12ae, EVP_rc5_32_12_16_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc5_32_12_16_cfb64 12b4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12b4, EVP_rc5_32_12_16_cfb64())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc5_32_12_16_ofb 12ba 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12ba, EVP_rc5_32_12_16_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_ecb 12c0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12c0, EVP_aes_128_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_cbc 12c6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12c6, EVP_aes_128_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_cfb1 12cc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12cc, EVP_aes_128_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_cfb8 12d2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12d2, EVP_aes_128_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_cfb128 12d8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12d8, EVP_aes_128_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_ofb 12de 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12de, EVP_aes_128_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_ecb 12e4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12e4, EVP_aes_192_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_cbc 12ea 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12ea, EVP_aes_192_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_cfb1 12f0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12f0, EVP_aes_192_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_cfb8 12f6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12f6, EVP_aes_192_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_cfb128 12fc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x12fc, EVP_aes_192_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_ofb 1302 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1302, EVP_aes_192_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_ecb 1308 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1308, EVP_aes_256_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_cbc 130e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x130e, EVP_aes_256_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_cfb1 1314 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1314, EVP_aes_256_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_cfb8 131a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x131a, EVP_aes_256_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_cfb128 1320 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1320, EVP_aes_256_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_ofb 1326 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1326, EVP_aes_256_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_add_cipher 1344 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1344, EVP_add_cipher(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_add_digest 134a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x134a, EVP_add_digest(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_get_cipherbyname 1350 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1350, EVP_get_cipherbyname(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_get_digestbyname 1356 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1356, EVP_get_digestbyname(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_cleanup 135c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x135c, EVP_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_decrypt 1362 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1362, EVP_PKEY_decrypt(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_encrypt 1368 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1368, EVP_PKEY_encrypt(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_type 136e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x136e, EVP_PKEY_type(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_bits 1374 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1374, EVP_PKEY_bits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_size 137a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x137a, EVP_PKEY_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_assign 1380 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1380, EVP_PKEY_assign(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_set1_RSA 1386 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1386, EVP_PKEY_set1_RSA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get1_RSA 138c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x138c, EVP_PKEY_get1_RSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_set1_DSA 1392 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1392, EVP_PKEY_set1_DSA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get1_DSA 1398 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1398, EVP_PKEY_get1_DSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_set1_DH 139e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x139e, EVP_PKEY_set1_DH(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get1_DH 13a4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13a4, EVP_PKEY_get1_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_new 13aa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13aa, EVP_PKEY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_free 13b0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13b0, EVP_PKEY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PublicKey 13b6 198004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13b6, d2i_PublicKey(d0,a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PublicKey 13bc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13bc, i2d_PublicKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PrivateKey 13c2 198004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13c2, d2i_PrivateKey(d0,a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_AutoPrivateKey 13c8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13c8, d2i_AutoPrivateKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PrivateKey 13ce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13ce, i2d_PrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_copy_parameters 13d4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13d4, EVP_PKEY_copy_parameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_missing_parameters 13da 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13da, EVP_PKEY_missing_parameters(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_save_parameters 13e0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13e0, EVP_PKEY_save_parameters(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_cmp_parameters 13e6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13e6, EVP_PKEY_cmp_parameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_type 13ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13ec, EVP_CIPHER_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_param_to_asn1 13f2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13f2, EVP_CIPHER_param_to_asn1(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_asn1_to_param 13f8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13f8, EVP_CIPHER_asn1_to_param(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_set_asn1_iv 13fe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x13fe, EVP_CIPHER_set_asn1_iv(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_get_asn1_iv 1404 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1404, EVP_CIPHER_get_asn1_iv(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_PBE_keyivgen 140a 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x140a, PKCS5_PBE_keyivgen(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_PBKDF2_HMAC_SHA1 1410 a32190807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1410, PKCS5_PBKDF2_HMAC_SHA1(a0,d0,a1,d1,d2,d3,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_v2_PBE_keyivgen 1416 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1416, PKCS5_v2_PBE_keyivgen(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_PBE_add 141c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x141c, PKCS5_PBE_add())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PBE_CipherInit 1422 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1422, EVP_PBE_CipherInit(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PBE_alg_add 1428 a98004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1428, EVP_PBE_alg_add(d0,a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PBE_cleanup 142e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x142e, EVP_PBE_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_EVP_strings 1434 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1434, ERR_load_EVP_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_Init 1446 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1446, HMAC_Init(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_Init_ex 144c ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x144c, HMAC_Init_ex(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_Update 1452 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1452, HMAC_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_Final 1458 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1458, HMAC_Final(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC 145e 2b1a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x145e, HMAC(a0,a1,d0,a2,d1,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_new 15ae 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15ae, lh_new(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_free 15b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15b4, lh_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_insert 15ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15ba, lh_insert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_delete 15c0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15c0, lh_delete(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_retrieve 15c6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15c6, lh_retrieve(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_doall 15cc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15cc, lh_doall(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_doall_arg 15d2 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15d2, lh_doall_arg(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_strhash 15d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15d8, lh_strhash(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_num_items 15de 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15de, lh_num_items(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_stats_bio 15e4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15e4, lh_stats_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_node_stats_bio 15ea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15ea, lh_node_stats_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_node_usage_stats_bio 15f0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15f0, lh_node_usage_stats_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_init 15f6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15f6, OBJ_NAME_init())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_new_index 15fc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x15fc, OBJ_NAME_new_index(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_get 1602 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1602, OBJ_NAME_get(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_add 1608 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1608, OBJ_NAME_add(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_remove 160e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x160e, OBJ_NAME_remove(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_cleanup 1614 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1614, OBJ_NAME_cleanup(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_do_all 161a 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x161a, OBJ_NAME_do_all(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_NAME_do_all_sorted 1620 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1620, OBJ_NAME_do_all_sorted(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_dup 1626 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1626, OBJ_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_nid2obj 162c 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x162c, OBJ_nid2obj(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_nid2ln 1632 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1632, OBJ_nid2ln(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_nid2sn 1638 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1638, OBJ_nid2sn(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_obj2nid 163e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x163e, OBJ_obj2nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_txt2obj 1644 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1644, OBJ_txt2obj(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_obj2txt 164a 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x164a, OBJ_obj2txt(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_txt2nid 1650 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1650, OBJ_txt2nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_ln2nid 1656 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1656, OBJ_ln2nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_sn2nid 165c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x165c, OBJ_sn2nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_cmp 1662 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1662, OBJ_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_new_nid 166e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x166e, OBJ_new_nid(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_add_object 1674 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1674, OBJ_add_object(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_create 167a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x167a, OBJ_create(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_cleanup 1680 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1680, OBJ_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_create_objects 1686 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1686, OBJ_create_objects(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_OBJ_strings 168c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x168c, ERR_load_OBJ_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_sendreq_bio 1692 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1692, OCSP_sendreq_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_cert_to_id 1698 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1698, OCSP_cert_to_id(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_cert_id_new 169e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x169e, OCSP_cert_id_new(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_add0_id 16a4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16a4, OCSP_request_add0_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_add1_nonce 16aa 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16aa, OCSP_request_add1_nonce(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_basic_add1_nonce 16b0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16b0, OCSP_basic_add1_nonce(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_check_nonce 16b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16b6, OCSP_check_nonce(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_copy_nonce 16bc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16bc, OCSP_copy_nonce(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_set1_name 16c2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16c2, OCSP_request_set1_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_add1_cert 16c8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16c8, OCSP_request_add1_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_sign 16ce 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16ce, OCSP_request_sign(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_response_status 16d4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16d4, OCSP_response_status(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_response_get1_basic 16da 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16da, OCSP_response_get1_basic(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_resp_count 16e0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16e0, OCSP_resp_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_resp_get0 16e6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16e6, OCSP_resp_get0(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_resp_find 16ec 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16ec, OCSP_resp_find(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_single_get0_status 16f2 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16f2, OCSP_single_get0_status(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_resp_find_status 16f8 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16f8, OCSP_resp_find_status(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_check_validity 16fe 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x16fe, OCSP_check_validity(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_verify 1704 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1704, OCSP_request_verify(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_parse_url 170a 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x170a, OCSP_parse_url(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_id_issuer_cmp 1710 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1710, OCSP_id_issuer_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_id_cmp 1716 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1716, OCSP_id_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_onereq_count 171c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x171c, OCSP_request_onereq_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_onereq_get0 1722 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1722, OCSP_request_onereq_get0(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_onereq_get0_id 1728 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1728, OCSP_onereq_get0_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_id_get0_info 172e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x172e, OCSP_id_get0_info(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_request_is_signed 1734 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1734, OCSP_request_is_signed(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_response_create 173a 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x173a, OCSP_response_create(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_basic_add1_status 1740 2ba109807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1740, OCSP_basic_add1_status(a0,a1,d0,d1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_basic_add1_cert 1746 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1746, OCSP_basic_add1_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_basic_sign 174c 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x174c, OCSP_basic_sign(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_crlID_new 1758 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1758, OCSP_crlID_new(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_accept_responses_new 175e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x175e, OCSP_accept_responses_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_archive_cutoff_new 1764 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1764, OCSP_archive_cutoff_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_url_svcloc_new 176a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x176a, OCSP_url_svcloc_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_get_ext_count 1770 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1770, OCSP_REQUEST_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_get_ext_by_NID 1776 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1776, OCSP_REQUEST_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_get_ext_by_OBJ 177c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x177c, OCSP_REQUEST_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_get_ext_by_critical 1782 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1782, OCSP_REQUEST_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_get_ext 1788 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1788, OCSP_REQUEST_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_delete_ext 178e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x178e, OCSP_REQUEST_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_get1_ext_d2i 1794 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1794, OCSP_REQUEST_get1_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_add1_ext_i2d 179a 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x179a, OCSP_REQUEST_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_add_ext 17a0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17a0, OCSP_REQUEST_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_get_ext_count 17a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17a6, OCSP_ONEREQ_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_get_ext_by_NID 17ac 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17ac, OCSP_ONEREQ_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_get_ext_by_OBJ 17b2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17b2, OCSP_ONEREQ_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_get_ext_by_critical 17b8 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17b8, OCSP_ONEREQ_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_get_ext 17be 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17be, OCSP_ONEREQ_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_delete_ext 17c4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17c4, OCSP_ONEREQ_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_get1_ext_d2i 17ca a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17ca, OCSP_ONEREQ_get1_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_add1_ext_i2d 17d0 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17d0, OCSP_ONEREQ_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_add_ext 17d6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17d6, OCSP_ONEREQ_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_get_ext_count 17dc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17dc, OCSP_BASICRESP_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_get_ext_by_NID 17e2 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17e2, OCSP_BASICRESP_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_get_ext_by_OBJ 17e8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17e8, OCSP_BASICRESP_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_get_ext_by_critical 17ee 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17ee, OCSP_BASICRESP_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_get_ext 17f4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17f4, OCSP_BASICRESP_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_delete_ext 17fa 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x17fa, OCSP_BASICRESP_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_get1_ext_d2i 1800 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1800, OCSP_BASICRESP_get1_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_add1_ext_i2d 1806 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1806, OCSP_BASICRESP_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_add_ext 180c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x180c, OCSP_BASICRESP_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get_ext_count 1812 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1812, OCSP_SINGLERESP_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get_ext_by_NID 1818 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1818, OCSP_SINGLERESP_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get_ext_by_OBJ 181e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x181e, OCSP_SINGLERESP_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get_ext_by_critical 1824 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1824, OCSP_SINGLERESP_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get_ext 182a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x182a, OCSP_SINGLERESP_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_delete_ext 1830 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1830, OCSP_SINGLERESP_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get1_ext_d2i 1836 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1836, OCSP_SINGLERESP_get1_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_add1_ext_i2d 183c 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x183c, OCSP_SINGLERESP_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_add_ext 1842 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1842, OCSP_SINGLERESP_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_new 1848 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1848, OCSP_SINGLERESP_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_free 184e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x184e, OCSP_SINGLERESP_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_SINGLERESP 1854 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1854, d2i_OCSP_SINGLERESP(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_SINGLERESP 185a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x185a, i2d_OCSP_SINGLERESP(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_it 1860 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1860, OCSP_SINGLERESP_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTSTATUS_new 1866 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1866, OCSP_CERTSTATUS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTSTATUS_free 186c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x186c, OCSP_CERTSTATUS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_CERTSTATUS 1872 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1872, d2i_OCSP_CERTSTATUS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_CERTSTATUS 1878 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1878, i2d_OCSP_CERTSTATUS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTSTATUS_it 187e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x187e, OCSP_CERTSTATUS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REVOKEDINFO_new 1884 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1884, OCSP_REVOKEDINFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REVOKEDINFO_free 188a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x188a, OCSP_REVOKEDINFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_REVOKEDINFO 1890 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1890, d2i_OCSP_REVOKEDINFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_REVOKEDINFO 1896 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1896, i2d_OCSP_REVOKEDINFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REVOKEDINFO_it 189c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x189c, OCSP_REVOKEDINFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_new 18a2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18a2, OCSP_BASICRESP_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_free 18a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18a8, OCSP_BASICRESP_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_BASICRESP 18ae 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18ae, d2i_OCSP_BASICRESP(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_BASICRESP 18b4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18b4, i2d_OCSP_BASICRESP(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_BASICRESP_it 18ba 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18ba, OCSP_BASICRESP_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPDATA_new 18c0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18c0, OCSP_RESPDATA_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPDATA_free 18c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18c6, OCSP_RESPDATA_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_RESPDATA 18cc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18cc, d2i_OCSP_RESPDATA(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_RESPDATA 18d2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18d2, i2d_OCSP_RESPDATA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPDATA_it 18d8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18d8, OCSP_RESPDATA_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPID_new 18de 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18de, OCSP_RESPID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPID_free 18e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18e4, OCSP_RESPID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_RESPID 18ea 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18ea, d2i_OCSP_RESPID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_RESPID 18f0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18f0, i2d_OCSP_RESPID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPID_it 18f6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18f6, OCSP_RESPID_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPONSE_new 18fc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x18fc, OCSP_RESPONSE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPONSE_free 1902 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1902, OCSP_RESPONSE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_RESPONSE 1908 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1908, d2i_OCSP_RESPONSE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_RESPONSE 190e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x190e, i2d_OCSP_RESPONSE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPONSE_it 1914 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1914, OCSP_RESPONSE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPBYTES_new 191a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x191a, OCSP_RESPBYTES_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPBYTES_free 1920 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1920, OCSP_RESPBYTES_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_RESPBYTES 1926 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1926, d2i_OCSP_RESPBYTES(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_RESPBYTES 192c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x192c, i2d_OCSP_RESPBYTES(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPBYTES_it 1932 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1932, OCSP_RESPBYTES_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_new 1938 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1938, OCSP_ONEREQ_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_free 193e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x193e, OCSP_ONEREQ_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_ONEREQ 1944 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1944, d2i_OCSP_ONEREQ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_ONEREQ 194a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x194a, i2d_OCSP_ONEREQ(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_ONEREQ_it 1950 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1950, OCSP_ONEREQ_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTID_new 1956 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1956, OCSP_CERTID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTID_free 195c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x195c, OCSP_CERTID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_CERTID 1962 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1962, d2i_OCSP_CERTID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_CERTID 1968 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1968, i2d_OCSP_CERTID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTID_it 196e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x196e, OCSP_CERTID_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_new 1974 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1974, OCSP_REQUEST_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_free 197a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x197a, OCSP_REQUEST_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_REQUEST 1980 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1980, d2i_OCSP_REQUEST(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_REQUEST 1986 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1986, i2d_OCSP_REQUEST(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_it 198c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x198c, OCSP_REQUEST_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SIGNATURE_new 1992 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1992, OCSP_SIGNATURE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SIGNATURE_free 1998 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1998, OCSP_SIGNATURE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_SIGNATURE 199e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x199e, d2i_OCSP_SIGNATURE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_SIGNATURE 19a4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19a4, i2d_OCSP_SIGNATURE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SIGNATURE_it 19aa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19aa, OCSP_SIGNATURE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQINFO_new 19b0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19b0, OCSP_REQINFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQINFO_free 19b6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19b6, OCSP_REQINFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_REQINFO 19bc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19bc, d2i_OCSP_REQINFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_REQINFO 19c2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19c2, i2d_OCSP_REQINFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQINFO_it 19c8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19c8, OCSP_REQINFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CRLID_new 19ce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19ce, OCSP_CRLID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CRLID_free 19d4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19d4, OCSP_CRLID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_CRLID 19da 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19da, d2i_OCSP_CRLID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_CRLID 19e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19e0, i2d_OCSP_CRLID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CRLID_it 19e6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19e6, OCSP_CRLID_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SERVICELOC_new 19ec 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19ec, OCSP_SERVICELOC_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SERVICELOC_free 19f2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19f2, OCSP_SERVICELOC_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OCSP_SERVICELOC 19f8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19f8, d2i_OCSP_SERVICELOC(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OCSP_SERVICELOC 19fe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x19fe, i2d_OCSP_SERVICELOC(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SERVICELOC_it 1a04 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a04, OCSP_SERVICELOC_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_response_status_str 1a0a 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a0a, OCSP_response_status_str(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_cert_status_str 1a10 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a10, OCSP_cert_status_str(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_crl_reason_str 1a16 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a16, OCSP_crl_reason_str(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQUEST_print 1a1c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a1c, OCSP_REQUEST_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_RESPONSE_print 1a22 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a22, OCSP_RESPONSE_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_basic_verify 1a28 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a28, OCSP_basic_verify(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_OCSP_strings 1a2e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a2e, ERR_load_OCSP_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_get_EVP_CIPHER_INFO 1a34 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a34, PEM_get_EVP_CIPHER_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_do_header 1a3a 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a3a, PEM_do_header(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio 1a40 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a40, PEM_read_bio(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio 1a46 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a46, PEM_write_bio(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_bytes_read_bio 1a4c 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a4c, PEM_bytes_read_bio(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_ASN1_read_bio 1a52 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a52, PEM_ASN1_read_bio(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_ASN1_write_bio 1a58 43210ba9809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a58, PEM_ASN1_write_bio(a0,a1,a2,a3,d0,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_X509_INFO_read_bio 1a5e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a5e, PEM_X509_INFO_read_bio(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_X509_INFO_write_bio 1a64 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a64, PEM_X509_INFO_write_bio(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_SignInit 1a7c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a7c, PEM_SignInit(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_SignUpdate 1a82 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a82, PEM_SignUpdate(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_SignFinal 1a88 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a88, PEM_SignFinal(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_def_callback 1a8e 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a8e, PEM_def_callback(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_proc_type 1a94 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a94, PEM_proc_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_dek_info 1a9a a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1a9a, PEM_dek_info(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_X509 1aa0 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1aa0, PEM_read_bio_X509(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_X509 1aa6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1aa6, PEM_write_bio_X509(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_X509_AUX 1aac ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1aac, PEM_read_bio_X509_AUX(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_X509_AUX 1ab2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ab2, PEM_write_bio_X509_AUX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_X509_REQ 1ab8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ab8, PEM_read_bio_X509_REQ(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_X509_REQ 1abe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1abe, PEM_write_bio_X509_REQ(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_X509_REQ_NEW 1ac4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ac4, PEM_write_bio_X509_REQ_NEW(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_X509_CRL 1aca ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1aca, PEM_read_bio_X509_CRL(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_X509_CRL 1ad0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ad0, PEM_write_bio_X509_CRL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_PKCS7 1ad6 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ad6, PEM_read_bio_PKCS7(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PKCS7 1adc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1adc, PEM_write_bio_PKCS7(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_NETSCAPE_CERT_SEQUENCE 1ae2 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ae2, PEM_read_bio_NETSCAPE_CERT_SEQUENCE(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_NETSCAPE_CERT_SEQUENCE 1ae8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ae8, PEM_write_bio_NETSCAPE_CERT_SEQUENCE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_PKCS8 1aee ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1aee, PEM_read_bio_PKCS8(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PKCS8 1af4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1af4, PEM_write_bio_PKCS8(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_PKCS8_PRIV_KEY_INFO 1afa ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1afa, PEM_read_bio_PKCS8_PRIV_KEY_INFO(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PKCS8_PRIV_KEY_INFO 1b00 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b00, PEM_write_bio_PKCS8_PRIV_KEY_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_RSAPrivateKey 1b06 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b06, PEM_read_bio_RSAPrivateKey(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_RSAPrivateKey 1b0c 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b0c, PEM_write_bio_RSAPrivateKey(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_RSAPublicKey 1b12 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b12, PEM_read_bio_RSAPublicKey(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_RSAPublicKey 1b18 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b18, PEM_write_bio_RSAPublicKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_RSA_PUBKEY 1b1e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b1e, PEM_read_bio_RSA_PUBKEY(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_RSA_PUBKEY 1b24 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b24, PEM_write_bio_RSA_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_DSAPrivateKey 1b2a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b2a, PEM_read_bio_DSAPrivateKey(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_DSAPrivateKey 1b30 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b30, PEM_write_bio_DSAPrivateKey(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_DSA_PUBKEY 1b36 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b36, PEM_read_bio_DSA_PUBKEY(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_DSA_PUBKEY 1b3c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b3c, PEM_write_bio_DSA_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_DSAparams 1b42 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b42, PEM_read_bio_DSAparams(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_DSAparams 1b48 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b48, PEM_write_bio_DSAparams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_DHparams 1b4e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b4e, PEM_read_bio_DHparams(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_DHparams 1b54 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b54, PEM_write_bio_DHparams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_PrivateKey 1b5a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b5a, PEM_read_bio_PrivateKey(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PrivateKey 1b60 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b60, PEM_write_bio_PrivateKey(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_PUBKEY 1b66 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b66, PEM_read_bio_PUBKEY(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PUBKEY 1b6c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b6c, PEM_write_bio_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PKCS8PrivateKey_nid 1b72 2b1a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b72, PEM_write_bio_PKCS8PrivateKey_nid(a0,a1,d0,a2,d1,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PKCS8PrivateKey 1b78 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b78, PEM_write_bio_PKCS8PrivateKey(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS8PrivateKey_bio 1b7e 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b7e, i2d_PKCS8PrivateKey_bio(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS8PrivateKey_nid_bio 1b84 2b1a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b84, i2d_PKCS8PrivateKey_nid_bio(a0,a1,d0,a2,d1,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS8PrivateKey_bio 1b8a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b8a, d2i_PKCS8PrivateKey_bio(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_PEM_strings 1b90 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1b90, ERR_load_PEM_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_item_pack_safebag 1bae 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bae, PKCS12_item_pack_safebag(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_decrypt 1bba 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bba, PKCS8_decrypt(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_decrypt_skey 1bc0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bc0, PKCS12_decrypt_skey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_encrypt 1bc6 b32a198008
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bc6, PKCS8_encrypt(d0,a0,a1,d1,a2,d2,d3,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_pack_p7data 1bd2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bd2, PKCS12_pack_p7data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_unpack_p7data 1bd8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bd8, PKCS12_unpack_p7data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_pack_p7encdata 1bde a32918007
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bde, PKCS12_pack_p7encdata(d0,a0,d1,a1,d2,d3,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_unpack_p7encdata 1be4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1be4, PKCS12_unpack_p7encdata(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_pack_authsafes 1bea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bea, PKCS12_pack_authsafes(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_unpack_authsafes 1bf0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bf0, PKCS12_unpack_authsafes(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_localkeyid 1bf6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bf6, PKCS12_add_localkeyid(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_friendlyname_asc 1bfc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1bfc, PKCS12_add_friendlyname_asc(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_CSPName_asc 1c02 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c02, PKCS12_add_CSPName_asc(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_friendlyname_uni 1c08 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c08, PKCS12_add_friendlyname_uni(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_add_keyusage 1c0e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c0e, PKCS8_add_keyusage(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_get_attr_gen 1c14 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c14, PKCS12_get_attr_gen(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_get_friendlyname 1c1a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c1a, PKCS12_get_friendlyname(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_pbe_crypt 1c20 32b1a09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c20, PKCS12_pbe_crypt(a0,a1,d0,a2,d1,a3,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_item_decrypt_d2i 1c26 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c26, PKCS12_item_decrypt_d2i(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_item_i2d_encrypt 1c2c 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c2c, PKCS12_item_i2d_encrypt(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_init 1c32 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c32, PKCS12_init(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_key_gen_asc 1c38 ba432190809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c38, PKCS12_key_gen_asc(a0,d0,a1,d1,d2,d3,d4,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_key_gen_uni 1c3e ba432190809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c3e, PKCS12_key_gen_uni(a0,d0,a1,d1,d2,d3,d4,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_PBE_keyivgen 1c44 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c44, PKCS12_PBE_keyivgen(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_gen_mac 1c4a ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c4a, PKCS12_gen_mac(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_verify_mac 1c50 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c50, PKCS12_verify_mac(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_set_mac 1c56 b21a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c56, PKCS12_set_mac(a0,a1,d0,a2,d1,d2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_setup_mac 1c5c a190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c5c, PKCS12_setup_mac(a0,d0,a1,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_asc2uni 1c62 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c62, OPENSSL_asc2uni(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_uni2asc 1c68 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c68, OPENSSL_uni2asc(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_new 1c6e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c6e, PKCS12_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_free 1c74 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c74, PKCS12_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS12 1c7a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c7a, d2i_PKCS12(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS12 1c80 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c80, i2d_PKCS12(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_it 1c86 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c86, PKCS12_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_MAC_DATA_new 1c8c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c8c, PKCS12_MAC_DATA_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_MAC_DATA_free 1c92 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c92, PKCS12_MAC_DATA_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS12_MAC_DATA 1c98 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c98, d2i_PKCS12_MAC_DATA(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS12_MAC_DATA 1c9e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1c9e, i2d_PKCS12_MAC_DATA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_MAC_DATA_it 1ca4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ca4, PKCS12_MAC_DATA_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_new 1caa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1caa, PKCS12_SAFEBAG_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_free 1cb0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cb0, PKCS12_SAFEBAG_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS12_SAFEBAG 1cb6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cb6, d2i_PKCS12_SAFEBAG(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS12_SAFEBAG 1cbc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cbc, i2d_PKCS12_SAFEBAG(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_it 1cc2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cc2, PKCS12_SAFEBAG_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_BAGS_new 1cc8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cc8, PKCS12_BAGS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_BAGS_free 1cce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cce, PKCS12_BAGS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS12_BAGS 1cd4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cd4, d2i_PKCS12_BAGS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS12_BAGS 1cda 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cda, i2d_PKCS12_BAGS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_BAGS_it 1ce0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ce0, PKCS12_BAGS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAGS_it 1ce6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ce6, PKCS12_SAFEBAGS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_AUTHSAFES_it 1cec 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cec, PKCS12_AUTHSAFES_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_PBE_add 1cf2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cf2, PKCS12_PBE_add())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_parse 1cf8 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cf8, PKCS12_parse(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_create 1cfe 543210ba98010
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1cfe, PKCS12_create(a0,a1,a2,a3,d0,d1,d2,d3,d4,d5))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS12_bio 1d04 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d04, i2d_PKCS12_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS12_bio 1d0a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d0a, d2i_PKCS12_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_newpass 1d10 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d10, PKCS12_newpass(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_PKCS12_strings 1d16 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d16, ERR_load_PKCS12_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ISSUER_AND_SERIAL_digest 1d1c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d1c, PKCS7_ISSUER_AND_SERIAL_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_dup 1d22 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d22, PKCS7_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_bio 1d28 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d28, d2i_PKCS7_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_bio 1d2e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d2e, i2d_PKCS7_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ISSUER_AND_SERIAL_new 1d34 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d34, PKCS7_ISSUER_AND_SERIAL_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ISSUER_AND_SERIAL_free 1d3a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d3a, PKCS7_ISSUER_AND_SERIAL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_ISSUER_AND_SERIAL 1d40 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d40, d2i_PKCS7_ISSUER_AND_SERIAL(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_ISSUER_AND_SERIAL 1d46 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d46, i2d_PKCS7_ISSUER_AND_SERIAL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ISSUER_AND_SERIAL_it 1d4c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d4c, PKCS7_ISSUER_AND_SERIAL_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNER_INFO_new 1d52 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d52, PKCS7_SIGNER_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNER_INFO_free 1d58 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d58, PKCS7_SIGNER_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_SIGNER_INFO 1d5e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d5e, d2i_PKCS7_SIGNER_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_SIGNER_INFO 1d64 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d64, i2d_PKCS7_SIGNER_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNER_INFO_it 1d6a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d6a, PKCS7_SIGNER_INFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_RECIP_INFO_new 1d70 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d70, PKCS7_RECIP_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_RECIP_INFO_free 1d76 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d76, PKCS7_RECIP_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_RECIP_INFO 1d7c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d7c, d2i_PKCS7_RECIP_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_RECIP_INFO 1d82 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d82, i2d_PKCS7_RECIP_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_RECIP_INFO_it 1d88 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d88, PKCS7_RECIP_INFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNED_new 1d8e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d8e, PKCS7_SIGNED_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNED_free 1d94 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d94, PKCS7_SIGNED_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_SIGNED 1d9a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1d9a, d2i_PKCS7_SIGNED(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_SIGNED 1da0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1da0, i2d_PKCS7_SIGNED(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNED_it 1da6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1da6, PKCS7_SIGNED_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENC_CONTENT_new 1dac 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dac, PKCS7_ENC_CONTENT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENC_CONTENT_free 1db2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1db2, PKCS7_ENC_CONTENT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_ENC_CONTENT 1db8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1db8, d2i_PKCS7_ENC_CONTENT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_ENC_CONTENT 1dbe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dbe, i2d_PKCS7_ENC_CONTENT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENC_CONTENT_it 1dc4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dc4, PKCS7_ENC_CONTENT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENVELOPE_new 1dca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dca, PKCS7_ENVELOPE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENVELOPE_free 1dd0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dd0, PKCS7_ENVELOPE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_ENVELOPE 1dd6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dd6, d2i_PKCS7_ENVELOPE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_ENVELOPE 1ddc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ddc, i2d_PKCS7_ENVELOPE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENVELOPE_it 1de2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1de2, PKCS7_ENVELOPE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGN_ENVELOPE_new 1de8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1de8, PKCS7_SIGN_ENVELOPE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGN_ENVELOPE_free 1dee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dee, PKCS7_SIGN_ENVELOPE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_SIGN_ENVELOPE 1df4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1df4, d2i_PKCS7_SIGN_ENVELOPE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_SIGN_ENVELOPE 1dfa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1dfa, i2d_PKCS7_SIGN_ENVELOPE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGN_ENVELOPE_it 1e00 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e00, PKCS7_SIGN_ENVELOPE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_DIGEST_new 1e06 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e06, PKCS7_DIGEST_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_DIGEST_free 1e0c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e0c, PKCS7_DIGEST_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_DIGEST 1e12 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e12, d2i_PKCS7_DIGEST(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_DIGEST 1e18 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e18, i2d_PKCS7_DIGEST(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_DIGEST_it 1e1e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e1e, PKCS7_DIGEST_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENCRYPT_new 1e24 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e24, PKCS7_ENCRYPT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENCRYPT_free 1e2a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e2a, PKCS7_ENCRYPT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7_ENCRYPT 1e30 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e30, d2i_PKCS7_ENCRYPT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_ENCRYPT 1e36 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e36, i2d_PKCS7_ENCRYPT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ENCRYPT_it 1e3c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e3c, PKCS7_ENCRYPT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_new 1e42 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e42, PKCS7_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_free 1e48 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e48, PKCS7_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS7 1e4e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e4e, d2i_PKCS7(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7 1e54 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e54, i2d_PKCS7(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_it 1e5a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e5a, PKCS7_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ATTR_SIGN_it 1e60 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e60, PKCS7_ATTR_SIGN_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ATTR_VERIFY_it 1e66 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e66, PKCS7_ATTR_VERIFY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_ctrl 1e6c 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e6c, PKCS7_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set_type 1e72 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e72, PKCS7_set_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set_content 1e78 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e78, PKCS7_set_content(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNER_INFO_set 1e7e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e7e, PKCS7_SIGNER_INFO_set(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_signer 1e84 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e84, PKCS7_add_signer(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_certificate 1e8a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e8a, PKCS7_add_certificate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_crl 1e90 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e90, PKCS7_add_crl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_content_new 1e96 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e96, PKCS7_content_new(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_dataVerify 1e9c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1e9c, PKCS7_dataVerify(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_signatureVerify 1ea2 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ea2, PKCS7_signatureVerify(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_dataInit 1ea8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ea8, PKCS7_dataInit(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_dataFinal 1eae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1eae, PKCS7_dataFinal(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_dataDecode 1eb4 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1eb4, PKCS7_dataDecode(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_signature 1eba ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1eba, PKCS7_add_signature(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_cert_from_signer_info 1ec0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ec0, PKCS7_cert_from_signer_info(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_get_signer_info 1ec6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ec6, PKCS7_get_signer_info(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_recipient 1ecc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ecc, PKCS7_add_recipient(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_recipient_info 1ed2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ed2, PKCS7_add_recipient_info(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_RECIP_INFO_set 1ed8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ed8, PKCS7_RECIP_INFO_set(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set_cipher 1ede 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ede, PKCS7_set_cipher(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_get_issuer_and_serial 1ee4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ee4, PKCS7_get_issuer_and_serial(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_digest_from_attributes 1eea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1eea, PKCS7_digest_from_attributes(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_signed_attribute 1ef0 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ef0, PKCS7_add_signed_attribute(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_attribute 1ef6 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ef6, PKCS7_add_attribute(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_get_attribute 1efc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1efc, PKCS7_get_attribute(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_get_signed_attribute 1f02 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f02, PKCS7_get_signed_attribute(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set_signed_attributes 1f08 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f08, PKCS7_set_signed_attributes(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set_attributes 1f0e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f0e, PKCS7_set_attributes(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_sign 1f14 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f14, PKCS7_sign(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_verify 1f1a 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f1a, PKCS7_verify(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_get0_signers 1f20 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f20, PKCS7_get0_signers(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_encrypt 1f26 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f26, PKCS7_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_decrypt 1f2c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f2c, PKCS7_decrypt(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_attrib_smimecap 1f32 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f32, PKCS7_add_attrib_smimecap(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_get_smimecap 1f38 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f38, PKCS7_get_smimecap(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_simple_smimecap 1f3e 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f3e, PKCS7_simple_smimecap(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_write_PKCS7 1f44 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f44, SMIME_write_PKCS7(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_read_PKCS7 1f4a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f4a, SMIME_read_PKCS7(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_crlf_copy 1f50 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f50, SMIME_crlf_copy(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_text 1f56 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f56, SMIME_text(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_PKCS7_strings 1f5c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f5c, ERR_load_PKCS7_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_set_rand_method 1f62 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f62, RAND_set_rand_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_get_rand_method 1f68 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f68, RAND_get_rand_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_cleanup 1f74 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f74, RAND_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_bytes 1f7a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f7a, RAND_bytes(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_pseudo_bytes 1f80 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f80, RAND_pseudo_bytes(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_seed 1f86 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f86, RAND_seed(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_add 1f8c 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f8c, RAND_add(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_load_file 1f92 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f92, RAND_load_file(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_write_file 1f98 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f98, RAND_write_file(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_file_name 1f9e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1f9e, RAND_file_name(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_status 1fa4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fa4, RAND_status())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_poll 1fbc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fbc, RAND_poll())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_RAND_strings 1fc2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fc2, ERR_load_RAND_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_msg_callback 1fc8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fc8, SSL_CTX_set_msg_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_msg_callback 1fce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fce, SSL_set_msg_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sessions 1fd4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fd4, SSL_CTX_sessions(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_finished 1fda 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fda, SSL_get_finished(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_peer_finished 1fe0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fe0, SSL_get_peer_finished(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_ssl 1fe6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fe6, BIO_f_ssl())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_ssl 1fec 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1fec, BIO_new_ssl(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_ssl_connect 1ff2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ff2, BIO_new_ssl_connect(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_buffer_ssl_connect 1ff8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ff8, BIO_new_buffer_ssl_connect(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ssl_copy_session_id 1ffe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x1ffe, BIO_ssl_copy_session_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ssl_shutdown 2004 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2004, BIO_ssl_shutdown(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_cipher_list 200a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x200a, SSL_CTX_set_cipher_list(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_new 2010 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2010, SSL_CTX_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_free 2016 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2016, SSL_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_timeout 201c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x201c, SSL_CTX_set_timeout(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_timeout 2022 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2022, SSL_CTX_get_timeout(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_cert_store 2028 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2028, SSL_CTX_get_cert_store(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_cert_store 202e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x202e, SSL_CTX_set_cert_store(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_want 2034 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2034, SSL_want(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_clear 203a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x203a, SSL_clear(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_flush_sessions 2040 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2040, SSL_CTX_flush_sessions(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_current_cipher 2046 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2046, SSL_get_current_cipher(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_bits 204c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x204c, SSL_CIPHER_get_bits(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_version 2052 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2052, SSL_CIPHER_get_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_name 2058 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2058, SSL_CIPHER_get_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_mac 205e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x205e, SSL_CIPHER_get_mac(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_encryption 2064 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2064, SSL_CIPHER_get_encryption(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_authentication 206a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x206a, SSL_CIPHER_get_authentication(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_key_exchange 2070 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2070, SSL_CIPHER_get_key_exchange(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_fd 207c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x207c, SSL_get_fd(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_rfd 2082 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2082, SSL_get_rfd(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_wfd 2088 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2088, SSL_get_wfd(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_cipher_list 208e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x208e, SSL_get_cipher_list(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_shared_ciphers 2094 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2094, SSL_get_shared_ciphers(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_read_ahead 209a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x209a, SSL_get_read_ahead(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_pending 20a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20a0, SSL_pending(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_fd 20a6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20a6, SSL_set_fd(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_rfd 20ac 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20ac, SSL_set_rfd(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_wfd 20b2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20b2, SSL_set_wfd(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_bio 20b8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20b8, SSL_set_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_rbio 20be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20be, SSL_get_rbio(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_wbio 20c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20c4, SSL_get_wbio(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_cipher_list 20ca 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20ca, SSL_set_cipher_list(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_read_ahead 20d0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20d0, SSL_set_read_ahead(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_verify_mode 20d6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20d6, SSL_get_verify_mode(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_verify_depth 20dc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20dc, SSL_get_verify_depth(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_verify_callback 20e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20e2, SSL_get_verify_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_verify 20e8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20e8, SSL_set_verify(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_verify_depth 20ee 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20ee, SSL_set_verify_depth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_RSAPrivateKey 20f4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20f4, SSL_use_RSAPrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_RSAPrivateKey_ASN1 20fa 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x20fa, SSL_use_RSAPrivateKey_ASN1(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_PrivateKey 2100 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2100, SSL_use_PrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_PrivateKey_ASN1 2106 198004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2106, SSL_use_PrivateKey_ASN1(d0,a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_certificate 210c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x210c, SSL_use_certificate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_certificate_ASN1 2112 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2112, SSL_use_certificate_ASN1(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_RSAPrivateKey_file 2118 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2118, SSL_use_RSAPrivateKey_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_PrivateKey_file 211e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x211e, SSL_use_PrivateKey_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_certificate_file 2124 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2124, SSL_use_certificate_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_RSAPrivateKey_file 212a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x212a, SSL_CTX_use_RSAPrivateKey_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_PrivateKey_file 2130 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2130, SSL_CTX_use_PrivateKey_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_certificate_file 2136 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2136, SSL_CTX_use_certificate_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_certificate_chain_file 213c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x213c, SSL_CTX_use_certificate_chain_file(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_load_client_CA_file 2142 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2142, SSL_load_client_CA_file(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_add_file_cert_subjects_to_stack 2148 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2148, SSL_add_file_cert_subjects_to_stack(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_add_dir_cert_subjects_to_stack 214e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x214e, SSL_add_dir_cert_subjects_to_stack(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_rstate_string 2160 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2160, SSL_rstate_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_state_string_long 2166 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2166, SSL_state_string_long(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_rstate_string_long 216c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x216c, SSL_rstate_string_long(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_time 2172 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2172, SSL_SESSION_get_time(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_set_time 2178 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2178, SSL_SESSION_set_time(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_timeout 217e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x217e, SSL_SESSION_get_timeout(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_set_timeout 2184 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2184, SSL_SESSION_set_timeout(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_copy_session_id 218a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x218a, SSL_copy_session_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_new 2190 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2190, SSL_SESSION_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_print 21a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21a2, SSL_SESSION_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_free 21a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21a8, SSL_SESSION_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_SSL_SESSION 21ae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21ae, i2d_SSL_SESSION(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_session 21b4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21b4, SSL_set_session(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_add_session 21ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21ba, SSL_CTX_add_session(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_remove_session 21c0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21c0, SSL_CTX_remove_session(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_generate_session_id 21c6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21c6, SSL_CTX_set_generate_session_id(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_generate_session_id 21cc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21cc, SSL_set_generate_session_id(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_has_matching_session_id 21d2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21d2, SSL_has_matching_session_id(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_SSL_SESSION 21d8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21d8, d2i_SSL_SESSION(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_peer_certificate 21de 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21de, SSL_get_peer_certificate(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_peer_cert_chain 21e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21e4, SSL_get_peer_cert_chain(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_verify_mode 21ea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21ea, SSL_CTX_get_verify_mode(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_verify_depth 21f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21f0, SSL_CTX_get_verify_depth(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_verify_callback 21f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21f6, SSL_CTX_get_verify_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_verify 21fc 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x21fc, SSL_CTX_set_verify(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_verify_depth 2202 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2202, SSL_CTX_set_verify_depth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_cert_verify_callback 2208 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2208, SSL_CTX_set_cert_verify_callback(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_RSAPrivateKey 220e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x220e, SSL_CTX_use_RSAPrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_RSAPrivateKey_ASN1 2214 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2214, SSL_CTX_use_RSAPrivateKey_ASN1(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_PrivateKey 221a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x221a, SSL_CTX_use_PrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_PrivateKey_ASN1 2220 198004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2220, SSL_CTX_use_PrivateKey_ASN1(d0,a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_certificate 2226 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2226, SSL_CTX_use_certificate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_certificate_ASN1 222c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x222c, SSL_CTX_use_certificate_ASN1(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_default_passwd_cb 2232 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2232, SSL_CTX_set_default_passwd_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_default_passwd_cb_userdata 2238 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2238, SSL_CTX_set_default_passwd_cb_userdata(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_check_private_key 223e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x223e, SSL_CTX_check_private_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_check_private_key 2244 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2244, SSL_check_private_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_session_id_context 224a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x224a, SSL_CTX_set_session_id_context(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_new 2250 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2250, SSL_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_session_id_context 2256 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2256, SSL_set_session_id_context(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_purpose 225c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x225c, SSL_CTX_set_purpose(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_purpose 2262 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2262, SSL_set_purpose(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_trust 2268 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2268, SSL_CTX_set_trust(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_trust 226e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x226e, SSL_set_trust(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_free 2274 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2274, SSL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_accept 227a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x227a, SSL_accept(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_connect 2280 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2280, SSL_connect(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_read 2286 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2286, SSL_read(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_peek 228c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x228c, SSL_peek(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_write 2292 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2292, SSL_write(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_ctrl 2298 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2298, SSL_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_callback_ctrl 229e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x229e, SSL_callback_ctrl(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_ctrl 22a4 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22a4, SSL_CTX_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_callback_ctrl 22aa 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22aa, SSL_CTX_callback_ctrl(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_error 22b0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22b0, SSL_get_error(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_version 22b6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22b6, SSL_get_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_ssl_version 22bc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22bc, SSL_CTX_set_ssl_version(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLv3_method 22d4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22d4, SSLv3_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLv3_server_method 22da 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22da, SSLv3_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSLv3_client_method 22e0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22e0, SSLv3_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_method 22f8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22f8, TLSv1_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_server_method 22fe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x22fe, TLSv1_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_client_method 2304 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2304, TLSv1_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_ciphers 230a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x230a, SSL_get_ciphers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_do_handshake 2310 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2310, SSL_do_handshake(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_renegotiate 2316 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2316, SSL_renegotiate(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_renegotiate_pending 231c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x231c, SSL_renegotiate_pending(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_shutdown 2322 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2322, SSL_shutdown(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_ssl_method 2328 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2328, SSL_get_ssl_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_ssl_method 232e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x232e, SSL_set_ssl_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_alert_type_string_long 2334 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2334, SSL_alert_type_string_long(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_alert_type_string 233a 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x233a, SSL_alert_type_string(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_alert_desc_string_long 2340 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2340, SSL_alert_desc_string_long(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_alert_desc_string 2346 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2346, SSL_alert_desc_string(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_client_CA_list 234c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x234c, SSL_set_client_CA_list(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_client_CA_list 2352 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2352, SSL_CTX_set_client_CA_list(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_client_CA_list 2358 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2358, SSL_get_client_CA_list(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_client_CA_list 235e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x235e, SSL_CTX_get_client_CA_list(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_add_client_CA 2364 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2364, SSL_add_client_CA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_add_client_CA 236a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x236a, SSL_CTX_add_client_CA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_connect_state 2370 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2370, SSL_set_connect_state(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_accept_state 2376 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2376, SSL_set_accept_state(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_default_timeout 237c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x237c, SSL_get_default_timeout(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_description 2388 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2388, SSL_CIPHER_description(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_dup_CA_list 238e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x238e, SSL_dup_CA_list(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_dup 2394 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2394, SSL_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_certificate 239a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x239a, SSL_get_certificate(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_privatekey 23a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23a0, SSL_get_privatekey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_quiet_shutdown 23a6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23a6, SSL_CTX_set_quiet_shutdown(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_quiet_shutdown 23ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23ac, SSL_CTX_get_quiet_shutdown(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_quiet_shutdown 23b2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23b2, SSL_set_quiet_shutdown(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_quiet_shutdown 23b8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23b8, SSL_get_quiet_shutdown(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_shutdown 23be 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23be, SSL_set_shutdown(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_shutdown 23c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23c4, SSL_get_shutdown(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_version 23ca 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23ca, SSL_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_default_verify_paths 23d0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23d0, SSL_CTX_set_default_verify_paths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_load_verify_locations 23d6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23d6, SSL_CTX_load_verify_locations(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_session 23dc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23dc, SSL_get_session(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get1_session 23e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23e2, SSL_get1_session(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_SSL_CTX 23e8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23e8, SSL_get_SSL_CTX(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_info_callback 23ee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23ee, SSL_set_info_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_info_callback 23f4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x23f4, SSL_get_info_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_verify_result 2400 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2400, SSL_set_verify_result(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_verify_result 2406 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2406, SSL_get_verify_result(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_ex_data 240c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x240c, SSL_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_ex_data 2412 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2412, SSL_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_set_ex_data 241e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x241e, SSL_SESSION_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_ex_data 2424 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2424, SSL_SESSION_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_ex_data 2430 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2430, SSL_CTX_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_ex_data 2436 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2436, SSL_CTX_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_ex_data_X509_STORE_CTX_idx 2442 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2442, SSL_get_ex_data_X509_STORE_CTX_idx())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_tmp_dh_callback 2454 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2454, SSL_CTX_set_tmp_dh_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_tmp_dh_callback 245a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x245a, SSL_set_tmp_dh_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_COMP_add_compression_method 2460 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2460, SSL_COMP_add_compression_method(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_SSL_strings 2466 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2466, ERR_load_SSL_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_num 246c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x246c, sk_num(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_value 2472 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2472, sk_value(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_set 2478 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2478, sk_set(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_new 247e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x247e, sk_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_new_null 2484 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2484, sk_new_null())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_free 248a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x248a, sk_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_pop_free 2490 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2490, sk_pop_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_insert 2496 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2496, sk_insert(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_delete 249c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x249c, sk_delete(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_delete_ptr 24a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24a2, sk_delete_ptr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_find 24a8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24a8, sk_find(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_push 24ae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24ae, sk_push(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_unshift 24b4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24b4, sk_unshift(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_shift 24ba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24ba, sk_shift(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_pop 24c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24c0, sk_pop(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_zero 24c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24c6, sk_zero(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_set_cmp_func 24cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24cc, sk_set_cmp_func(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_dup 24d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24d2, sk_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_sort 24d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24d8, sk_sort(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_is_sorted 24de 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x24de, sk_is_sorted(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TXT_DB_read 2502 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2502, TXT_DB_read(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TXT_DB_write 2508 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2508, TXT_DB_write(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TXT_DB_create_index 250e 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x250e, TXT_DB_create_index(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TXT_DB_free 2514 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2514, TXT_DB_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TXT_DB_get_by_index 251a 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x251a, TXT_DB_get_by_index(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TXT_DB_insert 2520 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2520, TXT_DB_insert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_new 2526 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2526, UI_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_new_method 252c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x252c, UI_new_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_free 2532 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2532, UI_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_add_input_string 2538 21a09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2538, UI_add_input_string(a0,a1,d0,a2,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_dup_input_string 253e 21a09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x253e, UI_dup_input_string(a0,a1,d0,a2,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_add_verify_string 2544 b21a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2544, UI_add_verify_string(a0,a1,d0,a2,d1,d2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_dup_verify_string 254a b21a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x254a, UI_dup_verify_string(a0,a1,d0,a2,d1,d2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_add_input_boolean 2550 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2550, UI_add_input_boolean(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_dup_input_boolean 2556 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2556, UI_dup_input_boolean(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_add_info_string 255c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x255c, UI_add_info_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_dup_info_string 2562 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2562, UI_dup_info_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_add_error_string 2568 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2568, UI_add_error_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_dup_error_string 256e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x256e, UI_dup_error_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_construct_prompt 2574 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2574, UI_construct_prompt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_add_user_data 257a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x257a, UI_add_user_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get0_user_data 2580 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2580, UI_get0_user_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get0_result 2586 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2586, UI_get0_result(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_process 258c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x258c, UI_process(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_ctrl 2592 a910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2592, UI_ctrl(a0,d0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_set_ex_data 259e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x259e, UI_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_ex_data 25a4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25a4, UI_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_set_default_method 25aa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25aa, UI_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_default_method 25b0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25b0, UI_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_method 25b6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25b6, UI_get_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_set_method 25bc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25bc, UI_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_OpenSSL 25c2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25c2, UI_OpenSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_create_method 25c8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25c8, UI_create_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_destroy_method 25ce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25ce, UI_destroy_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_set_opener 25d4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25d4, UI_method_set_opener(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_set_writer 25da 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25da, UI_method_set_writer(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_set_flusher 25e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25e0, UI_method_set_flusher(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_set_reader 25e6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25e6, UI_method_set_reader(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_set_closer 25ec 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25ec, UI_method_set_closer(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_get_opener 25f2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25f2, UI_method_get_opener(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_get_writer 25f8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25f8, UI_method_get_writer(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_get_flusher 25fe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x25fe, UI_method_get_flusher(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_get_reader 2604 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2604, UI_method_get_reader(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_get_closer 260a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x260a, UI_method_get_closer(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_string_type 2610 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2610, UI_get_string_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_input_flags 2616 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2616, UI_get_input_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get0_output_string 261c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x261c, UI_get0_output_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get0_action_string 2622 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2622, UI_get0_action_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get0_result_string 2628 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2628, UI_get0_result_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get0_test_string 262e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x262e, UI_get0_test_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_result_minsize 2634 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2634, UI_get_result_minsize(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_get_result_maxsize 263a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x263a, UI_get_result_maxsize(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_set_result 2640 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2640, UI_set_result(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_UTIL_read_pw_string 2646 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2646, UI_UTIL_read_pw_string(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_UTIL_read_pw 264c 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x264c, UI_UTIL_read_pw(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_UI_strings 2652 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2652, ERR_load_UI_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_verify_cert_error_string 2664 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2664, X509_verify_cert_error_string(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_verify 266a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x266a, X509_verify(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_verify 2670 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2670, X509_REQ_verify(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_verify 2676 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2676, X509_CRL_verify(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_verify 267c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x267c, NETSCAPE_SPKI_verify(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_b64_decode 2682 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2682, NETSCAPE_SPKI_b64_decode(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_b64_encode 2688 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2688, NETSCAPE_SPKI_b64_encode(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_get_pubkey 268e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x268e, NETSCAPE_SPKI_get_pubkey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_set_pubkey 2694 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2694, NETSCAPE_SPKI_set_pubkey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_print 269a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x269a, NETSCAPE_SPKI_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_signature_print 26a0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26a0, X509_signature_print(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_sign 26a6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26a6, X509_sign(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_sign 26ac a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26ac, X509_REQ_sign(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_sign 26b2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26b2, X509_CRL_sign(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_sign 26b8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26b8, NETSCAPE_SPKI_sign(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_pubkey_digest 26be ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26be, X509_pubkey_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_digest 26c4 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26c4, X509_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_digest 26ca ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26ca, X509_CRL_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_digest 26d0 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26d0, X509_REQ_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_digest 26d6 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26d6, X509_NAME_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_bio 26dc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26dc, d2i_X509_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_bio 26e2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26e2, i2d_X509_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_CRL_bio 26e8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26e8, d2i_X509_CRL_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_CRL_bio 26ee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26ee, i2d_X509_CRL_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_REQ_bio 26f4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26f4, d2i_X509_REQ_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_REQ_bio 26fa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x26fa, i2d_X509_REQ_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSAPrivateKey_bio 2700 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2700, d2i_RSAPrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSAPrivateKey_bio 2706 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2706, i2d_RSAPrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSAPublicKey_bio 270c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x270c, d2i_RSAPublicKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSAPublicKey_bio 2712 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2712, i2d_RSAPublicKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSA_PUBKEY_bio 2718 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2718, d2i_RSA_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSA_PUBKEY_bio 271e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x271e, i2d_RSA_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSA_PUBKEY_bio 2724 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2724, d2i_DSA_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSA_PUBKEY_bio 272a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x272a, i2d_DSA_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSAPrivateKey_bio 2730 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2730, d2i_DSAPrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSAPrivateKey_bio 2736 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2736, i2d_DSAPrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS8_bio 273c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x273c, d2i_PKCS8_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS8_bio 2742 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2742, i2d_PKCS8_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS8_PRIV_KEY_INFO_bio 2748 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2748, d2i_PKCS8_PRIV_KEY_INFO_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS8_PRIV_KEY_INFO_bio 274e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x274e, i2d_PKCS8_PRIV_KEY_INFO_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS8PrivateKeyInfo_bio 2754 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2754, i2d_PKCS8PrivateKeyInfo_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PrivateKey_bio 275a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x275a, i2d_PrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PrivateKey_bio 2760 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2760, d2i_PrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PUBKEY_bio 2766 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2766, i2d_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PUBKEY_bio 276c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x276c, d2i_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_dup 2772 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2772, X509_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_dup 2778 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2778, X509_ATTRIBUTE_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_dup 277e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x277e, X509_EXTENSION_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_dup 2784 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2784, X509_CRL_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_dup 278a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x278a, X509_REQ_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_dup 2790 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2790, X509_ALGOR_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_dup 2796 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2796, X509_NAME_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_dup 279c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x279c, X509_NAME_ENTRY_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_cmp_time 27a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27a2, X509_cmp_time(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_cmp_current_time 27a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27a8, X509_cmp_current_time(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_time_adj 27ae 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27ae, X509_time_adj(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_gmtime_adj 27b4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27b4, X509_gmtime_adj(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_default_cert_area 27ba 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27ba, X509_get_default_cert_area())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_default_cert_dir 27c0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27c0, X509_get_default_cert_dir())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_default_cert_file 27c6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27c6, X509_get_default_cert_file())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_default_cert_dir_env 27cc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27cc, X509_get_default_cert_dir_env())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_default_cert_file_env 27d2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27d2, X509_get_default_cert_file_env())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_default_private_dir 27d8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27d8, X509_get_default_private_dir())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_to_X509_REQ 27de a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27de, X509_to_X509_REQ(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_to_X509 27e4 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27e4, X509_REQ_to_X509(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_new 27ea 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27ea, X509_ALGOR_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_free 27f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27f0, X509_ALGOR_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_ALGOR 27f6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27f6, d2i_X509_ALGOR(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_ALGOR 27fc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x27fc, i2d_X509_ALGOR(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_it 2802 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2802, X509_ALGOR_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VAL_new 2808 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2808, X509_VAL_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VAL_free 280e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x280e, X509_VAL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_VAL 2814 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2814, d2i_X509_VAL(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_VAL 281a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x281a, i2d_X509_VAL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VAL_it 2820 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2820, X509_VAL_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_new 2826 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2826, X509_PUBKEY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_free 282c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x282c, X509_PUBKEY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_PUBKEY 2832 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2832, d2i_X509_PUBKEY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_PUBKEY 2838 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2838, i2d_X509_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_it 283e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x283e, X509_PUBKEY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_set 2844 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2844, X509_PUBKEY_set(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_get 284a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x284a, X509_PUBKEY_get(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_pubkey_parameters 2850 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2850, X509_get_pubkey_parameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PUBKEY 2856 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2856, i2d_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PUBKEY 285c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x285c, d2i_PUBKEY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSA_PUBKEY 2862 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2862, i2d_RSA_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSA_PUBKEY 2868 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2868, d2i_RSA_PUBKEY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSA_PUBKEY 286e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x286e, i2d_DSA_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSA_PUBKEY 2874 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2874, d2i_DSA_PUBKEY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_SIG_new 287a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x287a, X509_SIG_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_SIG_free 2880 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2880, X509_SIG_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_SIG 2886 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2886, d2i_X509_SIG(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_SIG 288c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x288c, i2d_X509_SIG(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_SIG_it 2892 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2892, X509_SIG_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_INFO_new 2898 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2898, X509_REQ_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_INFO_free 289e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x289e, X509_REQ_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_REQ_INFO 28a4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28a4, d2i_X509_REQ_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_REQ_INFO 28aa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28aa, i2d_X509_REQ_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_INFO_it 28b0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28b0, X509_REQ_INFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_new 28b6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28b6, X509_REQ_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_free 28bc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28bc, X509_REQ_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_REQ 28c2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28c2, d2i_X509_REQ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_REQ 28c8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28c8, i2d_X509_REQ(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_it 28ce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28ce, X509_REQ_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_new 28d4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28d4, X509_ATTRIBUTE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_free 28da 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28da, X509_ATTRIBUTE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_ATTRIBUTE 28e0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28e0, d2i_X509_ATTRIBUTE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_ATTRIBUTE 28e6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28e6, i2d_X509_ATTRIBUTE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_it 28ec 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28ec, X509_ATTRIBUTE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_create 28f2 81003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28f2, X509_ATTRIBUTE_create(d0,d1,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_new 28f8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28f8, X509_EXTENSION_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_free 28fe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x28fe, X509_EXTENSION_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_EXTENSION 2904 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2904, d2i_X509_EXTENSION(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_EXTENSION 290a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x290a, i2d_X509_EXTENSION(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_it 2910 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2910, X509_EXTENSION_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_new 2916 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2916, X509_NAME_ENTRY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_free 291c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x291c, X509_NAME_ENTRY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_NAME_ENTRY 2922 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2922, d2i_X509_NAME_ENTRY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_NAME_ENTRY 2928 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2928, i2d_X509_NAME_ENTRY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_it 292e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x292e, X509_NAME_ENTRY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_new 2934 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2934, X509_NAME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_free 293a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x293a, X509_NAME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_NAME 2940 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2940, d2i_X509_NAME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_NAME 2946 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2946, i2d_X509_NAME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_it 294c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x294c, X509_NAME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_set 2952 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2952, X509_NAME_set(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CINF_new 2958 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2958, X509_CINF_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CINF_free 295e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x295e, X509_CINF_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_CINF 2964 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2964, d2i_X509_CINF(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_CINF 296a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x296a, i2d_X509_CINF(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CINF_it 2970 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2970, X509_CINF_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_new 2976 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2976, X509_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_free 297c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x297c, X509_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509 2982 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2982, d2i_X509(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509 2988 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2988, i2d_X509(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_it 298e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x298e, X509_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CERT_AUX_new 2994 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2994, X509_CERT_AUX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CERT_AUX_free 299a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x299a, X509_CERT_AUX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_CERT_AUX 29a0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29a0, d2i_X509_CERT_AUX(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_CERT_AUX 29a6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29a6, i2d_X509_CERT_AUX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CERT_AUX_it 29ac 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29ac, X509_CERT_AUX_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_ex_data 29b8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29b8, X509_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ex_data 29be 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29be, X509_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_AUX 29c4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29c4, i2d_X509_AUX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_AUX 29ca 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29ca, d2i_X509_AUX(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_alias_set1 29d0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29d0, X509_alias_set1(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_keyid_set1 29d6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29d6, X509_keyid_set1(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_alias_get0 29dc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29dc, X509_alias_get0(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_set_default 29e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29e2, X509_TRUST_set_default(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_set 29e8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29e8, X509_TRUST_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_add1_trust_object 29ee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29ee, X509_add1_trust_object(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_add1_reject_object 29f4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29f4, X509_add1_reject_object(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_trust_clear 29fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x29fa, X509_trust_clear(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_reject_clear 2a00 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a00, X509_reject_clear(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_new 2a06 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a06, X509_REVOKED_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_free 2a0c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a0c, X509_REVOKED_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_REVOKED 2a12 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a12, d2i_X509_REVOKED(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_REVOKED 2a18 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a18, i2d_X509_REVOKED(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_it 2a1e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a1e, X509_REVOKED_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_INFO_new 2a24 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a24, X509_CRL_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_INFO_free 2a2a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a2a, X509_CRL_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_CRL_INFO 2a30 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a30, d2i_X509_CRL_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_CRL_INFO 2a36 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a36, i2d_X509_CRL_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_INFO_it 2a3c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a3c, X509_CRL_INFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_new 2a42 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a42, X509_CRL_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_free 2a48 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a48, X509_CRL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_CRL 2a4e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a4e, d2i_X509_CRL(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_CRL 2a54 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a54, i2d_X509_CRL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_it 2a5a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a5a, X509_CRL_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_add0_revoked 2a60 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a60, X509_CRL_add0_revoked(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PKEY_new 2a66 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a66, X509_PKEY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PKEY_free 2a6c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a6c, X509_PKEY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_new 2a7e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a7e, NETSCAPE_SPKI_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_free 2a84 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a84, NETSCAPE_SPKI_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_NETSCAPE_SPKI 2a8a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a8a, d2i_NETSCAPE_SPKI(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_NETSCAPE_SPKI 2a90 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a90, i2d_NETSCAPE_SPKI(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKI_it 2a96 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a96, NETSCAPE_SPKI_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKAC_new 2a9c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2a9c, NETSCAPE_SPKAC_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKAC_free 2aa2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2aa2, NETSCAPE_SPKAC_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_NETSCAPE_SPKAC 2aa8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2aa8, d2i_NETSCAPE_SPKAC(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_NETSCAPE_SPKAC 2aae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2aae, i2d_NETSCAPE_SPKAC(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_SPKAC_it 2ab4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ab4, NETSCAPE_SPKAC_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_CERT_SEQUENCE_new 2aba 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2aba, NETSCAPE_CERT_SEQUENCE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_CERT_SEQUENCE_free 2ac0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ac0, NETSCAPE_CERT_SEQUENCE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_NETSCAPE_CERT_SEQUENCE 2ac6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ac6, d2i_NETSCAPE_CERT_SEQUENCE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_NETSCAPE_CERT_SEQUENCE 2acc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2acc, i2d_NETSCAPE_CERT_SEQUENCE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NETSCAPE_CERT_SEQUENCE_it 2ad2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ad2, NETSCAPE_CERT_SEQUENCE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_INFO_new 2ad8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ad8, X509_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_INFO_free 2ade 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ade, X509_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_oneline 2ae4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ae4, X509_NAME_oneline(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_verify 2aea 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2aea, ASN1_verify(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_digest 2af0 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2af0, ASN1_digest(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_sign 2af6 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2af6, ASN1_sign(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_digest 2afc 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2afc, ASN1_item_digest(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_verify 2b02 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b02, ASN1_item_verify(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_sign 2b08 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b08, ASN1_item_sign(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_version 2b0e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b0e, X509_set_version(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_serialNumber 2b14 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b14, X509_set_serialNumber(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_serialNumber 2b1a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b1a, X509_get_serialNumber(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_issuer_name 2b20 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b20, X509_set_issuer_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_issuer_name 2b26 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b26, X509_get_issuer_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_subject_name 2b2c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b2c, X509_set_subject_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_subject_name 2b32 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b32, X509_get_subject_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_notBefore 2b38 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b38, X509_set_notBefore(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_notAfter 2b3e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b3e, X509_set_notAfter(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_set_pubkey 2b44 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b44, X509_set_pubkey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_pubkey 2b4a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b4a, X509_get_pubkey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get0_pubkey_bitstr 2b50 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b50, X509_get0_pubkey_bitstr(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_certificate_type 2b56 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b56, X509_certificate_type(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_set_version 2b5c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b5c, X509_REQ_set_version(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_set_subject_name 2b62 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b62, X509_REQ_set_subject_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_set_pubkey 2b68 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b68, X509_REQ_set_pubkey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_pubkey 2b6e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b6e, X509_REQ_get_pubkey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_extension_nid 2b74 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b74, X509_REQ_extension_nid(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_extension_nids 2b7a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b7a, X509_REQ_get_extension_nids())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_set_extension_nids 2b80 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b80, X509_REQ_set_extension_nids(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_extensions 2b86 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b86, X509_REQ_get_extensions(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_add_extensions_nid 2b8c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b8c, X509_REQ_add_extensions_nid(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_add_extensions 2b92 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b92, X509_REQ_add_extensions(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_attr_count 2b98 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b98, X509_REQ_get_attr_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_attr_by_NID 2b9e 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2b9e, X509_REQ_get_attr_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_attr_by_OBJ 2ba4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ba4, X509_REQ_get_attr_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_attr 2baa 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2baa, X509_REQ_get_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_delete_attr 2bb0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bb0, X509_REQ_delete_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_add1_attr 2bb6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bb6, X509_REQ_add1_attr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_add1_attr_by_OBJ 2bbc 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bbc, X509_REQ_add1_attr_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_add1_attr_by_NID 2bc2 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bc2, X509_REQ_add1_attr_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_add1_attr_by_txt 2bc8 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bc8, X509_REQ_add1_attr_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_set_version 2bce 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bce, X509_CRL_set_version(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_set_issuer_name 2bd4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bd4, X509_CRL_set_issuer_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_set_lastUpdate 2bda 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bda, X509_CRL_set_lastUpdate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_set_nextUpdate 2be0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2be0, X509_CRL_set_nextUpdate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_sort 2be6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2be6, X509_CRL_sort(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_set_serialNumber 2bec 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bec, X509_REVOKED_set_serialNumber(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_set_revocationDate 2bf2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bf2, X509_REVOKED_set_revocationDate(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_private_key 2bf8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bf8, X509_check_private_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_issuer_and_serial_cmp 2bfe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2bfe, X509_issuer_and_serial_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_issuer_and_serial_hash 2c04 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c04, X509_issuer_and_serial_hash(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_issuer_name_cmp 2c0a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c0a, X509_issuer_name_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_issuer_name_hash 2c10 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c10, X509_issuer_name_hash(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_subject_name_cmp 2c16 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c16, X509_subject_name_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_subject_name_hash 2c1c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c1c, X509_subject_name_hash(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_cmp 2c22 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c22, X509_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_cmp 2c28 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c28, X509_NAME_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_hash 2c2e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c2e, X509_NAME_hash(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_cmp 2c34 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c34, X509_CRL_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_print 2c3a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c3a, X509_NAME_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_print_ex 2c40 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c40, X509_NAME_print_ex(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_print_ex 2c46 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c46, X509_print_ex(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_print 2c4c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c4c, X509_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ocspid_print 2c52 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c52, X509_ocspid_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_print 2c5e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c5e, X509_CRL_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_print_ex 2c64 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c64, X509_REQ_print_ex(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_print 2c6a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c6a, X509_REQ_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_entry_count 2c70 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c70, X509_NAME_entry_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_get_text_by_NID 2c76 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c76, X509_NAME_get_text_by_NID(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_get_text_by_OBJ 2c7c 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c7c, X509_NAME_get_text_by_OBJ(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_get_index_by_NID 2c82 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c82, X509_NAME_get_index_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_get_index_by_OBJ 2c88 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c88, X509_NAME_get_index_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_get_entry 2c8e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c8e, X509_NAME_get_entry(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_delete_entry 2c94 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c94, X509_NAME_delete_entry(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_add_entry 2c9a 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2c9a, X509_NAME_add_entry(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_add_entry_by_OBJ 2ca0 321a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ca0, X509_NAME_add_entry_by_OBJ(a0,a1,d0,a2,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_add_entry_by_NID 2ca6 432910807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ca6, X509_NAME_add_entry_by_NID(a0,d0,d1,a1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_create_by_txt 2cac 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cac, X509_NAME_ENTRY_create_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_create_by_NID 2cb2 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cb2, X509_NAME_ENTRY_create_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_add_entry_by_txt 2cb8 321a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cb8, X509_NAME_add_entry_by_txt(a0,a1,d0,a2,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_create_by_OBJ 2cbe 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cbe, X509_NAME_ENTRY_create_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_set_object 2cc4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cc4, X509_NAME_ENTRY_set_object(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_set_data 2cca 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cca, X509_NAME_ENTRY_set_data(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_get_object 2cd0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cd0, X509_NAME_ENTRY_get_object(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_get_data 2cd6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cd6, X509_NAME_ENTRY_get_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_get_ext_count 2cdc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cdc, X509v3_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_get_ext_by_NID 2ce2 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ce2, X509v3_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_get_ext_by_OBJ 2ce8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ce8, X509v3_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_get_ext_by_critical 2cee 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cee, X509v3_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_get_ext 2cf4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cf4, X509v3_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_delete_ext 2cfa 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2cfa, X509v3_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509v3_add_ext 2d00 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d00, X509v3_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ext_count 2d06 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d06, X509_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ext_by_NID 2d0c 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d0c, X509_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ext_by_OBJ 2d12 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d12, X509_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ext_by_critical 2d18 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d18, X509_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ext 2d1e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d1e, X509_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_delete_ext 2d24 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d24, X509_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_add_ext 2d2a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d2a, X509_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_ext_d2i 2d30 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d30, X509_get_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_add1_ext_i2d 2d36 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d36, X509_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_ext_count 2d3c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d3c, X509_CRL_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_ext_by_NID 2d42 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d42, X509_CRL_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_ext_by_OBJ 2d48 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d48, X509_CRL_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_ext_by_critical 2d4e 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d4e, X509_CRL_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_ext 2d54 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d54, X509_CRL_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_delete_ext 2d5a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d5a, X509_CRL_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_add_ext 2d60 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d60, X509_CRL_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_ext_d2i 2d66 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d66, X509_CRL_get_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_add1_ext_i2d 2d6c 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d6c, X509_CRL_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get_ext_count 2d72 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d72, X509_REVOKED_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get_ext_by_NID 2d78 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d78, X509_REVOKED_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get_ext_by_OBJ 2d7e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d7e, X509_REVOKED_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get_ext_by_critical 2d84 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d84, X509_REVOKED_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get_ext 2d8a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d8a, X509_REVOKED_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_delete_ext 2d90 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d90, X509_REVOKED_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_add_ext 2d96 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d96, X509_REVOKED_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get_ext_d2i 2d9c a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2d9c, X509_REVOKED_get_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_add1_ext_i2d 2da2 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2da2, X509_REVOKED_add1_ext_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_create_by_NID 2da8 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2da8, X509_EXTENSION_create_by_NID(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_create_by_OBJ 2dae a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dae, X509_EXTENSION_create_by_OBJ(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_set_object 2db4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2db4, X509_EXTENSION_set_object(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_set_critical 2dba 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dba, X509_EXTENSION_set_critical(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_set_data 2dc0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dc0, X509_EXTENSION_set_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_get_object 2dc6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dc6, X509_EXTENSION_get_object(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_get_data 2dcc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dcc, X509_EXTENSION_get_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSION_get_critical 2dd2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dd2, X509_EXTENSION_get_critical(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_get_attr_count 2dd8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dd8, X509at_get_attr_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_get_attr_by_NID 2dde 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dde, X509at_get_attr_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_get_attr_by_OBJ 2de4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2de4, X509at_get_attr_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_get_attr 2dea 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dea, X509at_get_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_delete_attr 2df0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2df0, X509at_delete_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_add1_attr 2df6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2df6, X509at_add1_attr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_add1_attr_by_OBJ 2dfc 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2dfc, X509at_add1_attr_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_add1_attr_by_NID 2e02 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e02, X509at_add1_attr_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_add1_attr_by_txt 2e08 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e08, X509at_add1_attr_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_create_by_NID 2e0e 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e0e, X509_ATTRIBUTE_create_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_create_by_OBJ 2e14 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e14, X509_ATTRIBUTE_create_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_create_by_txt 2e1a 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e1a, X509_ATTRIBUTE_create_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_set1_object 2e20 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e20, X509_ATTRIBUTE_set1_object(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_set1_data 2e26 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e26, X509_ATTRIBUTE_set1_data(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_get0_data 2e2c 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e2c, X509_ATTRIBUTE_get0_data(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_count 2e32 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e32, X509_ATTRIBUTE_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_get0_object 2e38 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e38, X509_ATTRIBUTE_get0_object(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ATTRIBUTE_get0_type 2e3e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e3e, X509_ATTRIBUTE_get0_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_verify_cert 2e44 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e44, X509_verify_cert(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_find_by_issuer_and_serial 2e4a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e4a, X509_find_by_issuer_and_serial(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_find_by_subject 2e50 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e50, X509_find_by_subject(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBEPARAM_new 2e56 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e56, PBEPARAM_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBEPARAM_free 2e5c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e5c, PBEPARAM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PBEPARAM 2e62 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e62, d2i_PBEPARAM(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PBEPARAM 2e68 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e68, i2d_PBEPARAM(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBEPARAM_it 2e6e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e6e, PBEPARAM_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBE2PARAM_new 2e74 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e74, PBE2PARAM_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBE2PARAM_free 2e7a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e7a, PBE2PARAM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PBE2PARAM 2e80 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e80, d2i_PBE2PARAM(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PBE2PARAM 2e86 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e86, i2d_PBE2PARAM(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBE2PARAM_it 2e8c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e8c, PBE2PARAM_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBKDF2PARAM_new 2e92 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e92, PBKDF2PARAM_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBKDF2PARAM_free 2e98 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e98, PBKDF2PARAM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PBKDF2PARAM 2e9e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2e9e, d2i_PBKDF2PARAM(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PBKDF2PARAM 2ea4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ea4, i2d_PBKDF2PARAM(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PBKDF2PARAM_it 2eaa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2eaa, PBKDF2PARAM_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_pbe_set 2eb0 281004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2eb0, PKCS5_pbe_set(d0,d1,a0,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_pbe2_set 2eb6 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2eb6, PKCS5_pbe2_set(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_PRIV_KEY_INFO_new 2ebc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ebc, PKCS8_PRIV_KEY_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_PRIV_KEY_INFO_free 2ec2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ec2, PKCS8_PRIV_KEY_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKCS8_PRIV_KEY_INFO 2ec8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ec8, d2i_PKCS8_PRIV_KEY_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS8_PRIV_KEY_INFO 2ece 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ece, i2d_PKCS8_PRIV_KEY_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_PRIV_KEY_INFO_it 2ed4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ed4, PKCS8_PRIV_KEY_INFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKCS82PKEY 2eda 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2eda, EVP_PKCS82PKEY(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY2PKCS8 2ee0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ee0, EVP_PKEY2PKCS8(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY2PKCS8_broken 2ee6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ee6, EVP_PKEY2PKCS8_broken(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_set_broken 2eec 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2eec, PKCS8_set_broken(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_trust 2ef2 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ef2, X509_check_trust(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_get_count 2ef8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ef8, X509_TRUST_get_count())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_get0 2efe 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2efe, X509_TRUST_get0(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_get_by_id 2f04 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f04, X509_TRUST_get_by_id(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_add 2f0a a2981006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f0a, X509_TRUST_add(d0,d1,a0,a1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_cleanup 2f10 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f10, X509_TRUST_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_get_flags 2f16 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f16, X509_TRUST_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_get0_name 2f1c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f1c, X509_TRUST_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_TRUST_get_trust 2f22 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f22, X509_TRUST_get_trust(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_X509_strings 2f28 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f28, ERR_load_X509_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_OBJECT_idx_by_subject 2f2e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f2e, X509_OBJECT_idx_by_subject(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_OBJECT_retrieve_by_subject 2f34 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f34, X509_OBJECT_retrieve_by_subject(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_OBJECT_retrieve_match 2f3a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f3a, X509_OBJECT_retrieve_match(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_OBJECT_up_ref_count 2f40 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f40, X509_OBJECT_up_ref_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_OBJECT_free_contents 2f46 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f46, X509_OBJECT_free_contents(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_new 2f4c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f4c, X509_STORE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_free 2f52 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f52, X509_STORE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_flags 2f58 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f58, X509_STORE_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_purpose 2f5e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f5e, X509_STORE_set_purpose(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_trust 2f64 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f64, X509_STORE_set_trust(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_new 2f6a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f6a, X509_STORE_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get1_issuer 2f70 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f70, X509_STORE_CTX_get1_issuer(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_free 2f76 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f76, X509_STORE_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_init 2f7c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f7c, X509_STORE_CTX_init(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_trusted_stack 2f82 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f82, X509_STORE_CTX_trusted_stack(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_cleanup 2f88 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f88, X509_STORE_CTX_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_add_lookup 2f8e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f8e, X509_STORE_add_lookup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_hash_dir 2f94 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f94, X509_LOOKUP_hash_dir())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_file 2f9a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2f9a, X509_LOOKUP_file())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_add_cert 2fa0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fa0, X509_STORE_add_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_add_crl 2fa6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fa6, X509_STORE_add_crl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_get_by_subject 2fac a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fac, X509_STORE_get_by_subject(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_ctrl 2fb2 a190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fb2, X509_LOOKUP_ctrl(a0,d0,a1,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_load_cert_file 2fb8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fb8, X509_load_cert_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_load_crl_file 2fbe 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fbe, X509_load_crl_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_load_cert_crl_file 2fc4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fc4, X509_load_cert_crl_file(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_new 2fca 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fca, X509_LOOKUP_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_free 2fd0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fd0, X509_LOOKUP_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_init 2fd6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fd6, X509_LOOKUP_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_by_subject 2fdc a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fdc, X509_LOOKUP_by_subject(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_by_issuer_serial 2fe2 ba90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fe2, X509_LOOKUP_by_issuer_serial(a0,d0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_by_fingerprint 2fe8 a190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fe8, X509_LOOKUP_by_fingerprint(a0,d0,a1,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_by_alias 2fee a190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2fee, X509_LOOKUP_by_alias(a0,d0,a1,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_LOOKUP_shutdown 2ff4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ff4, X509_LOOKUP_shutdown(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_load_locations 2ffa a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x2ffa, X509_STORE_load_locations(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_default_paths 3000 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3000, X509_STORE_set_default_paths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_ex_data 300c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x300c, X509_STORE_CTX_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_ex_data 3012 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3012, X509_STORE_CTX_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_error 3018 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3018, X509_STORE_CTX_get_error(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_error 301e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x301e, X509_STORE_CTX_set_error(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_error_depth 3024 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3024, X509_STORE_CTX_get_error_depth(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_current_cert 302a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x302a, X509_STORE_CTX_get_current_cert(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_chain 3030 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3030, X509_STORE_CTX_get_chain(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get1_chain 3036 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3036, X509_STORE_CTX_get1_chain(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_cert 303c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x303c, X509_STORE_CTX_set_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_chain 3042 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3042, X509_STORE_CTX_set_chain(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_purpose 3048 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3048, X509_STORE_CTX_set_purpose(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_trust 304e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x304e, X509_STORE_CTX_set_trust(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_purpose_inherit 3054 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3054, X509_STORE_CTX_purpose_inherit(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_flags 305a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x305a, X509_STORE_CTX_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_time 3060 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3060, X509_STORE_CTX_set_time(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_verify_cb 3066 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3066, X509_STORE_CTX_set_verify_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BASIC_CONSTRAINTS_new 306c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x306c, BASIC_CONSTRAINTS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BASIC_CONSTRAINTS_free 3072 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3072, BASIC_CONSTRAINTS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_BASIC_CONSTRAINTS 3078 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3078, d2i_BASIC_CONSTRAINTS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_BASIC_CONSTRAINTS 307e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x307e, i2d_BASIC_CONSTRAINTS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BASIC_CONSTRAINTS_it 3084 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3084, BASIC_CONSTRAINTS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_new 308a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x308a, SXNET_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_free 3090 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3090, SXNET_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_SXNET 3096 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3096, d2i_SXNET(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_SXNET 309c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x309c, i2d_SXNET(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_it 30a2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30a2, SXNET_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNETID_new 30a8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30a8, SXNETID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNETID_free 30ae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30ae, SXNETID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_SXNETID 30b4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30b4, d2i_SXNETID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_SXNETID 30ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30ba, i2d_SXNETID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNETID_it 30c0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30c0, SXNETID_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_add_id_asc 30c6 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30c6, SXNET_add_id_asc(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_add_id_ulong 30cc 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30cc, SXNET_add_id_ulong(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_add_id_INTEGER 30d2 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30d2, SXNET_add_id_INTEGER(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_get_id_asc 30d8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30d8, SXNET_get_id_asc(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_get_id_ulong 30de 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30de, SXNET_get_id_ulong(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SXNET_get_id_INTEGER 30e4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30e4, SXNET_get_id_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AUTHORITY_KEYID_new 30ea 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30ea, AUTHORITY_KEYID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AUTHORITY_KEYID_free 30f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30f0, AUTHORITY_KEYID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_AUTHORITY_KEYID 30f6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30f6, d2i_AUTHORITY_KEYID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_AUTHORITY_KEYID 30fc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x30fc, i2d_AUTHORITY_KEYID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AUTHORITY_KEYID_it 3102 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3102, AUTHORITY_KEYID_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKEY_USAGE_PERIOD_new 3108 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3108, PKEY_USAGE_PERIOD_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKEY_USAGE_PERIOD_free 310e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x310e, PKEY_USAGE_PERIOD_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PKEY_USAGE_PERIOD 3114 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3114, d2i_PKEY_USAGE_PERIOD(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKEY_USAGE_PERIOD 311a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x311a, i2d_PKEY_USAGE_PERIOD(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKEY_USAGE_PERIOD_it 3120 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3120, PKEY_USAGE_PERIOD_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_new 3126 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3126, GENERAL_NAME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_free 312c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x312c, GENERAL_NAME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_GENERAL_NAME 3132 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3132, d2i_GENERAL_NAME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_GENERAL_NAME 3138 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3138, i2d_GENERAL_NAME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_it 313e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x313e, GENERAL_NAME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2v_GENERAL_NAME 3144 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3144, i2v_GENERAL_NAME(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_print 314a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x314a, GENERAL_NAME_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAMES_new 3150 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3150, GENERAL_NAMES_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAMES_free 3156 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3156, GENERAL_NAMES_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_GENERAL_NAMES 315c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x315c, d2i_GENERAL_NAMES(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_GENERAL_NAMES 3162 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3162, i2d_GENERAL_NAMES(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAMES_it 3168 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3168, GENERAL_NAMES_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2v_GENERAL_NAMES 316e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x316e, i2v_GENERAL_NAMES(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v2i_GENERAL_NAMES 3174 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3174, v2i_GENERAL_NAMES(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OTHERNAME_new 317a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x317a, OTHERNAME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OTHERNAME_free 3180 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3180, OTHERNAME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_OTHERNAME 3186 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3186, d2i_OTHERNAME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_OTHERNAME 318c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x318c, i2d_OTHERNAME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OTHERNAME_it 3192 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3192, OTHERNAME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EDIPARTYNAME_new 3198 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3198, EDIPARTYNAME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EDIPARTYNAME_free 319e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x319e, EDIPARTYNAME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_EDIPARTYNAME 31a4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31a4, d2i_EDIPARTYNAME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_EDIPARTYNAME 31aa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31aa, i2d_EDIPARTYNAME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EDIPARTYNAME_it 31b0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31b0, EDIPARTYNAME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2s_ASN1_OCTET_STRING 31b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31b6, i2s_ASN1_OCTET_STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase s2i_ASN1_OCTET_STRING 31bc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31bc, s2i_ASN1_OCTET_STRING(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EXTENDED_KEY_USAGE_new 31c2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31c2, EXTENDED_KEY_USAGE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EXTENDED_KEY_USAGE_free 31c8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31c8, EXTENDED_KEY_USAGE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_EXTENDED_KEY_USAGE 31ce 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31ce, d2i_EXTENDED_KEY_USAGE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_EXTENDED_KEY_USAGE 31d4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31d4, i2d_EXTENDED_KEY_USAGE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EXTENDED_KEY_USAGE_it 31da 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31da, EXTENDED_KEY_USAGE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2a_ACCESS_DESCRIPTION 31e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31e0, i2a_ACCESS_DESCRIPTION(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CERTIFICATEPOLICIES_new 31e6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31e6, CERTIFICATEPOLICIES_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CERTIFICATEPOLICIES_free 31ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31ec, CERTIFICATEPOLICIES_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_CERTIFICATEPOLICIES 31f2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31f2, d2i_CERTIFICATEPOLICIES(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_CERTIFICATEPOLICIES 31f8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31f8, i2d_CERTIFICATEPOLICIES(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CERTIFICATEPOLICIES_it 31fe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x31fe, CERTIFICATEPOLICIES_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICYINFO_new 3204 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3204, POLICYINFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICYINFO_free 320a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x320a, POLICYINFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_POLICYINFO 3210 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3210, d2i_POLICYINFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_POLICYINFO 3216 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3216, i2d_POLICYINFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICYINFO_it 321c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x321c, POLICYINFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICYQUALINFO_new 3222 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3222, POLICYQUALINFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICYQUALINFO_free 3228 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3228, POLICYQUALINFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_POLICYQUALINFO 322e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x322e, d2i_POLICYQUALINFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_POLICYQUALINFO 3234 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3234, i2d_POLICYQUALINFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICYQUALINFO_it 323a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x323a, POLICYQUALINFO_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase USERNOTICE_new 3240 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3240, USERNOTICE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase USERNOTICE_free 3246 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3246, USERNOTICE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_USERNOTICE 324c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x324c, d2i_USERNOTICE(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_USERNOTICE 3252 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3252, i2d_USERNOTICE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase USERNOTICE_it 3258 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3258, USERNOTICE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NOTICEREF_new 325e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x325e, NOTICEREF_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NOTICEREF_free 3264 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3264, NOTICEREF_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_NOTICEREF 326a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x326a, d2i_NOTICEREF(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_NOTICEREF 3270 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3270, i2d_NOTICEREF(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NOTICEREF_it 3276 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3276, NOTICEREF_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRL_DIST_POINTS_new 327c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x327c, CRL_DIST_POINTS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRL_DIST_POINTS_free 3282 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3282, CRL_DIST_POINTS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_CRL_DIST_POINTS 3288 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3288, d2i_CRL_DIST_POINTS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_CRL_DIST_POINTS 328e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x328e, i2d_CRL_DIST_POINTS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRL_DIST_POINTS_it 3294 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3294, CRL_DIST_POINTS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_new 329a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x329a, DIST_POINT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_free 32a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32a0, DIST_POINT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DIST_POINT 32a6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32a6, d2i_DIST_POINT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DIST_POINT 32ac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32ac, i2d_DIST_POINT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_it 32b2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32b2, DIST_POINT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_NAME_new 32b8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32b8, DIST_POINT_NAME_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_NAME_free 32be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32be, DIST_POINT_NAME_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DIST_POINT_NAME 32c4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32c4, d2i_DIST_POINT_NAME(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DIST_POINT_NAME 32ca 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32ca, i2d_DIST_POINT_NAME(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_NAME_it 32d0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32d0, DIST_POINT_NAME_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ACCESS_DESCRIPTION_new 32d6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32d6, ACCESS_DESCRIPTION_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ACCESS_DESCRIPTION_free 32dc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32dc, ACCESS_DESCRIPTION_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ACCESS_DESCRIPTION 32e2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32e2, d2i_ACCESS_DESCRIPTION(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ACCESS_DESCRIPTION 32e8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32e8, i2d_ACCESS_DESCRIPTION(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ACCESS_DESCRIPTION_it 32ee 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32ee, ACCESS_DESCRIPTION_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AUTHORITY_INFO_ACCESS_new 32f4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32f4, AUTHORITY_INFO_ACCESS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AUTHORITY_INFO_ACCESS_free 32fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x32fa, AUTHORITY_INFO_ACCESS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_AUTHORITY_INFO_ACCESS 3300 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3300, d2i_AUTHORITY_INFO_ACCESS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_AUTHORITY_INFO_ACCESS 3306 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3306, i2d_AUTHORITY_INFO_ACCESS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AUTHORITY_INFO_ACCESS_it 330c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x330c, AUTHORITY_INFO_ACCESS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v2i_GENERAL_NAME 3312 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3312, v2i_GENERAL_NAME(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_conf_free 3318 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3318, X509V3_conf_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_nconf_nid 331e a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x331e, X509V3_EXT_nconf_nid(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_nconf 3324 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3324, X509V3_EXT_nconf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_add_nconf_sk 332a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x332a, X509V3_EXT_add_nconf_sk(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_add_nconf 3330 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3330, X509V3_EXT_add_nconf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_REQ_add_nconf 3336 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3336, X509V3_EXT_REQ_add_nconf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_CRL_add_nconf 333c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x333c, X509V3_EXT_CRL_add_nconf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_conf_nid 3342 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3342, X509V3_EXT_conf_nid(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_conf 3348 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3348, X509V3_EXT_conf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_add_conf 334e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x334e, X509V3_EXT_add_conf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_REQ_add_conf 3354 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3354, X509V3_EXT_REQ_add_conf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_CRL_add_conf 335a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x335a, X509V3_EXT_CRL_add_conf(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add_value_bool_nf 3360 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3360, X509V3_add_value_bool_nf(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_get_value_bool 3366 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3366, X509V3_get_value_bool(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_get_value_int 336c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x336c, X509V3_get_value_int(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_set_nconf 3372 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3372, X509V3_set_nconf(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_set_conf_lhash 3378 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3378, X509V3_set_conf_lhash(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_get_string 337e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x337e, X509V3_get_string(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_get_section 3384 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3384, X509V3_get_section(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_string_free 338a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x338a, X509V3_string_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_section_free 3390 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3390, X509V3_section_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_set_ctx 3396 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3396, X509V3_set_ctx(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add_value 339c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x339c, X509V3_add_value(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add_value_uchar 33a2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33a2, X509V3_add_value_uchar(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add_value_bool 33a8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33a8, X509V3_add_value_bool(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add_value_int 33ae a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33ae, X509V3_add_value_int(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2s_ASN1_INTEGER 33b4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33b4, i2s_ASN1_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase s2i_ASN1_INTEGER 33ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33ba, s2i_ASN1_INTEGER(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2s_ASN1_ENUMERATED 33c0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33c0, i2s_ASN1_ENUMERATED(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2s_ASN1_ENUMERATED_TABLE 33c6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33c6, i2s_ASN1_ENUMERATED_TABLE(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_add 33cc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33cc, X509V3_EXT_add(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_add_list 33d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33d2, X509V3_EXT_add_list(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_add_alias 33d8 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33d8, X509V3_EXT_add_alias(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_cleanup 33de 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33de, X509V3_EXT_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_get 33e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33e4, X509V3_EXT_get(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_get_nid 33ea 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33ea, X509V3_EXT_get_nid(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add_standard_extensions 33f0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33f0, X509V3_add_standard_extensions())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_parse_list 33f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33f6, X509V3_parse_list(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_d2i 33fc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x33fc, X509V3_EXT_d2i(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_get_d2i 3402 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3402, X509V3_get_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_i2d 3408 81003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3408, X509V3_EXT_i2d(d0,d1,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_add1_i2d 340e 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x340e, X509V3_add1_i2d(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase hex_to_string 3414 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3414, hex_to_string(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase string_to_hex 341a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x341a, string_to_hex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase name_cmp 3420 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3420, name_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_val_prn 3426 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3426, X509V3_EXT_val_prn(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_EXT_print 342c 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x342c, X509V3_EXT_print(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_extensions_print 3432 10a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3432, X509V3_extensions_print(a0,a1,a2,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_purpose 3438 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3438, X509_check_purpose(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_supported_extension 343e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x343e, X509_supported_extension(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_set 3444 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3444, X509_PURPOSE_set(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_issued 344a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x344a, X509_check_issued(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get_count 3450 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3450, X509_PURPOSE_get_count())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get0 3456 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3456, X509_PURPOSE_get0(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get_by_sname 345c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x345c, X509_PURPOSE_get_by_sname(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get_by_id 3462 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3462, X509_PURPOSE_get_by_id(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_add 3468 ba9821007
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3468, X509_PURPOSE_add(d0,d1,d2,a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get0_name 346e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x346e, X509_PURPOSE_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get0_sname 3474 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3474, X509_PURPOSE_get0_sname(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get_trust 347a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x347a, X509_PURPOSE_get_trust(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_cleanup 3480 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3480, X509_PURPOSE_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PURPOSE_get_id 3486 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3486, X509_PURPOSE_get_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get1_email 348c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x348c, X509_get1_email(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get1_email 3492 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3492, X509_REQ_get1_email(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_email_free 3498 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3498, X509_email_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_X509V3_strings 349e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x349e, ERR_load_X509V3_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_options 34a4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34a4, AES_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_set_encrypt_key 34aa 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34aa, AES_set_encrypt_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_set_decrypt_key 34b0 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34b0, AES_set_decrypt_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_encrypt 34b6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34b6, AES_encrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_decrypt 34bc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34bc, AES_decrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_ecb_encrypt 34c2 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34c2, AES_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_cbc_encrypt 34c8 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34c8, AES_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_cfb128_encrypt 34ce 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34ce, AES_cfb128_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_cfb1_encrypt 34d4 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34d4, AES_cfb1_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_cfb8_encrypt 34da 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34da, AES_cfb8_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_ofb128_encrypt 34e6 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34e6, AES_ofb128_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_set_key 34f2 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34f2, BF_set_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_encrypt 34f8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34f8, BF_encrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_decrypt 34fe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x34fe, BF_decrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_ecb_encrypt 3504 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3504, BF_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_cbc_encrypt 350a 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x350a, BF_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_cfb64_encrypt 3510 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3510, BF_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_ofb64_encrypt 3516 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3516, BF_ofb64_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BF_options 351c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x351c, BF_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_set_key 3522 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3522, CAST_set_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_ecb_encrypt 3528 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3528, CAST_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_encrypt 352e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x352e, CAST_encrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_decrypt 3534 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3534, CAST_decrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_cbc_encrypt 353a 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x353a, CAST_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_cfb64_encrypt 3540 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3540, CAST_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CAST_ofb64_encrypt 3546 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3546, CAST_ofb64_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _shadow_DES_check_key 354c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x354c, _shadow_DES_check_key())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase _shadow_DES_rw_mode 3552 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3552, _shadow_DES_rw_mode())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_options 3558 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3558, DES_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ecb3_encrypt 355e 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x355e, DES_ecb3_encrypt(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_cbc_cksum 3564 ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3564, DES_cbc_cksum(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_cbc_encrypt 356a 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x356a, DES_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ncbc_encrypt 3570 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3570, DES_ncbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_xcbc_encrypt 3576 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3576, DES_xcbc_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_cfb_encrypt 357c 2ba109807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x357c, DES_cfb_encrypt(a0,a1,d0,d1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ecb_encrypt 3582 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3582, DES_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_encrypt1 3588 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3588, DES_encrypt1(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_encrypt2 358e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x358e, DES_encrypt2(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_encrypt3 3594 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3594, DES_encrypt3(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_decrypt3 359a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x359a, DES_decrypt3(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ede3_cbc_encrypt 35a0 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35a0, DES_ede3_cbc_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ede3_cfb64_encrypt 35ac 4321ba09809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35ac, DES_ede3_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ede3_cfb_encrypt 35b2 432ba109809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35b2, DES_ede3_cfb_encrypt(a0,a1,d0,d1,a2,a3,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ede3_ofb64_encrypt 35b8 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35b8, DES_ede3_ofb64_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_enc_read 35c4 a918005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35c4, DES_enc_read(d0,a0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_enc_write 35ca a918005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35ca, DES_enc_write(d0,a0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_fcrypt 35d0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35d0, DES_fcrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_crypt 35d6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35d6, DES_crypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ofb_encrypt 35dc ba109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35dc, DES_ofb_encrypt(a0,a1,d0,d1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_pcbc_encrypt 35e2 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35e2, DES_pcbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_quad_cksum 35e8 a109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35e8, DES_quad_cksum(a0,a1,d0,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_random_key 35ee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35ee, DES_random_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_set_odd_parity 35f4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35f4, DES_set_odd_parity(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_check_key_parity 35fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x35fa, DES_check_key_parity(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_is_weak_key 3600 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3600, DES_is_weak_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_set_key 3606 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3606, DES_set_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_key_sched 360c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x360c, DES_key_sched(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_set_key_checked 3612 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3612, DES_set_key_checked(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_set_key_unchecked 3618 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3618, DES_set_key_unchecked(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_string_to_key 361e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x361e, DES_string_to_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_string_to_2keys 3624 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3624, DES_string_to_2keys(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_cfb64_encrypt 362a 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x362a, DES_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_ofb64_encrypt 3630 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3630, DES_ofb64_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_read_password 3636 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3636, DES_read_password(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DES_read_2passwords 363c 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x363c, DES_read_2passwords(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_OpenSSL 3720 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3720, DH_OpenSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_set_default_method 3726 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3726, DH_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_get_default_method 372c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x372c, DH_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_set_method 3732 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3732, DH_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_new_method 3738 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3738, DH_new_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_new 373e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x373e, DH_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_free 3744 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3744, DH_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_up_ref 374a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x374a, DH_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_size 3750 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3750, DH_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_set_ex_data 375c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x375c, DH_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_get_ex_data 3762 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3762, DH_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_generate_parameters 3768 981004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3768, DH_generate_parameters(d0,d1,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_check 376e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x376e, DH_check(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_generate_key 3774 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3774, DH_generate_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_compute_key 377a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x377a, DH_compute_key(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DHparams 3780 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3780, d2i_DHparams(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DHparams 3786 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3786, i2d_DHparams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DHparams_print 378c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x378c, DHparams_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_DH_strings 3792 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3792, ERR_load_DH_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_SIG_new 3798 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3798, DSA_SIG_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_SIG_free 379e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x379e, DSA_SIG_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSA_SIG 37a4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37a4, i2d_DSA_SIG(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSA_SIG 37aa 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37aa, d2i_DSA_SIG(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_do_sign 37b0 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37b0, DSA_do_sign(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_do_verify 37b6 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37b6, DSA_do_verify(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_OpenSSL 37bc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37bc, DSA_OpenSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_set_default_method 37c2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37c2, DSA_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_get_default_method 37c8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37c8, DSA_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_set_method 37ce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37ce, DSA_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_new 37d4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37d4, DSA_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_new_method 37da 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37da, DSA_new_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_free 37e0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37e0, DSA_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_up_ref 37e6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37e6, DSA_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_size 37ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37ec, DSA_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_sign_setup 37f2 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37f2, DSA_sign_setup(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_sign 37f8 ba918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37f8, DSA_sign(d0,a0,d1,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_verify 37fe a2918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x37fe, DSA_verify(d0,a0,d1,a1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_set_ex_data 380a 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x380a, DSA_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_get_ex_data 3810 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3810, DSA_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSAPublicKey 3816 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3816, d2i_DSAPublicKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSAPrivateKey 381c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x381c, d2i_DSAPrivateKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DSAparams 3822 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3822, d2i_DSAparams(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_generate_parameters 3828 2ba918007
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3828, DSA_generate_parameters(d0,a0,d1,a1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_generate_key 382e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x382e, DSA_generate_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSAPublicKey 3834 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3834, i2d_DSAPublicKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSAPrivateKey 383a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x383a, i2d_DSAPrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DSAparams 3840 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3840, i2d_DSAparams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSAparams_print 3846 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3846, DSAparams_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_print 384c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x384c, DSA_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_dup_DH 3852 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3852, DSA_dup_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_DSA_strings 3858 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3858, ERR_load_DSA_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_options 385e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x385e, idea_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_ecb_encrypt 3864 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3864, idea_ecb_encrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_set_encrypt_key 386a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x386a, idea_set_encrypt_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_set_decrypt_key 3870 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3870, idea_set_decrypt_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_cbc_encrypt 3876 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3876, idea_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_cfb64_encrypt 387c 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x387c, idea_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_ofb64_encrypt 3882 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3882, idea_ofb64_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase idea_encrypt 3888 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3888, idea_encrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD2_options 388e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x388e, MD2_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD2_Init 3894 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3894, MD2_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD2_Update 389a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x389a, MD2_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD2_Final 38a0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38a0, MD2_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD2 38a6 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38a6, MD2(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD4_Init 38ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38ac, MD4_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD4_Update 38b2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38b2, MD4_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD4_Final 38b8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38b8, MD4_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD4 38be 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38be, MD4(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD4_Transform 38c4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38c4, MD4_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD5_Init 38ca 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38ca, MD5_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD5_Update 38d0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38d0, MD5_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD5_Final 38d6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38d6, MD5_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD5 38dc 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38dc, MD5(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MD5_Transform 38e2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38e2, MD5_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MDC2_Init 38e8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38e8, MDC2_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MDC2_Update 38ee 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38ee, MDC2_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MDC2_Final 38f4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38f4, MDC2_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase MDC2 38fa 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x38fa, MDC2(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_set_key 3900 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3900, RC2_set_key(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_ecb_encrypt 3906 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3906, RC2_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_encrypt 390c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x390c, RC2_encrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_decrypt 3912 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3912, RC2_decrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_cbc_encrypt 3918 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3918, RC2_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_cfb64_encrypt 391e 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x391e, RC2_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC2_ofb64_encrypt 3924 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3924, RC2_ofb64_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC4_options 392a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x392a, RC4_options())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC4_set_key 3930 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3930, RC4_set_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC4 3936 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3936, RC4(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_set_key 393c 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x393c, RC5_32_set_key(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_ecb_encrypt 3942 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3942, RC5_32_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_encrypt 3948 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3948, RC5_32_encrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_decrypt 394e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x394e, RC5_32_decrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_cbc_encrypt 3954 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3954, RC5_32_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_cfb64_encrypt 395a 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x395a, RC5_32_cfb64_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RC5_32_ofb64_encrypt 3960 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3960, RC5_32_ofb64_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RIPEMD160_Init 3966 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3966, RIPEMD160_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RIPEMD160_Update 396c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x396c, RIPEMD160_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RIPEMD160_Final 3972 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3972, RIPEMD160_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RIPEMD160 3978 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3978, RIPEMD160(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RIPEMD160_Transform 397e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x397e, RIPEMD160_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_new 3984 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3984, RSA_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_new_method 398a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x398a, RSA_new_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_size 3990 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3990, RSA_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_generate_key 3996 981004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3996, RSA_generate_key(d0,d1,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_check_key 399c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x399c, RSA_check_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_public_encrypt 39a2 1a98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39a2, RSA_public_encrypt(d0,a0,a1,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_private_encrypt 39a8 1a98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39a8, RSA_private_encrypt(d0,a0,a1,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_public_decrypt 39ae 1a98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39ae, RSA_public_decrypt(d0,a0,a1,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_private_decrypt 39b4 1a98005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39b4, RSA_private_decrypt(d0,a0,a1,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_free 39ba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39ba, RSA_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_up_ref 39c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39c0, RSA_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_flags 39c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39c6, RSA_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_set_default_method 39cc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39cc, RSA_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_get_default_method 39d2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39d2, RSA_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_get_method 39d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39d8, RSA_get_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_set_method 39de 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39de, RSA_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_memory_lock 39e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39e4, RSA_memory_lock(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_null_method 39f0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39f0, RSA_null_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSAPublicKey 39f6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39f6, d2i_RSAPublicKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSAPublicKey 39fc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x39fc, i2d_RSAPublicKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSAPublicKey_it 3a02 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a02, RSAPublicKey_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSAPrivateKey 3a08 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a08, d2i_RSAPrivateKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSAPrivateKey 3a0e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a0e, i2d_RSAPrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSAPrivateKey_it 3a14 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a14, RSAPrivateKey_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_print 3a1a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a1a, RSA_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_sign 3a38 ba918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a38, RSA_sign(d0,a0,d1,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_verify 3a3e a2918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a3e, RSA_verify(d0,a0,d1,a1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_sign_ASN1_OCTET_STRING 3a44 ba918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a44, RSA_sign_ASN1_OCTET_STRING(d0,a0,d1,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_verify_ASN1_OCTET_STRING 3a4a a2918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a4a, RSA_verify_ASN1_OCTET_STRING(d0,a0,d1,a1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_blinding_on 3a50 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a50, RSA_blinding_on(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_blinding_off 3a56 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a56, RSA_blinding_off(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_PKCS1_type_1 3a5c 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a5c, RSA_padding_add_PKCS1_type_1(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_PKCS1_type_1 3a62 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a62, RSA_padding_check_PKCS1_type_1(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_PKCS1_type_2 3a68 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a68, RSA_padding_add_PKCS1_type_2(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_PKCS1_type_2 3a6e 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a6e, RSA_padding_check_PKCS1_type_2(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_PKCS1_OAEP 3a74 2a190806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a74, RSA_padding_add_PKCS1_OAEP(a0,d0,a1,d1,a2,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_PKCS1_OAEP 3a7a 3a2190807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a7a, RSA_padding_check_PKCS1_OAEP(a0,d0,a1,d1,d2,a2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_SSLv23 3a80 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a80, RSA_padding_add_SSLv23(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_SSLv23 3a86 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a86, RSA_padding_check_SSLv23(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_none 3a8c 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a8c, RSA_padding_add_none(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_none 3a92 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a92, RSA_padding_check_none(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_set_ex_data 3a9e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3a9e, RSA_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_get_ex_data 3aa4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3aa4, RSA_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSAPublicKey_dup 3aaa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3aaa, RSAPublicKey_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSAPrivateKey_dup 3ab0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ab0, RSAPrivateKey_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_RSA_strings 3ab6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ab6, ERR_load_RSA_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA1_Init 3ada 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ada, SHA1_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA1_Update 3ae0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ae0, SHA1_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA1_Final 3ae6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ae6, SHA1_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA1 3aec 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3aec, SHA1(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA1_Transform 3af2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3af2, SHA1_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_CTX_set_flags 3b04 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b04, HMAC_CTX_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_ca 3b0a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b0a, X509_check_ca(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PROXY_POLICY_new 3b10 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b10, PROXY_POLICY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PROXY_POLICY_free 3b16 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b16, PROXY_POLICY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PROXY_POLICY 3b1c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b1c, d2i_PROXY_POLICY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PROXY_POLICY 3b22 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b22, i2d_PROXY_POLICY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PROXY_POLICY_it 3b28 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b28, PROXY_POLICY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PROXY_CERT_INFO_EXTENSION_new 3b2e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b2e, PROXY_CERT_INFO_EXTENSION_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PROXY_CERT_INFO_EXTENSION_free 3b34 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b34, PROXY_CERT_INFO_EXTENSION_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_PROXY_CERT_INFO_EXTENSION 3b3a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b3a, d2i_PROXY_CERT_INFO_EXTENSION(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PROXY_CERT_INFO_EXTENSION 3b40 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b40, i2d_PROXY_CERT_INFO_EXTENSION(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PROXY_CERT_INFO_EXTENSION_it 3b46 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b46, PROXY_CERT_INFO_EXTENSION_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase FIPS_mode 3b4c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b4c, FIPS_mode())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_mod_exp_mont_consttime 3b58 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b58, BN_mod_exp_mont_consttime(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_MONT_CTX_set_locked 3b5e a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b5e, BN_MONT_CTX_set_locked(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS1_MGF1 3b64 a190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b64, PKCS1_MGF1(a0,d0,a1,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_X931 3b6a 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b6a, RSA_padding_add_X931(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_X931 3b70 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b70, RSA_padding_check_X931(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_X931_hash_id 3b76 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b76, RSA_X931_hash_id(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_verify_PKCS1_PSS 3b7c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b7c, RSA_verify_PKCS1_PSS(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_PKCS1_PSS 3b82 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b82, RSA_padding_add_PKCS1_PSS(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_sha224 3b88 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b88, EVP_sha224())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_sha256 3b8e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b8e, EVP_sha256())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_sha384 3b94 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b94, EVP_sha384())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_sha512 3b9a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3b9a, EVP_sha512())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_add 3ba0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ba0, BN_GF2m_add(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_arr2poly 3ba6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ba6, BN_GF2m_arr2poly(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod 3bac a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bac, BN_GF2m_mod(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_mul 3bb2 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bb2, BN_GF2m_mod_mul(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_sqr 3bb8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bb8, BN_GF2m_mod_sqr(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_inv 3bbe ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bbe, BN_GF2m_mod_inv(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_div 3bc4 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bc4, BN_GF2m_mod_div(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_exp 3bca 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bca, BN_GF2m_mod_exp(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_sqrt 3bd0 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bd0, BN_GF2m_mod_sqrt(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_solve_quad 3bd6 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bd6, BN_GF2m_mod_solve_quad(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_generate_prime_ex 3bdc ba910806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bdc, BN_generate_prime_ex(a0,d0,d1,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_prime_ex 3be2 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3be2, BN_is_prime_ex(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_set_negative 3be8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3be8, BN_set_negative(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_degree 3bee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bee, EC_GROUP_get_degree(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GF2m_simple_method 3bf4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bf4, EC_GF2m_simple_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_curve_GF2m 3bfa 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3bfa, EC_GROUP_set_curve_GF2m(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_curve_GF2m 3c00 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c00, EC_GROUP_get_curve_GF2m(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_set_affine_coordinates_GF2m 3c06 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c06, EC_POINT_set_affine_coordinates_GF2m(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_get_affine_coordinates_GF2m 3c0c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c0c, EC_POINT_get_affine_coordinates_GF2m(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_get_builtin_curves 3c12 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c12, EC_get_builtin_curves(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_new_by_curve_name 3c18 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c18, EC_GROUP_new_by_curve_name(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_check 3c1e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c1e, EC_GROUP_check(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_cleanup 3c24 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c24, ENGINE_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_generate_parameters_ex 3c2a 2ba190807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c2a, DSA_generate_parameters_ex(a0,d0,a1,d1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_new_by_curve_name 3c36 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c36, EC_KEY_new_by_curve_name(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_generate_key 3c3c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c3c, EC_KEY_generate_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_free 3c42 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c42, EC_KEY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_SIG_free 3c48 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c48, ECDSA_SIG_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_do_sign 3c4e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c4e, ECDSA_do_sign(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_do_verify 3c54 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c54, ECDSA_do_verify(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_new 3c5a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c5a, EC_KEY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_group 3c60 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c60, EC_KEY_set_group(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get0_group 3c66 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c66, EC_KEY_get0_group(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_check_key 3c6c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c6c, EC_KEY_check_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_size 3c72 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c72, ECDSA_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_sign 3c78 ba918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c78, ECDSA_sign(d0,a0,d1,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_verify 3c7e a2918006
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c7e, ECDSA_verify(d0,a0,d1,a1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ECDSA_SIG 3c84 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c84, d2i_ECDSA_SIG(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ECDSA_SIG 3c8a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c8a, i2d_ECDSA_SIG(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_generate_parameters_ex 3c90 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c90, DH_generate_parameters_ex(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_METHOD_get_field_type 3c96 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c96, EC_METHOD_get_field_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get0_public_key 3c9c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3c9c, EC_KEY_get0_public_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDH_compute_key 3ca2 ba90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ca2, ECDH_compute_key(a0,d0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get0_private_key 3ca8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ca8, EC_KEY_get0_private_key(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_first 3cae 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cae, ENGINE_get_first())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_id 3cb4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cb4, ENGINE_get_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_name 3cba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cba, ENGINE_get_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_next 3cc0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cc0, ENGINE_get_next(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_free 3cc6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cc6, ENGINE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_new 3ccc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ccc, ENGINE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_id 3cd2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cd2, ENGINE_set_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_name 3cd8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cd8, ENGINE_set_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_add 3cde 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cde, ENGINE_add(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_remove 3ce4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ce4, ENGINE_remove(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_builtin_engines 3cea 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cea, ENGINE_load_builtin_engines())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_ciphers 3cf0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cf0, ENGINE_register_all_ciphers())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_nid 3cf6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cf6, EVP_CIPHER_nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_type 3cfc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3cfc, EVP_MD_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_digests 3d02 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d02, ENGINE_register_all_digests())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_test_flags 3d08 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d08, BIO_test_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_COMP_get_compression_methods 3d0e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d0e, SSL_COMP_get_compression_methods())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_generate_key_ex 3d14 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d14, RSA_generate_key_ex(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_free 3d1a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d1a, X509_VERIFY_PARAM_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set1_param 3d20 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d20, X509_STORE_set1_param(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_generate_nconf 3d26 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d26, ASN1_generate_nconf(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_ECPKParameters 3d2c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d2c, PEM_read_bio_ECPKParameters(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_dup 3d32 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d32, EC_KEY_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set_callback 3d38 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d38, BIO_set_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set_callback_arg 3d3e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d3e, BIO_set_callback_arg(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_set_flags 3d44 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d44, EVP_MD_CTX_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_set_flags 3d4a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d4a, BIO_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_set_flags 3d50 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d50, EVP_CIPHER_CTX_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_iv_length 3d56 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d56, EVP_CIPHER_iv_length(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_check_private_key 3d5c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d5c, X509_REQ_check_private_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_EC_PUBKEY 3d62 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d62, PEM_read_bio_EC_PUBKEY(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_ECPrivateKey 3d68 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d68, PEM_read_bio_ECPrivateKey(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_EC_PUBKEY 3d6e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d6e, PEM_write_bio_EC_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_EC_PUBKEY_bio 3d74 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d74, d2i_EC_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_asn1_flag 3d7a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d7a, EC_KEY_set_asn1_flag(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_conv_form 3d80 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d80, EC_KEY_set_conv_form(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_print 3d86 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d86, EC_KEY_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ECPrivateKey_bio 3d8c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d8c, d2i_ECPrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_EC_PUBKEY_bio 3d92 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d92, i2d_EC_PUBKEY_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_ECPrivateKey 3d98 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d98, PEM_write_bio_ECPrivateKey(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_ECPKParameters 3d9e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3d9e, PEM_write_bio_ECPKParameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ECPrivateKey_bio 3da4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3da4, i2d_ECPrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ECPKParameters 3daa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3daa, i2d_ECPKParameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_asn1_flag 3db0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3db0, EC_GROUP_set_asn1_flag(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_point_conversion_form 3db6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3db6, EC_GROUP_set_point_conversion_form(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_point_conversion_form 3dbc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dbc, EC_GROUP_get_point_conversion_form(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECPKParameters_print 3dc2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dc2, ECPKParameters_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_seed 3dc8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dc8, EC_GROUP_set_seed(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ECPKParameters 3dce 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dce, d2i_ECPKParameters(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_point2bn 3dd4 ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dd4, EC_POINT_point2bn(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get1_ocsp 3dda 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dda, X509_get1_ocsp(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_servername 3de0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3de0, SSL_get_servername(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_SSL_CTX 3de6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3de6, SSL_set_SSL_CTX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_cookie_generate_cb 3dec 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dec, SSL_CTX_set_cookie_generate_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_cookie_verify_cb 3df2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3df2, SSL_CTX_set_cookie_verify_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_info_callback 3df8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3df8, SSL_CTX_set_info_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_server_method 3dfe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3dfe, DTLSv1_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_dgram 3e04 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e04, BIO_new_dgram(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_servername_type 3e0a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e0a, SSL_get_servername_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_current_compression 3e10 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e10, SSL_get_current_compression(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_current_expansion 3e16 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e16, SSL_get_current_expansion(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_COMP_get_name 3e1c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e1c, SSL_COMP_get_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_by_id 3e22 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e22, ENGINE_by_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_client_cert_engine 3e28 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e28, SSL_CTX_set_client_cert_engine(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_client_method 3e2e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e2e, DTLSv1_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_method 3e34 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e34, DTLSv1_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA256 3e3a 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e3a, SHA256(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA512 3e40 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e40, SHA512(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_ige_encrypt 3e46 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e46, AES_ige_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_precompute_mult 3e4c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e4c, EC_KEY_precompute_mult(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_private_key 3e52 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e52, ENGINE_load_private_key(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_public_key 3e58 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e58, ENGINE_load_public_key(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_ctrl_cmd 3e5e 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e5e, ENGINE_ctrl_cmd(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default 3e64 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e64, ENGINE_set_default(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_ctrl 3e6a a910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e6a, ENGINE_ctrl(a0,d0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_complete 3e70 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e70, ENGINE_register_all_complete())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_ctrl_cmd_string 3e76 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e76, ENGINE_ctrl_cmd_string(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_add0_policy 3e7c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e7c, X509_VERIFY_PARAM_add0_policy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set_purpose 3e82 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e82, X509_VERIFY_PARAM_set_purpose(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set_flags 3e88 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e88, X509_VERIFY_PARAM_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_new 3e8e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e8e, X509_VERIFY_PARAM_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_POLICY_NODE_print 3e94 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e94, X509_POLICY_NODE_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get0_policy_tree 3e9a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3e9a, X509_STORE_CTX_get0_policy_tree(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_explicit_policy 3ea0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ea0, X509_STORE_CTX_get_explicit_policy(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_tree_get0_policies 3ea6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ea6, X509_policy_tree_get0_policies(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_tree_get0_user_policies 3eac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3eac, X509_policy_tree_get0_user_policies(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_callback_arg 3eb2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3eb2, BIO_get_callback_arg(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_add1_attr_by_NID 3eb8 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3eb8, EVP_PKEY_add1_attr_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_RSA 3ebe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ebe, ENGINE_get_RSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_DSA 3ec4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ec4, ENGINE_get_DSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_DH 3eca 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3eca, ENGINE_get_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_RAND 3ed0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ed0, ENGINE_get_RAND(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_ciphers 3ed6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ed6, ENGINE_get_ciphers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_digests 3edc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3edc, ENGINE_get_digests(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_init 3ee2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ee2, ENGINE_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_finish 3ee8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ee8, ENGINE_finish(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_sendreq_new 3eee ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3eee, OCSP_sendreq_new(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_sendreq_nbio 3ef4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ef4, OCSP_sendreq_nbio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_free 3efa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3efa, OCSP_REQ_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_psk_identity_hint 3f00 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f00, SSL_CTX_use_psk_identity_hint(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_psk_client_callback 3f06 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f06, SSL_CTX_set_psk_client_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_psk_identity_hint 3f0c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f0c, SSL_get_psk_identity_hint(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_psk_server_callback 3f12 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f12, SSL_set_psk_server_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_psk_identity_hint 3f18 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f18, SSL_use_psk_identity_hint(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_psk_client_callback 3f1e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f1e, SSL_set_psk_client_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_psk_server_callback 3f24 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f24, SSL_CTX_set_psk_server_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_psk_identity 3f2a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f2a, SSL_get_psk_identity(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_session_ticket_ext 3f30 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f30, SSL_set_session_ticket_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_session_secret_cb 3f36 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f36, SSL_set_session_secret_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_session_ticket_ext_cb 3f3c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f3c, SSL_set_session_ticket_ext_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set1_param 3f42 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f42, SSL_set1_param(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set1_param 3f48 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f48, SSL_CTX_set1_param(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_renegotiate_abbreviated 3f4e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f4e, SSL_renegotiate_abbreviated(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_1_method 3f54 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f54, TLSv1_1_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_1_client_method 3f5a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f5a, TLSv1_1_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_1_server_method 3f60 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f60, TLSv1_1_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_client_pwd_callback 3f66 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f66, SSL_CTX_set_srp_client_pwd_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_srp_g 3f6c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f6c, SSL_get_srp_g(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_username_callback 3f72 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f72, SSL_CTX_set_srp_username_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_srp_userinfo 3f78 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f78, SSL_get_srp_userinfo(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_srp_server_param 3f7e 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f7e, SSL_set_srp_server_param(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_srp_server_param_pw 3f84 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f84, SSL_set_srp_server_param_pw(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_srp_N 3f8a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f8a, SSL_get_srp_N(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_srp_username 3f90 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f90, SSL_get_srp_username(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_password 3f96 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f96, SSL_CTX_set_srp_password(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_strength 3f9c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3f9c, SSL_CTX_set_srp_strength(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_verify_param_callback 3fa2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fa2, SSL_CTX_set_srp_verify_param_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_cb_arg 3fa8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fa8, SSL_CTX_set_srp_cb_arg(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_srp_username 3fae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fae, SSL_CTX_set_srp_username(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_SRP_CTX_init 3fb4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fb4, SSL_CTX_SRP_CTX_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_A_param 3fba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fba, SRP_Calc_A_param(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_SRP_CTX_free 3fc6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fc6, SSL_CTX_SRP_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_srp_server_param_with_username 3fd2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fd2, SSL_srp_server_param_with_username(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SRP_CTX_free 3fd8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fd8, SSL_SRP_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_debug 3fde 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fde, SSL_set_debug(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get0_peer 3fe4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fe4, SSL_SESSION_get0_peer(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_2_client_method 3fea 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3fea, TLSv1_2_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_set1_id_context 3ff0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ff0, SSL_SESSION_set1_id_context(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_2_server_method 3ff6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x3ff6, TLSv1_2_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_id 4008 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4008, SSL_CIPHER_get_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLSv1_2_method 400e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x400e, TLSv1_2_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_export_keying_material 4014 32b1a09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4014, SSL_export_keying_material(a0,a1,d0,a2,d1,a3,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_tlsext_use_srtp 401a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x401a, SSL_set_tlsext_use_srtp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_next_protos_advertised_cb 4020 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4020, SSL_CTX_set_next_protos_advertised_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get0_next_proto_negotiated 4026 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4026, SSL_get0_next_proto_negotiated(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_selected_srtp_profile 402c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x402c, SSL_get_selected_srtp_profile(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_tlsext_use_srtp 4032 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4032, SSL_CTX_set_tlsext_use_srtp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_select_next_proto 4038 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4038, SSL_select_next_proto(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_srtp_profiles 403e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x403e, SSL_get_srtp_profiles(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_next_proto_select_cb 4044 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4044, SSL_CTX_set_next_proto_select_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_compress_id 404a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x404a, SSL_SESSION_get_compress_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SRP_CTX_init 405c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x405c, SSL_SRP_CTX_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_ENGINE_strings 41ac 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41ac, ERR_load_ENGINE_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_DSA 41b2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41b2, ENGINE_set_DSA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_finish_function 41b8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41b8, ENGINE_get_finish_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_default_RSA 41be 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41be, ENGINE_get_default_RSA())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_DH 41c4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41c4, ENGINE_set_DH(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_init_function 41ca 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41ca, ENGINE_get_init_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_init_function 41d0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41d0, ENGINE_set_init_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_DSA 41d6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41d6, ENGINE_set_default_DSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_last 41dc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41dc, ENGINE_get_last())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_prev 41e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41e2, ENGINE_get_prev(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_default_DH 41e8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41e8, ENGINE_get_default_DH())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_finish_function 41ee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41ee, ENGINE_set_finish_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_RSA 41f4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41f4, ENGINE_set_RSA(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_RAND 41fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x41fa, ENGINE_set_default_RAND(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_default_DSA 4200 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4200, ENGINE_get_default_DSA())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_RSA 4206 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4206, ENGINE_set_default_RSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_default_RAND 420c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x420c, ENGINE_get_default_RAND())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_RAND 4212 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4212, ENGINE_set_RAND(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_DH 4218 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4218, ENGINE_set_default_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_ctrl_function 421e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x421e, ENGINE_get_ctrl_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_ctrl_function 4224 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4224, ENGINE_set_ctrl_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_ciphers 422a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x422a, ENGINE_unregister_ciphers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_RSA 4230 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4230, ENGINE_unregister_RSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_RAND 4236 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4236, ENGINE_register_all_RAND())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_digest_engine 4242 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4242, ENGINE_get_digest_engine(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_DH 4248 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4248, ENGINE_register_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_RAND 424e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x424e, ENGINE_register_RAND(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_ciphers 425a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x425a, ENGINE_register_ciphers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_cmd_defns 426c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x426c, ENGINE_get_cmd_defns(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_load_privkey_function 4272 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4272, ENGINE_set_load_privkey_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_digests 4278 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4278, ENGINE_set_default_digests(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_RSA 427e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x427e, ENGINE_register_RSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_DSA 4284 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4284, ENGINE_unregister_DSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_ciphers 428a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x428a, ENGINE_set_ciphers(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_set_rand_engine 4290 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4290, RAND_set_rand_engine(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_digest 4296 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4296, ENGINE_get_digest(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_cipher 429c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x429c, ENGINE_get_cipher(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_cmd_is_executable 42a2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42a2, ENGINE_cmd_is_executable(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_DSA 42a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42a8, ENGINE_register_DSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_load_pubkey_function 42ae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42ae, ENGINE_set_load_pubkey_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_load_pubkey_function 42b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42b4, ENGINE_get_load_pubkey_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_RSA 42ba 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42ba, ENGINE_register_all_RSA())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_digests 42c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42c0, ENGINE_unregister_digests(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_ex_data 42cc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42cc, ENGINE_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_cmd_defns 42d8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42d8, ENGINE_set_cmd_defns(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_digests 42de 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42de, ENGINE_register_digests(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_DH 42e4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42e4, ENGINE_register_all_DH())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_flags 42ea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42ea, ENGINE_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_DH 42f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42f0, ENGINE_unregister_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_DSA 42f6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42f6, ENGINE_register_all_DSA())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_digests 42fc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x42fc, ENGINE_set_digests(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_complete 4302 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4302, ENGINE_register_complete(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_ex_data 4308 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4308, ENGINE_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_destroy_function 430e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x430e, ENGINE_set_destroy_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_cipher_engine 4314 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4314, ENGINE_get_cipher_engine(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_ciphers 4326 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4326, ENGINE_set_default_ciphers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_RAND 432c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x432c, ENGINE_unregister_RAND(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_table_flags 4338 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4338, ENGINE_set_table_flags(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_destroy_function 4344 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4344, ENGINE_get_destroy_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_table_flags 4356 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4356, ENGINE_get_table_flags())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_flags 435c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x435c, ENGINE_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_load_privkey_function 4362 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4362, ENGINE_get_load_privkey_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_string 4368 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4368, ENGINE_set_default_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_add_conf_module 436e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x436e, ENGINE_add_conf_module())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_up_ref 4386 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4386, ENGINE_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_get_thread_id 4398 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4398, BN_BLINDING_get_thread_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_trinomial_basis 439e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x439e, EC_GROUP_get_trinomial_basis(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA512_Update 43b0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43b0, SHA512_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ECPrivateKey 43b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43b6, i2d_ECPrivateKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_exp_arr 43bc 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43bc, BN_GF2m_mod_exp_arr(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_mul_arr 43c2 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43c2, BN_GF2m_mod_mul_arr(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase o2i_ECPublicKey 43c8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43c8, o2i_ECPublicKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_copy 43ce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43ce, EC_KEY_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_check_discriminant 43da 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43da, EC_GROUP_check_discriminant(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2o_ECPublicKey 43e0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43e0, i2o_ECPublicKey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_new_curve_GF2m 43e6 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43e6, EC_GROUP_new_curve_GF2m(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get1_EC_KEY 43f2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43f2, EVP_PKEY_get1_EC_KEY(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get_conv_form 43fe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x43fe, EC_KEY_get_conv_form(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_static_state 4404 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4404, ENGINE_get_static_state())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_SIG_new 440a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x440a, ECDSA_SIG_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_bn2point 4410 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4410, EC_POINT_bn2point(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_sign_ex 441c 32ba918008
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x441c, ECDSA_sign_ex(d0,a0,d1,a1,a2,a3,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_pentanomial_basis 4422 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4422, EC_GROUP_get_pentanomial_basis(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_sign_setup 4428 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4428, ECDSA_sign_setup(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_solve_quad_arr 442e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x442e, BN_GF2m_mod_solve_quad_arr(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_up_ref 4434 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4434, EC_KEY_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_EC_PUBKEY 443a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x443a, d2i_EC_PUBKEY(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_have_precompute_mult 4440 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4440, EC_GROUP_have_precompute_mult(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_arr 444c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x444c, BN_GF2m_mod_arr(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_dup 4464 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4464, EC_POINT_dup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_set1_EC_KEY 446a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x446a, EVP_PKEY_set1_EC_KEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_sqrt_arr 4470 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4470, BN_GF2m_mod_sqrt_arr(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_private_key 447c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x447c, EC_KEY_set_private_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_poly2arr 4482 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4482, BN_GF2m_poly2arr(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ECParameters 4488 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4488, i2d_ECParameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA256_Init 4494 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4494, SHA256_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA224 44a0 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44a0, SHA224(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_seed_len 44ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44ac, EC_GROUP_get_seed_len(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_EC_PUBKEY 44b2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44b2, i2d_EC_PUBKEY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GFp_nist_method 44be 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44be, EC_GFp_nist_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_padlock 44c4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44c4, ENGINE_load_padlock())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_set_curve_name 44ca 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44ca, EC_GROUP_set_curve_name(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_sqr_arr 44d0 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44d0, BN_GF2m_mod_sqr_arr(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_datagram 44d6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44d6, BIO_s_datagram())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA384_Update 44e8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44e8, SHA384_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA224_Final 44f4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44f4, SHA224_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA224_Update 44fa 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x44fa, SHA224_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ECPrivateKey 4500 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4500, d2i_ECPrivateKey(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA512_Final 450c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x450c, SHA512_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_asn1_flag 4512 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4512, EC_GROUP_get_asn1_flag(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get0_seed 451e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x451e, EC_GROUP_get0_seed(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_div_arr 4524 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4524, BN_GF2m_mod_div_arr(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get_enc_flags 454e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x454e, EC_KEY_get_enc_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_set_compressed_coordinates_GF2m 455a b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x455a, EC_POINT_set_compressed_coordinates_GF2m(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_cmp 4560 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4560, EC_GROUP_cmp(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA224_Init 4566 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4566, SHA224_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA512_Init 4572 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4572, SHA512_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_basis_type 457e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x457e, EC_GROUP_get_basis_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_dup 459c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x459c, EC_GROUP_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA256_Transform 45a8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45a8, SHA256_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_enc_flags 45ae 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45ae, EC_KEY_set_enc_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_point2hex 45b4 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45b4, EC_POINT_point2hex(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_do_sign_ex 45c0 ba90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45c0, ECDSA_do_sign_ex(a0,d0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA512_Transform 45cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45cc, SHA512_Transform(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_public_key 45d8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45d8, EC_KEY_set_public_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_curve_name 45f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45f0, EC_GROUP_get_curve_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA256_Final 45fc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x45fc, SHA256_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ECParameters 461a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x461a, d2i_ECParameters(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA384_Init 4620 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4620, SHA384_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA384_Final 462c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x462c, SHA384_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA384 4638 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4638, SHA384(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_hex2point 464a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x464a, EC_POINT_hex2point(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SHA256_Update 4650 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4650, SHA256_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GF2m_mod_inv_arr 4656 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4656, BN_GF2m_mod_inv_arr(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_set_thread_id 4662 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4662, BN_BLINDING_set_thread_id(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_check_pub_key 4668 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4668, DH_check_pub_key(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_cbc_encrypt 466e 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x466e, Camellia_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_cfb128_encrypt 4674 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4674, Camellia_cfb128_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_cfb1_encrypt 467a 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x467a, Camellia_cfb1_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_cfb8_encrypt 4680 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4680, Camellia_cfb8_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_ctr128_encrypt 4686 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4686, Camellia_ctr128_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_decrypt 468c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x468c, Camellia_decrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_ecb_encrypt 4692 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4692, Camellia_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_encrypt 4698 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4698, Camellia_encrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_ofb128_encrypt 469e 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x469e, Camellia_ofb128_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase Camellia_set_key 46a4 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46a4, Camellia_set_key(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_cbc 46aa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46aa, EVP_camellia_128_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_cfb128 46b0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46b0, EVP_camellia_128_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_cfb1 46b6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46b6, EVP_camellia_128_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_cfb8 46bc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46bc, EVP_camellia_128_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_ecb 46c2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46c2, EVP_camellia_128_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_ofb 46c8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46c8, EVP_camellia_128_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_cbc 46ce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46ce, EVP_camellia_192_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_cfb128 46d4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46d4, EVP_camellia_192_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_cfb1 46da 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46da, EVP_camellia_192_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_cfb8 46e0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46e0, EVP_camellia_192_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_ecb 46e6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46e6, EVP_camellia_192_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_ofb 46ec 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46ec, EVP_camellia_192_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_cbc 46f2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46f2, EVP_camellia_256_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_cfb128 46f8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46f8, EVP_camellia_256_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_cfb1 46fe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x46fe, EVP_camellia_256_cfb1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_cfb8 4704 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4704, EVP_camellia_256_cfb8())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_ecb 470a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x470a, EVP_camellia_256_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_ofb 4710 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4710, EVP_camellia_256_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_bi_ige_encrypt 4716 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4716, AES_bi_ige_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_decrypt 471c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x471c, SEED_decrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_encrypt 4722 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4722, SEED_encrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_cbc_encrypt 4728 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4728, SEED_cbc_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_seed_ofb 472e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x472e, EVP_seed_ofb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_cfb128_encrypt 4734 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4734, SEED_cfb128_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_ofb128_encrypt 473a 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x473a, SEED_ofb128_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_seed_cbc 4740 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4740, EVP_seed_cbc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_ecb_encrypt 4746 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4746, SEED_ecb_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_seed_ecb 474c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x474c, EVP_seed_ecb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SEED_set_key 4752 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4752, SEED_set_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_seed_cfb128 4758 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4758, EVP_seed_cfb128())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_unwrap_key 475e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x475e, AES_unwrap_key(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase AES_wrap_key 4764 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4764, AES_wrap_key(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ReceiptRequest_free 476a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x476a, CMS_ReceiptRequest_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add0_CertificateChoices 4776 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4776, CMS_add0_CertificateChoices(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_add1_attr_by_OBJ 477c 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x477c, CMS_unsigned_add1_attr_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_CMS_strings 4782 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4782, ERR_load_CMS_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_sign_receipt 4788 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4788, CMS_sign_receipt(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_CMS_ContentInfo 478e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x478e, i2d_CMS_ContentInfo(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_delete_attr 4794 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4794, CMS_signed_delete_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_CMS_bio 479a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x479a, d2i_CMS_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_get_attr_by_NID 47a0 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47a0, CMS_unsigned_get_attr_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_verify 47a6 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47a6, CMS_verify(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_read_CMS 47ac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47ac, SMIME_read_CMS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_decrypt_set1_key 47b2 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47b2, CMS_decrypt_set1_key(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_get0_algs 47b8 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47b8, CMS_SignerInfo_get0_algs(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add1_cert 47be 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47be, CMS_add1_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_set_detached 47c4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47c4, CMS_set_detached(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_encrypt 47ca 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47ca, CMS_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_EnvelopedData_create 47d0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47d0, CMS_EnvelopedData_create(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_uncompress 47d6 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47d6, CMS_uncompress(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add0_crl 47dc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47dc, CMS_add0_crl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_verify_content 47e2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47e2, CMS_SignerInfo_verify_content(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_get0_data_by_OBJ 47e8 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47e8, CMS_unsigned_get0_data_by_OBJ(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_CMS 47ee 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47ee, PEM_write_bio_CMS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_get_attr 47f4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47f4, CMS_unsigned_get_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_ktri_cert_cmp 47fa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x47fa, CMS_RecipientInfo_ktri_cert_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_ktri_get0_algs 4800 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4800, CMS_RecipientInfo_ktri_get0_algs(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ContentInfo_free 4806 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4806, CMS_ContentInfo_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_final 480c 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x480c, CMS_final(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add_simple_smimecap 4812 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4812, CMS_add_simple_smimecap(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_verify 4818 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4818, CMS_SignerInfo_verify(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_data 481e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x481e, CMS_data(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_CMS_ReceiptRequest 4824 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4824, d2i_CMS_ReceiptRequest(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_compress 482a 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x482a, CMS_compress(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_digest_create 4830 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4830, CMS_digest_create(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_cert_cmp 4836 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4836, CMS_SignerInfo_cert_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_sign 483c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x483c, CMS_SignerInfo_sign(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_data_create 4842 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4842, CMS_data_create(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_CMS_bio 4848 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4848, i2d_CMS_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_EncryptedData_set1_key 484e 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x484e, CMS_EncryptedData_set1_key(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_decrypt 4854 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4854, CMS_decrypt(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_delete_attr 485a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x485a, CMS_unsigned_delete_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_get_attr_count 4860 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4860, CMS_unsigned_get_attr_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add_smimecap 4866 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4866, CMS_add_smimecap(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_get_attr_by_OBJ 4872 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4872, CMS_signed_get_attr_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_CMS_ContentInfo 4878 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4878, d2i_CMS_ContentInfo(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add_standard_smimecap 487e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x487e, CMS_add_standard_smimecap(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ContentInfo_new 4884 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4884, CMS_ContentInfo_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_type 488a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x488a, CMS_RecipientInfo_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get0_type 4890 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4890, CMS_get0_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_is_detached 4896 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4896, CMS_is_detached(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_sign 489c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x489c, CMS_sign(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_add1_attr 48a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48a2, CMS_signed_add1_attr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_get_attr_by_OBJ 48a8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48a8, CMS_unsigned_get_attr_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_write_CMS 48ae 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48ae, SMIME_write_CMS(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_EncryptedData_decrypt 48b4 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48b4, CMS_EncryptedData_decrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get0_RecipientInfos 48ba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48ba, CMS_get0_RecipientInfos(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add0_RevocationInfoChoice 48c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48c0, CMS_add0_RevocationInfoChoice(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_decrypt_set1_pkey 48c6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48c6, CMS_decrypt_set1_pkey(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_set1_signer_cert 48cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48cc, CMS_SignerInfo_set1_signer_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get0_signers 48d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48d2, CMS_get0_signers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ReceiptRequest_get0_values 48d8 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48d8, CMS_ReceiptRequest_get0_values(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_get0_data_by_OBJ 48de 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48de, CMS_signed_get0_data_by_OBJ(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get0_SignerInfos 48e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48e4, CMS_get0_SignerInfos(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add0_cert 48ea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48ea, CMS_add0_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_EncryptedData_encrypt 48f0 10a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48f0, CMS_EncryptedData_encrypt(a0,a1,a2,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_digest_verify 48f6 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48f6, CMS_digest_verify(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_set1_signers_certs 48fc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x48fc, CMS_set1_signers_certs(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_get_attr 4902 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4902, CMS_signed_get_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_set0_key 4908 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4908, CMS_RecipientInfo_set0_key(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignedData_init 490e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x490e, CMS_SignedData_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kekri_get0_id 4914 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4914, CMS_RecipientInfo_kekri_get0_id(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_verify_receipt 491a 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x491a, CMS_verify_receipt(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_CMS 4920 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4920, PEM_read_bio_CMS(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get1_crls 4926 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4926, CMS_get1_crls(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add0_recipient_key 492c 43b2a190809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x492c, CMS_add0_recipient_key(a0,d0,a1,d1,a2,d2,a3,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ReceiptRequest_new 4932 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4932, CMS_ReceiptRequest_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get0_content 4938 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4938, CMS_get0_content(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get1_ReceiptRequest 493e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x493e, CMS_get1_ReceiptRequest(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_add1_attr_by_OBJ 4944 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4944, CMS_signed_add1_attr_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kekri_id_cmp 494a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x494a, CMS_RecipientInfo_kekri_id_cmp(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add1_ReceiptRequest 4950 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4950, CMS_add1_ReceiptRequest(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_get0_signer_id 4956 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4956, CMS_SignerInfo_get0_signer_id(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_add1_attr_by_NID 495c 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x495c, CMS_unsigned_add1_attr_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_add1_attr 4962 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4962, CMS_unsigned_add1_attr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_get_attr_by_NID 4968 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4968, CMS_signed_get_attr_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get1_certs 496e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x496e, CMS_get1_certs(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_add1_attr_by_NID 4974 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4974, CMS_signed_add1_attr_by_NID(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_unsigned_add1_attr_by_txt 497a 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x497a, CMS_unsigned_add1_attr_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_dataFinal 4980 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4980, CMS_dataFinal(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_ktri_get0_signer_id 4986 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4986, CMS_RecipientInfo_ktri_get0_signer_id(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_CMS_ReceiptRequest 498c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x498c, i2d_CMS_ReceiptRequest(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add1_recipient_cert 4992 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4992, CMS_add1_recipient_cert(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_dataInit 4998 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4998, CMS_dataInit(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_add1_attr_by_txt 499e 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x499e, CMS_signed_add1_attr_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_decrypt 49a4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49a4, CMS_RecipientInfo_decrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_signed_get_attr_count 49aa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49aa, CMS_signed_get_attr_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_get0_eContentType 49b0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49b0, CMS_get0_eContentType(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_set1_eContentType 49b6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49b6, CMS_set1_eContentType(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ReceiptRequest_create0 49bc a910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49bc, CMS_ReceiptRequest_create0(a0,d0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add1_signer 49c2 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49c2, CMS_add1_signer(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_set0_pkey 49c8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49c8, CMS_RecipientInfo_set0_pkey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_load_ssl_client_cert_function 49ce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49ce, ENGINE_set_load_ssl_client_cert_function(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_ssl_client_cert_function 49d4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49d4, ENGINE_get_ssl_client_cert_function(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_ssl_client_cert 49da 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49da, ENGINE_load_ssl_client_cert(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_load_capi 49e0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49e0, ENGINE_load_capi())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_pkey_meths 49e6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49e6, ENGINE_register_pkey_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_asn1_meth_engine 49ec 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49ec, ENGINE_get_pkey_asn1_meth_engine(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase WHIRLPOOL_Init 49f2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49f2, WHIRLPOOL_Init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase WHIRLPOOL 49f8 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49f8, WHIRLPOOL(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_asn1_meth 49fe 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x49fe, ENGINE_get_pkey_asn1_meth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_meth 4a04 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a04, ENGINE_get_pkey_meth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_CMS 4a0a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a0a, BIO_new_CMS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_pkey_asn1_meths 4a10 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a10, ENGINE_set_default_pkey_asn1_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase WHIRLPOOL_BitUpdate 4a16 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a16, WHIRLPOOL_BitUpdate(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_CMS_bio_stream 4a1c 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a1c, i2d_CMS_bio_stream(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_stream 4a22 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a22, CMS_stream(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_pkey_asn1_find_str 4a28 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a28, ENGINE_pkey_asn1_find_str(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_meths 4a2e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a2e, ENGINE_get_pkey_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_pkey_asn1_meths 4a34 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a34, ENGINE_register_pkey_asn1_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_pkey_meths 4a3a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a3a, ENGINE_set_default_pkey_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_CTX_copy 4a40 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a40, HMAC_CTX_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_asn1_meths 4a46 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a46, ENGINE_get_pkey_asn1_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_whirlpool 4a4c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a4c, EVP_whirlpool())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_pkey_meths 4a52 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a52, ENGINE_register_all_pkey_meths())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase WHIRLPOOL_Final 4a58 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a58, WHIRLPOOL_Final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_asn1_meth_str 4a5e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a5e, ENGINE_get_pkey_asn1_meth_str(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_pkey_asn1_meths 4a64 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a64, ENGINE_register_all_pkey_asn1_meths())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ContentInfo_print_ctx 4a6a a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a6a, CMS_ContentInfo_print_ctx(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add1_crl 4a70 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a70, CMS_add1_crl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_pkey_asn1_meths 4a76 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a76, ENGINE_set_pkey_asn1_meths(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_pkey_meth_engine 4a7c 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a7c, ENGINE_get_pkey_meth_engine(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase WHIRLPOOL_Update 4a82 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a82, WHIRLPOOL_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_CMS_stream 4a88 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a88, PEM_write_bio_CMS_stream(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_pkey_meths 4a8e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a8e, ENGINE_unregister_pkey_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_pkey_asn1_meths 4a94 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a94, ENGINE_unregister_pkey_asn1_meths(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_pkey_meths 4a9a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4a9a, ENGINE_set_pkey_meths(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSAparams_dup 4aa0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4aa0, DSAparams_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DHparams_dup 4aa6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4aa6, DHparams_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_issuer_name_hash_old 4aac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4aac, X509_issuer_name_hash_old(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_subject_name_hash_old 4ab2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ab2, X509_subject_name_hash_old(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_VBASE_get_by_user 4ab8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ab8, SRP_VBASE_get_by_user(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_server_key 4abe 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4abe, SRP_Calc_server_key(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_create_verifier 4ac4 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ac4, SRP_create_verifier(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_create_verifier_BN 4aca 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4aca, SRP_create_verifier_BN(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_u 4ad0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ad0, SRP_Calc_u(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_VBASE_free 4ad6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ad6, SRP_VBASE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_client_key 4adc 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4adc, SRP_Calc_client_key(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_get_default_gN 4ae2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ae2, SRP_get_default_gN(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_x 4ae8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ae8, SRP_Calc_x(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_B 4aee ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4aee, SRP_Calc_B(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_VBASE_new 4af4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4af4, SRP_VBASE_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_check_known_gN_param 4afa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4afa, SRP_check_known_gN_param(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Calc_A 4b00 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b00, SRP_Calc_A(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Verify_A_mod_N 4b06 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b06, SRP_Verify_A_mod_N(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_VBASE_init 4b0c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b0c, SRP_VBASE_init(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SRP_Verify_B_mod_N 4b12 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b12, SRP_Verify_B_mod_N(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_public_key_affine_coordinates 4b18 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b18, EC_KEY_set_public_key_affine_coordinates(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_ctr 4b1e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b1e, EVP_aes_192_ctr())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_ctr 4b24 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b24, EVP_aes_128_ctr())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_ctr 4b2a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b2a, EVP_aes_256_ctr())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get_flags 4b30 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b30, EC_KEY_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_xts 4b36 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b36, EVP_aes_128_xts())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_xts 4b42 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b42, EVP_aes_256_xts())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_gcm 4b48 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b48, EVP_aes_128_gcm())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_clear_flags 4b4e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b4e, EC_KEY_clear_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_flags 4b54 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b54, EC_KEY_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_ccm 4b5a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b5a, EVP_aes_256_ccm())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_ccm 4b66 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b66, EVP_aes_128_ccm())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_gcm 4b6c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b6c, EVP_aes_192_gcm())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_gcm 4b72 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b72, EVP_aes_256_gcm())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_ccm 4b78 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b78, EVP_aes_192_ccm())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_rc4_hmac_md5 4b7e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b7e, EVP_rc4_hmac_md5())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_cbc_hmac_sha1 4b84 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b84, EVP_aes_128_cbc_hmac_sha1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_cbc_hmac_sha1 4b96 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b96, EVP_aes_256_cbc_hmac_sha1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_add0_recipient_password 4b9c a39210807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4b9c, CMS_add0_recipient_password(a0,d0,d1,d2,a1,d3,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_decrypt_set1_password 4ba2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ba2, CMS_decrypt_set1_password(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_set0_password 4ba8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ba8, CMS_RecipientInfo_set0_password(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_sign_ctx 4bae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bae, X509_REQ_sign_ctx(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_sign_ctx 4bb4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bb4, X509_CRL_sign_ctx(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_signature_dump 4bba 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bba, X509_signature_dump(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_sign_ctx 4bc0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bc0, X509_sign_ctx(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_sign_ctx 4bc6 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bc6, ASN1_item_sign_ctx(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_cpuid_setup 4bcc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bcc, OPENSSL_cpuid_setup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_remove_thread_state 4bd2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bd2, ERR_remove_thread_state(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set0_crls 4bd8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bd8, X509_STORE_CTX_set0_crls(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_id 4bde 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bde, SSL_SESSION_get_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sess_set_new_cb 4be4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4be4, SSL_CTX_sess_set_new_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sess_get_get_cb 4bea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bea, SSL_CTX_sess_get_get_cb(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sess_set_get_cb 4bf0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bf0, SSL_CTX_sess_set_get_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_info_callback 4bf6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bf6, SSL_CTX_get_info_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_client_cert_cb 4bfc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4bfc, SSL_CTX_set_client_cert_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sess_set_remove_cb 4c02 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4c02, SSL_CTX_sess_set_remove_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sess_get_new_cb 4c08 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4c08, SSL_CTX_sess_get_new_cb(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_client_cert_cb 4c0e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4c0e, SSL_CTX_get_client_cert_cb(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_sess_get_remove_cb 4c14 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4c14, SSL_CTX_sess_get_remove_cb(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_SSL_SESSION 4c1a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4c1a, PEM_write_bio_SSL_SESSION(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_SSL_SESSION 4c26 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4c26, PEM_read_bio_SSL_SESSION(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase FIPS_mode_set 4d10 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d10, FIPS_mode_set(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_X931_generate_Xpq 4d16 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d16, BN_X931_generate_Xpq(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get0_nist_prime_384 4d1c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d1c, BN_get0_nist_prime_384())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_set_mark 4d22 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d22, ERR_set_mark())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_invert_ex 4d28 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d28, BN_BLINDING_invert_ex(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NAME_CONSTRAINTS_free 4d2e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d2e, NAME_CONSTRAINTS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set0_param 4d34 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d34, X509_STORE_CTX_set0_param(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_CONSTRAINTS_free 4d3a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d3a, POLICY_CONSTRAINTS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nist_mod_192 4d40 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d40, BN_nist_mod_192(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_SUBTREE_free 4d46 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d46, GENERAL_SUBTREE_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_safe 4d4c a109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d4c, PKCS12_add_safe(a0,a1,d0,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get0_nist_prime_192 4d52 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d52, BN_get0_nist_prime_192())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_keyid_get0 4d58 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d58, X509_keyid_get0(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_node_get0_parent 4d64 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d64, X509_policy_node_get0_parent(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_IPADDRESS 4d6a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d6a, a2i_IPADDRESS(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_depth 4d70 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d70, X509_STORE_CTX_set_depth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_inherit 4d76 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d76, X509_VERIFY_PARAM_inherit(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set_depth 4d82 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d82, X509_VERIFY_PARAM_set_depth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_add1_attr_by_txt 4d88 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d88, EVP_PKEY_add1_attr_by_txt(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_set_flags 4d8e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d8e, BN_BLINDING_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1_policies 4d94 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d94, X509_VERIFY_PARAM_set1_policies(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1_name 4d9a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4d9a, X509_VERIFY_PARAM_set1_name(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_MAPPING_free 4da0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4da0, POLICY_MAPPING_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_cmp 4db2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4db2, EVP_PKEY_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_level_node_count 4db8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4db8, X509_policy_level_node_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get_attr 4dbe 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4dbe, EVP_PKEY_get_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_SUBTREE_new 4dc4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4dc4, GENERAL_SUBTREE_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_node_get0_qualifiers 4dca 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4dca, X509_policy_node_get0_qualifiers(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_node_get0_policy 4ddc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ddc, X509_policy_node_get0_policy(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_safes 4de2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4de2, PKCS12_add_safes(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_convert_ex 4de8 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4de8, BN_BLINDING_convert_ex(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_tree_free 4dee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4dee, X509_policy_tree_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_ia32cap_loc 4df4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4df4, OPENSSL_ia32cap_loc())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get0_nist_prime_224 4dfa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4dfa, BN_get0_nist_prime_224())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GENCB_call 4e00 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e00, BN_GENCB_call(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NAME_CONSTRAINTS_new 4e06 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e06, NAME_CONSTRAINTS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECParameters_print 4e0c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e0c, ECParameters_print(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set_trust 4e18 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e18, X509_VERIFY_PARAM_set_trust(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get_attr_count 4e1e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e1e, EVP_PKEY_get_attr_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get0_param 4e24 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e24, X509_STORE_CTX_get0_param(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_depth 4e30 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e30, X509_STORE_set_depth(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_put_eoc 4e3c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e3c, ASN1_put_eoc(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_table_cleanup 4e42 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e42, X509_VERIFY_PARAM_table_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_setup_blinding 4e48 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e48, RSA_setup_blinding(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_find_ex 4e4e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e4e, sk_find_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_CONSTRAINTS_new 4e54 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e54, POLICY_CONSTRAINTS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_get_depth 4e5a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e5a, X509_VERIFY_PARAM_get_depth(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_ndef_i2d 4e60 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e60, ASN1_item_ndef_i2d(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_pop_to_mark 4e66 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e66, ERR_pop_to_mark())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_level_get0_node 4e6c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e6c, X509_policy_level_get0_node(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_NDEF 4e72 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e72, i2d_PKCS7_NDEF(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_generate_v3 4e78 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e78, ASN1_generate_v3(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_tree_level_count 4e7e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e7e, X509_policy_tree_level_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nist_mod_224 4e8a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e8a, BN_nist_mod_224(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_dgram_non_fatal_error 4e90 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e90, BIO_dgram_non_fatal_error(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v2i_ASN1_BIT_STRING 4e96 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e96, v2i_ASN1_BIT_STRING(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set_default 4e9c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4e9c, X509_STORE_CTX_set_default(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1 4ea2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ea2, X509_VERIFY_PARAM_set1(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v2i_GENERAL_NAME_ex 4ea8 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ea8, v2i_GENERAL_NAME_ex(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nist_mod_521 4eae ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4eae, BN_nist_mod_521(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_tree_get0_level 4eb4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4eb4, X509_policy_tree_get0_level(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_const_check_infinite_end 4eba 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4eba, ASN1_const_check_infinite_end(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_delete_attr 4ec0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ec0, EVP_PKEY_delete_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get0_nist_prime_256 4ec6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ec6, BN_get0_nist_prime_256())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2v_ASN1_BIT_STRING 4ecc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ecc, i2v_ASN1_BIT_STRING(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nist_mod_384 4ed2 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ed2, BN_nist_mod_384(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get_attr_by_OBJ 4ee4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ee4, EVP_PKEY_get_attr_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_lookup 4eea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4eea, X509_VERIFY_PARAM_lookup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509V3_NAME_from_section 4ef6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ef6, X509V3_NAME_from_section(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_add1_attr 4efc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4efc, EVP_PKEY_add1_attr(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_dump_indent_cb 4f08 10a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f08, BIO_dump_indent_cb(a0,a1,a2,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nist_mod_256 4f1a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f1a, BN_nist_mod_256(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_add0_table 4f20 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f20, X509_VERIFY_PARAM_add0_table(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_create_param 4f2c 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f2c, BN_BLINDING_create_param(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get0_nist_prime_521 4f32 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f32, BN_get0_nist_prime_521())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_prime_fasttest_ex 4f38 a190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f38, BN_is_prime_fasttest_ex(a0,d0,a1,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_policy_check 4f3e 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f3e, X509_policy_check(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get_attr_by_NID 4f44 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f44, EVP_PKEY_get_attr_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_get_flags 4f4a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f4a, BN_BLINDING_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_cert 4f50 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f50, PKCS12_add_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_rand_key 4f56 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f56, EVP_CIPHER_CTX_rand_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_IPADDRESS_NC 4f5c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f5c, a2i_IPADDRESS_NC(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set_digest 4f62 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f62, PKCS7_set_digest(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_MAPPING_new 4f68 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f68, POLICY_MAPPING_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_set0_type_other 4f6e 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f6e, PKCS7_set0_type_other(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_add1_attr_by_OBJ 4f80 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f80, EVP_PKEY_add1_attr_by_OBJ(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set_time 4f86 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f86, X509_VERIFY_PARAM_set_time(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_add_key 4f92 a2109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f92, PKCS12_add_key(a0,a1,d0,d1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_merge 4f98 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f98, DSO_merge(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_dump_cb 4f9e ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4f9e, BIO_dump_cb(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc3526_prime_8192 4fb0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fb0, get_rfc3526_prime_8192(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_clear_flags 4fb6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fb6, X509_VERIFY_PARAM_clear_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc2409_prime_1024 4fbc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fbc, get_rfc2409_prime_1024(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc3526_prime_2048 4fc2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fc2, get_rfc3526_prime_2048(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc3526_prime_6144 4fc8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fc8, get_rfc3526_prime_6144(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc3526_prime_1536 4fce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fce, get_rfc3526_prime_1536(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc3526_prime_3072 4fd4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fd4, get_rfc3526_prime_3072(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc3526_prime_4096 4fda 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fda, get_rfc3526_prime_4096(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase get_rfc2409_prime_768 4fe0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fe0, get_rfc2409_prime_768(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_get_flags 4fe6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fe6, X509_VERIFY_PARAM_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_new 4fec 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4fec, EVP_CIPHER_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_free 4ff2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ff2, EVP_CIPHER_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_ipadd 4ff8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ff8, a2i_ipadd(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_block_size 4ffe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x4ffe, EVP_CIPHER_block_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_set_app_data 5004 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5004, EVP_CIPHER_CTX_set_app_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_method_type 500a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x500a, BIO_method_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_nid 5010 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5010, EVP_CIPHER_CTX_nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_key_length 5016 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5016, EVP_CIPHER_CTX_key_length(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_size 501c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x501c, EVP_MD_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_test_flags 5022 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5022, EVP_MD_CTX_test_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_clear_flags 5028 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5028, BIO_clear_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_pkey_type 502e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x502e, EVP_MD_pkey_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_clear_flags 5034 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5034, EVP_MD_CTX_clear_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_flags 503a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x503a, EVP_CIPHER_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_get_callback 5040 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5040, BIO_get_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_key_length 5046 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5046, EVP_CIPHER_key_length(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_Cipher 504c 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x504c, EVP_Cipher(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_block_size 5052 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5052, EVP_CIPHER_CTX_block_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_cipher 5058 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5058, EVP_CIPHER_CTX_cipher(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_get_app_data 505e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x505e, EVP_CIPHER_CTX_get_app_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_block_size 5064 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5064, EVP_MD_block_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_md 5070 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5070, EVP_MD_CTX_md(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_method_name 5076 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5076, BIO_method_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_iv_length 507c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x507c, EVP_CIPHER_CTX_iv_length(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_memcmp 5082 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5082, CRYPTO_memcmp(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_consttime_swap 5088 198004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5088, BN_consttime_swap(d0,a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_EXTENSIONS 508e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x508e, i2d_X509_EXTENSIONS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_EXTENSIONS 5094 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5094, d2i_X509_EXTENSIONS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_get0 509a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x509a, X509_ALGOR_get0(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_set0 50a0 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50a0, X509_ALGOR_set0(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509at_get0_data_by_OBJ 50a6 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50a6, X509at_get0_data_by_OBJ(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_set1 50ac 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50ac, ASN1_TYPE_set1(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_set0 50b2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50b2, ASN1_STRING_set0(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_X509_ALGORS 50b8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50b8, i2d_X509_ALGORS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_zlib_cleanup 50be 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50be, COMP_zlib_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_X509_ALGORS 50c4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50c4, d2i_X509_ALGORS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_read_ASN1 50ca a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50ca, SMIME_read_ASN1(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_isservice 50d0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50d0, OPENSSL_isservice())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_clear_flags 50d6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50d6, EVP_CIPHER_CTX_clear_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_X931_generate_prime_ex 50dc 43210ba9809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50dc, BN_X931_generate_prime_ex(a0,a1,a2,a3,d0,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_test_flags 50e2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50e2, EVP_CIPHER_CTX_test_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_add_alg_module 50e8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50e8, EVP_add_alg_module())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_X931_derive_prime_ex 50ee 4321b0a9809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50ee, BN_X931_derive_prime_ex(a0,a1,a2,d0,a3,d1,d2,d3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_init 50f4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50f4, OPENSSL_init())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_strdup 50fa 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x50fa, CRYPTO_strdup(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_ACCURACY 5106 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5106, i2d_TS_ACCURACY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_MSG_IMPRINT 5112 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5112, i2d_TS_MSG_IMPRINT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_print_public 5118 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5118, EVP_PKEY_print_public(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_new 511e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x511e, EVP_PKEY_CTX_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_TST_INFO 5124 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5124, i2d_TS_TST_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_find 512a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x512a, EVP_PKEY_asn1_find(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_load_cert 5136 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5136, TS_CONF_load_cert(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_ext 513c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x513c, TS_REQ_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_sign_init 5142 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5142, EVP_PKEY_sign_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_item_print 5148 ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5148, ASN1_item_print(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_nonce 514e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x514e, TS_TST_INFO_set_nonce(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_dup 5154 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5154, TS_RESP_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_add0 515a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x515a, EVP_PKEY_asn1_add0(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add0_attrib_signing_time 5160 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5160, PKCS7_add0_attrib_signing_time(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_asn1_get_prefix 516c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x516c, BIO_asn1_get_prefix(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_time 5172 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5172, TS_TST_INFO_set_time(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_decrypt 5178 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5178, EVP_PKEY_meth_set_decrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_set_type_str 517e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x517e, EVP_PKEY_set_type_str(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get_keygen_info 5184 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5184, EVP_PKEY_CTX_get_keygen_info(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_set_policy_id 518a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x518a, TS_REQ_set_policy_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_set_status_info 5196 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5196, TS_RESP_set_status_info(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_keygen 519c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x519c, EVP_PKEY_keygen(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestSignInit 51a2 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51a2, EVP_DigestSignInit(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_set_millis 51a8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51a8, TS_ACCURACY_set_millis(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_dup 51ae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51ae, TS_REQ_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_dup 51b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51b4, GENERAL_NAME_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_get1_crls 51ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51ba, X509_STORE_get1_crls(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_new 51c0 981004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51c0, EVP_PKEY_asn1_new(d0,d1,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_NDEF 51c6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51c6, BIO_new_NDEF(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_set_algo 51cc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51cc, TS_MSG_IMPRINT_set_algo(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_TST_INFO_bio 51d2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51d2, i2d_TS_TST_INFO_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_ordering 51d8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51d8, TS_TST_INFO_set_ordering(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ext_by_OBJ 51de 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51de, TS_TST_INFO_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_set_pointer 51e4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51e4, CRYPTO_THREADID_set_pointer(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_get_tsa_section 51ea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51ea, TS_CONF_get_tsa_section(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SMIME_write_ASN1 51f0 3210ba9808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51f0, SMIME_write_ASN1(a0,a1,a2,a3,d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_signer_key 51f6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51f6, TS_RESP_CTX_set_signer_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_encrypt_old 51fc a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x51fc, EVP_PKEY_encrypt_old(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_encrypt_init 5202 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5202, EVP_PKEY_encrypt_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_cpy 5208 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5208, CRYPTO_THREADID_cpy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_get_cert_flags 520e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x520e, ASN1_PCTX_get_cert_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ESS_SIGNING_CERT 5214 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5214, i2d_ESS_SIGNING_CERT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_load_key 521a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x521a, TS_CONF_load_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_SEQUENCE_ANY 5220 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5220, i2d_ASN1_SEQUENCE_ANY(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_MSG_IMPRINT_bio 5226 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5226, d2i_TS_MSG_IMPRINT_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_public 522c 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x522c, EVP_PKEY_asn1_set_public(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase b2i_PublicKey_bio 5232 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5232, b2i_PublicKey_bio(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_asn1_set_prefix 5238 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5238, BIO_asn1_set_prefix(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_new_mac_key 523e 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x523e, EVP_PKEY_new_mac_key(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_cmp 5244 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5244, CRYPTO_THREADID_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_ext_free 524a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x524a, TS_REQ_ext_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_free 5250 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5250, EVP_PKEY_asn1_set_free(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get0_asn1 5256 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5256, EVP_PKEY_get0_asn1(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_verify_recover_init 5262 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5262, EVP_PKEY_verify_recover_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_set_data 5268 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5268, EVP_PKEY_CTX_set_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_keygen_init 526e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x526e, EVP_PKEY_keygen_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_status_info 5274 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5274, TS_RESP_CTX_set_status_info(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_get_algo 527a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x527a, TS_MSG_IMPRINT_get_algo(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_print_bio 5280 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5280, TS_REQ_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_ctrl_str 5286 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5286, EVP_PKEY_CTX_ctrl_str(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get_default_digest_nid 528c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x528c, EVP_PKEY_get_default_digest_nid(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_PKCS7_stream 5292 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5292, PEM_write_bio_PKCS7_stream(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_print_bio 5298 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5298, TS_MSG_IMPRINT_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_asc2bn 529e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x529e, BN_asc2bn(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_policy_id 52a4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52a4, TS_REQ_get_policy_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_ACCURACY 52aa 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52aa, d2i_TS_ACCURACY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_global_lookup 52b0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52b0, DSO_global_lookup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_tsa_name 52b6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52b6, TS_CONF_set_tsa_name(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_get_flags 52c2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52c2, ASN1_PCTX_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ext_by_NID 52c8 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52c8, TS_TST_INFO_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_new 52ce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52ce, TS_RESP_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_CERT_ID_dup 52d4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52d4, ESS_CERT_ID_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_STATUS_INFO_dup 52da 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52da, TS_STATUS_INFO_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_delete_ext 52e0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52e0, TS_REQ_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestVerifyFinal 52e6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52e6, EVP_DigestVerifyFinal(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_print_params 52ec a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52ec, EVP_PKEY_print_params(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_msg_imprint 52f2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52f2, TS_REQ_get_msg_imprint(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_find_sigid_by_algs 52f8 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52f8, OBJ_find_sigid_by_algs(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_serial 52fe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x52fe, TS_TST_INFO_get_serial(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_nonce 5304 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5304, TS_REQ_get_nonce(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_set0_param 530a 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x530a, X509_PUBKEY_set0_param(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_set0_keygen_info 5310 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5310, EVP_PKEY_CTX_set0_keygen_info(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DIST_POINT_set_dpname 5316 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5316, DIST_POINT_set_dpname(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ISSUING_DIST_POINT 531c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x531c, i2d_ISSUING_DIST_POINT(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get_data 5322 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5322, EVP_PKEY_CTX_get_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_STATUS_INFO_print_bio 5328 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5328, TS_STATUS_INFO_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_derive_init 532e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x532e, EVP_PKEY_derive_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_TST_INFO 5334 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5334, d2i_TS_TST_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_add_alias 533a 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x533a, EVP_PKEY_asn1_add_alias(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_RESP_bio 5340 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5340, d2i_TS_RESP_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OTHERNAME_cmp 5346 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5346, OTHERNAME_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_set0_value 534c 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x534c, GENERAL_NAME_set0_value(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_RECIP_INFO_get0_alg 5352 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5352, PKCS7_RECIP_INFO_get0_alg(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_new 5358 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5358, TS_RESP_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_set_tst_info 535e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x535e, TS_RESP_set_tst_info(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_final 5364 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5364, PKCS7_final(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_base_id 536a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x536a, EVP_PKEY_base_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_signer_cert 5370 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5370, TS_RESP_CTX_set_signer_cert(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_set_msg_imprint 5376 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5376, TS_REQ_set_msg_imprint(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_ctrl 537c 93210806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x537c, EVP_PKEY_CTX_ctrl(a0,d0,d1,d2,d3,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_digests 5382 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5382, TS_CONF_set_digests(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_MSG_IMPRINT 5388 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5388, d2i_TS_MSG_IMPRINT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_ctrl 538e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x538e, EVP_PKEY_meth_set_ctrl(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_ext_by_NID 5394 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5394, TS_REQ_get_ext_by_NID(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_pbe_set0_algor 539a 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x539a, PKCS5_pbe_set0_algor(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_BLINDING_thread_id 53a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53a0, BN_BLINDING_thread_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_new 53a6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53a6, TS_ACCURACY_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_METHOD_free 53ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53ac, X509_CRL_METHOD_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_get_nm_flags 53b2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53b2, ASN1_PCTX_get_nm_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_sign 53b8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53b8, EVP_PKEY_meth_set_sign(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_current 53be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53be, CRYPTO_THREADID_current(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_decrypt_init 53c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53c4, EVP_PKEY_decrypt_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2b_PVK_bio 53d0 ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53d0, i2b_PVK_bio(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_print_private 53d6 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53d6, EVP_PKEY_print_private(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_get0_value 53dc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53dc, GENERAL_NAME_get0_value(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase b2i_PVK_bio 53e2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53e2, b2i_PVK_bio(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_UTCTIME_adj 53e8 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53e8, ASN1_UTCTIME_adj(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_new 53ee 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53ee, TS_TST_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_do_all_sorted 53f4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53f4, EVP_MD_do_all_sorted(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_default_engine 53fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x53fa, TS_CONF_set_default_engine(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_set_seconds 5400 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5400, TS_ACCURACY_set_seconds(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_time 5406 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5406, TS_TST_INFO_get_time(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_pkey_get0 540c 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x540c, PKCS8_pkey_get0(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_get0 5412 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5412, EVP_PKEY_asn1_get0(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_add_sigid 5418 21003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5418, OBJ_add_sigid(d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNER_INFO_sign 541e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x541e, PKCS7_SIGNER_INFO_sign(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_paramgen_init 5424 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5424, EVP_PKEY_paramgen_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_sign 542a 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x542a, EVP_PKEY_sign(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_sigid_free 5430 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5430, OBJ_sigid_free())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_init 5436 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5436, EVP_PKEY_meth_set_init(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ESS_ISSUER_SERIAL 543c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x543c, d2i_ESS_ISSUER_SERIAL(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ISSUING_DIST_POINT_new 5442 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5442, ISSUING_DIST_POINT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_adj 5448 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5448, ASN1_TIME_adj(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_OBJ_print_bio 544e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x544e, TS_OBJ_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_verify_recover 5454 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5454, EVP_PKEY_meth_set_verify_recover(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_get_status_info 545a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x545a, TS_RESP_get_status_info(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_set_cb 5460 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5460, EVP_PKEY_CTX_set_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_to_TS_TST_INFO 5466 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5466, PKCS7_to_TS_TST_INFO(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_get_oid_flags 546c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x546c, ASN1_PCTX_get_oid_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_add_ext 5472 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5472, TS_TST_INFO_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_derive 5478 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5478, EVP_PKEY_meth_set_derive(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_MSG_IMPRINT_bio 5484 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5484, i2d_TS_MSG_IMPRINT_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_accuracy 548a 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x548a, TS_RESP_CTX_set_accuracy(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_set_nonce 5490 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5490, TS_REQ_set_nonce(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_CERT_ID_new 5496 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5496, ESS_CERT_ID_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_ext_count 549c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x549c, TS_REQ_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_reverse 54a2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54a2, BUF_reverse(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_print_bio 54a8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54a8, TS_TST_INFO_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ISSUING_DIST_POINT 54ae 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54ae, d2i_ISSUING_DIST_POINT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2b_PrivateKey_bio 54b4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54b4, i2b_PrivateKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_RESP 54ba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54ba, i2d_TS_RESP(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase b2i_PublicKey 54c0 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54c0, b2i_PublicKey(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_cleanup 54c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54c6, TS_VERIFY_CTX_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_STATUS_INFO_free 54cc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54cc, TS_STATUS_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_verify_token 54d2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54d2, TS_RESP_verify_token(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_bsearch_ex_ 54d8 2a109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54d8, OBJ_bsearch_ex_(a0,a1,d0,d1,a2,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_bn_print 54de 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54de, ASN1_bn_print(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_get_count 54e4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54e4, EVP_PKEY_asn1_get_count())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_set_nm_flags 54ea 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54ea, ASN1_PCTX_set_nm_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestVerifyInit 54f0 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54f0, EVP_DigestVerifyInit(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_policy_id 54f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54f6, TS_TST_INFO_get_policy_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_cert_req 54fc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x54fc, TS_REQ_get_cert_req(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_set_meth_data 5502 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5502, X509_CRL_set_meth_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_pkey_set0 5508 2ba109807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5508, PKCS8_pkey_set0(a0,a1,d0,d1,a2,a3,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_copy 550e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x550e, ASN1_STRING_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_match 551a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x551a, X509_CRL_match(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_private 5520 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5520, EVP_PKEY_asn1_set_private(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ext_d2i 5526 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5526, TS_TST_INFO_get_ext_d2i(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_add_policy 552c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x552c, TS_RESP_CTX_add_policy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_RESP 5532 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5532, d2i_TS_RESP(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_load_certs 5538 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5538, TS_CONF_load_certs(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_msg_imprint 553e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x553e, TS_TST_INFO_get_msg_imprint(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_TS_strings 5544 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5544, ERR_load_TS_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_version 554a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x554a, TS_TST_INFO_get_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_dup 5550 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5550, EVP_PKEY_CTX_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_verify 5556 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5556, EVP_PKEY_meth_set_verify(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2b_PublicKey_bio 555c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x555c, i2b_PublicKey_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_certs 5562 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5562, TS_CONF_set_certs(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_get0_info 5568 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5568, EVP_PKEY_asn1_get0_info(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_free 556e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x556e, TS_VERIFY_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_ext_by_critical 5574 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5574, TS_REQ_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_serial_cb 557a 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x557a, TS_RESP_CTX_set_serial_cb(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_meth_data 5580 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5580, X509_CRL_get_meth_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_time_cb 5586 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5586, TS_RESP_CTX_set_time_cb(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_get_msg 558c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x558c, TS_MSG_IMPRINT_get_msg(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_ext_free 5592 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5592, TS_TST_INFO_ext_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_version 5598 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5598, TS_REQ_get_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_add_ext 559e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x559e, TS_REQ_add_ext(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_set_app_data 55a4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55a4, EVP_PKEY_CTX_set_app_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_bsearch_ 55aa a109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55aa, OBJ_bsearch_(a0,a1,d0,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_verifyctx 55b0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55b0, EVP_PKEY_meth_set_verifyctx(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_PKCS7_bio_stream 55b6 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55b6, i2d_PKCS7_bio_stream(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_set_numeric 55bc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55bc, CRYPTO_THREADID_set_numeric(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_sign_add_signer 55c2 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55c2, PKCS7_sign_add_signer(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_TST_INFO_bio 55c8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55c8, d2i_TS_TST_INFO_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ordering 55ce 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55ce, TS_TST_INFO_get_ordering(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_print_bio 55d4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55d4, TS_RESP_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_exts 55da 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55da, TS_TST_INFO_get_exts(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_pbe2_set_iv 55e0 2a190806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55e0, PKCS5_pbe2_set_iv(a0,d0,a1,d1,a2,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase b2i_PrivateKey 55e6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55e6, b2i_PrivateKey(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get_app_data 55ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55ec, EVP_PKEY_CTX_get_app_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_set_cert_req 55f2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55f2, TS_REQ_set_cert_req(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_set_callback 55f8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55f8, CRYPTO_THREADID_set_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_serial 55fe ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x55fe, TS_CONF_set_serial(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_free 5604 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5604, TS_TST_INFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_verify_response 5610 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5610, TS_RESP_verify_response(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ESS_ISSUER_SERIAL 5616 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5616, i2d_ESS_ISSUER_SERIAL(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_get_seconds 561c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x561c, TS_ACCURACY_get_seconds(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_do_all 5622 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5622, EVP_CIPHER_do_all(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase b2i_PrivateKey_bio 5628 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5628, b2i_PrivateKey_bio(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_CERTID_dup 562e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x562e, OCSP_CERTID_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_get0_param 5634 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5634, X509_PUBKEY_get0_param(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_dup 563a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x563a, TS_MSG_IMPRINT_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_print_ctx 5640 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5640, PKCS7_print_ctx(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_REQ_bio 5646 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5646, i2d_TS_REQ_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_param 564c 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x564c, EVP_PKEY_asn1_set_param(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_encrypt 5652 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5652, EVP_PKEY_meth_set_encrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_set_flags 5658 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5658, ASN1_PCTX_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ESS_CERT_ID 565e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x565e, i2d_ESS_CERT_ID(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_new 5664 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5664, TS_VERIFY_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_extension_cb 566a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x566a, TS_RESP_CTX_set_extension_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_status_info_cond 5670 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5670, TS_RESP_CTX_set_status_info_cond(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_verify 5676 1a09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5676, EVP_PKEY_verify(a0,a1,d0,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_METHOD_new 567c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x567c, X509_CRL_METHOD_new(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_DigestSignFinal 5682 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5682, EVP_DigestSignFinal(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_def_policy 5688 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5688, TS_RESP_CTX_set_def_policy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_create_response 568e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x568e, TS_RESP_create_response(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_SIGNER_INFO_get0_algs 5694 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5694, PKCS7_SIGNER_INFO_get0_algs(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_nonce 569a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x569a, TS_TST_INFO_get_nonce(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_decrypt_old 56a0 a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56a0, EVP_PKEY_decrypt_old(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_policy_id 56a6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56a6, TS_TST_INFO_set_policy_id(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_ess_cert_id_chain 56ac a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56ac, TS_CONF_set_ess_cert_id_chain(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get0_pkey 56b2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56b2, EVP_PKEY_CTX_get0_pkey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_REQ 56b8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56b8, d2i_TS_REQ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_find_str 56be 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56be, EVP_PKEY_asn1_find_str(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_f_asn1 56c4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56c4, BIO_f_asn1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_SIGNING_CERT_new 56ca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56ca, ESS_SIGNING_CERT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PBE_find 56d0 a981005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56d0, EVP_PBE_find(d0,d1,a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get0_by_cert 56d6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56d6, X509_CRL_get0_by_cert(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_derive 56dc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56dc, EVP_PKEY_derive(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_REQ 56e2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56e2, i2d_TS_REQ(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_delete_ext 56e8 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56e8, TS_TST_INFO_delete_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_ISSUER_SERIAL_free 56ee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56ee, ESS_ISSUER_SERIAL_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_set_str_flags 56f4 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56f4, ASN1_PCTX_set_str_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_signer_key 56fa 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x56fa, TS_CONF_set_signer_key(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_get_millis 5700 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5700, TS_ACCURACY_get_millis(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_get_token 5706 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5706, TS_RESP_get_token(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_dup 570c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x570c, TS_ACCURACY_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_set_default_method 5712 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5712, X509_CRL_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_hash 5718 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5718, CRYPTO_THREADID_hash(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_free 571e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x571e, TS_RESP_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ISSUING_DIST_POINT_free 5724 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5724, ISSUING_DIST_POINT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_ISSUER_SERIAL_new 572a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x572a, ESS_ISSUER_SERIAL_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add1_attrib_digest 5730 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5730, PKCS7_add1_attrib_digest(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_add_md 5736 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5736, TS_RESP_CTX_add_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_dup 573c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x573c, TS_TST_INFO_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_Parameters 5742 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5742, PEM_write_bio_Parameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_accuracy 5748 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5748, TS_TST_INFO_get_accuracy(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get0_by_serial 574e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x574e, X509_CRL_get0_by_serial(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_version 5754 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5754, TS_TST_INFO_set_version(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_get_tst_info 575a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x575a, TS_RESP_CTX_get_tst_info(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_verify_signature 5760 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5760, TS_RESP_verify_signature(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_THREADID_get_callback 5766 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5766, CRYPTO_THREADID_get_callback())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_tsa 576c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x576c, TS_TST_INFO_get_tsa(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_STATUS_INFO_new 5772 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5772, TS_STATUS_INFO_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get_cb 5778 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5778, EVP_PKEY_CTX_get_cb(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_ext_d2i 577e 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x577e, TS_REQ_get_ext_d2i(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_set0_othername 5784 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5784, GENERAL_NAME_set0_othername(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ext_count 578a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x578a, TS_TST_INFO_get_ext_count(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_get_request 5790 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5790, TS_RESP_CTX_get_request(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_signctx 579c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x579c, EVP_PKEY_meth_set_signctx(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_copy 57a2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57a2, EVP_PKEY_asn1_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_cmp 57a8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57a8, ASN1_TYPE_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_do_all_sorted 57ae 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57ae, EVP_CIPHER_do_all_sorted(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_free 57b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57b4, EVP_PKEY_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_get1_certs 57c0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57c0, X509_STORE_get1_certs(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get_operation 57c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57c6, EVP_PKEY_CTX_get_operation(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ESS_SIGNING_CERT 57cc 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57cc, d2i_ESS_SIGNING_CERT(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_ordering 57d2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57d2, TS_CONF_set_ordering(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PBE_alg_add_type 57d8 8321005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57d8, EVP_PBE_alg_add_type(d0,d1,d2,d3,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_set_version 57de 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57de, TS_REQ_set_version(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get0 57e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57e4, EVP_PKEY_get0(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_asn1_set_suffix 57ea a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57ea, BIO_asn1_set_suffix(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_STATUS_INFO 57f0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57f0, i2d_TS_STATUS_INFO(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_do_all 57f6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57f6, EVP_MD_do_all(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_accuracy 57fc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x57fc, TS_TST_INFO_set_accuracy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_add_attrib_content_type 5802 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5802, PKCS7_add_attrib_content_type(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_add0 5808 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5808, EVP_PKEY_meth_add0(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_tsa 580e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x580e, TS_TST_INFO_set_tsa(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_new 5814 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5814, EVP_PKEY_meth_new(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_accuracy 581a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x581a, TS_CONF_set_accuracy(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_set_oid_flags 5820 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5820, ASN1_PCTX_set_oid_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_SIGNING_CERT_dup 5826 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5826, ESS_SIGNING_CERT_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_REQ_bio 582c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x582c, d2i_TS_REQ_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_time_adj_ex 5832 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5832, X509_time_adj_ex(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_add_flags 5838 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5838, TS_RESP_CTX_add_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_TS_STATUS_INFO 583e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x583e, d2i_TS_STATUS_INFO(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_set_msg 5844 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5844, TS_MSG_IMPRINT_set_msg(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_asn1_get_suffix 584a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x584a, BIO_asn1_get_suffix(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_free 5850 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5850, TS_REQ_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_free 5856 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5856, EVP_PKEY_meth_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_exts 585c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x585c, TS_REQ_get_exts(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_clock_precision_digits 5862 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5862, TS_RESP_CTX_set_clock_precision_digits(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_add_failure_info 5868 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5868, TS_RESP_CTX_add_failure_info(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_TS_RESP_bio 586e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x586e, i2d_TS_RESP_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_get0_peerkey 5874 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5874, EVP_PKEY_CTX_get0_peerkey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_new 587a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x587a, TS_REQ_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_new 5880 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5880, TS_MSG_IMPRINT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_find 5886 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5886, EVP_PKEY_meth_find(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_id 588c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x588c, EVP_PKEY_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_serial 5892 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5892, TS_TST_INFO_set_serial(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase a2i_GENERAL_NAME 5898 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5898, a2i_GENERAL_NAME(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_crypto_device 589e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x589e, TS_CONF_set_crypto_device(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_verify_init 58a4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58a4, EVP_PKEY_verify_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_policies 58aa a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58aa, TS_CONF_set_policies(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_new 58b0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58b0, ASN1_PCTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_CERT_ID_free 58b6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58b6, ESS_CERT_ID_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_MSG_IMPRINT_free 58bc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58bc, TS_MSG_IMPRINT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_init 58c2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58c2, TS_VERIFY_CTX_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS7_stream 58c8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58c8, PKCS7_stream(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_certs 58ce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58ce, TS_RESP_CTX_set_certs(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_def_policy 58d4 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58d4, TS_CONF_set_def_policy(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_GENERALIZEDTIME_adj 58da 210804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58da, ASN1_GENERALIZEDTIME_adj(a0,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_free 58e6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58e6, TS_ACCURACY_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_get_tst_info 58ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58ec, TS_RESP_get_tst_info(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_derive_set_peer 58f2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58f2, EVP_PKEY_derive_set_peer(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_read_bio_Parameters 58f8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58f8, PEM_read_bio_Parameters(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_clock_precision_digits 58fe a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x58fe, TS_CONF_set_clock_precision_digits(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_ISSUER_SERIAL_dup 5904 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5904, ESS_ISSUER_SERIAL_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_get_micros 590a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x590a, TS_ACCURACY_get_micros(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_get_str_flags 5910 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5910, ASN1_PCTX_get_str_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NAME_CONSTRAINTS_check 5916 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5916, NAME_CONSTRAINTS_check(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_BIT_STRING_check 591c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x591c, ASN1_BIT_STRING_check(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_akid 5922 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5922, X509_check_akid(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_free 5928 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5928, ASN1_PCTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_ASN1_stream 592e 1b0a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x592e, PEM_write_bio_ASN1_stream(a0,a1,a2,d0,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_ASN1_bio_stream 5934 b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5934, i2d_ASN1_bio_stream(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_X509_ALGOR_print_bio 593a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x593a, TS_X509_ALGOR_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_cleanup 5940 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5940, EVP_PKEY_meth_set_cleanup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_free 5946 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5946, EVP_PKEY_asn1_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ESS_SIGNING_CERT_free 594c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x594c, ESS_SIGNING_CERT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_set_msg_imprint 5952 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5952, TS_TST_INFO_set_msg_imprint(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_cmp 5958 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5958, GENERAL_NAME_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ASN1_SEQUENCE_ANY 596a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x596a, d2i_ASN1_SEQUENCE_ANY(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_NAME_get0_otherName 5970 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5970, GENERAL_NAME_get0_otherName(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_ESS_CERT_ID 5976 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5976, d2i_ESS_CERT_ID(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_find_sigid_algs 597c 98003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x597c, OBJ_find_sigid_algs(d0,a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_keygen 5982 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5982, EVP_PKEY_meth_set_keygen(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_PBKDF2_HMAC 5988 b3a2190808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5988, PKCS5_PBKDF2_HMAC(a0,d0,a1,d1,d2,a2,d3,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_paramgen 598e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x598e, EVP_PKEY_paramgen(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_paramgen 5994 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5994, EVP_PKEY_meth_set_paramgen(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_new_PKCS7 599a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x599a, BIO_new_PKCS7(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_verify_recover 59a0 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59a0, EVP_PKEY_verify_recover(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ext_print_bio 59a6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59a6, TS_ext_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ASN1_INTEGER_print_bio 59ac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59ac, TS_ASN1_INTEGER_print_bio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase check_defer 59b2 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59b2, check_defer(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSO_pathbyaddr 59b8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59b8, DSO_pathbyaddr(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_set_type 59be 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59be, EVP_PKEY_set_type(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_ACCURACY_set_micros 59c4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59c4, TS_ACCURACY_set_micros(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_to_TS_VERIFY_CTX 59ca 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59ca, TS_REQ_to_TS_VERIFY_CTX(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_set_copy 59d0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59d0, EVP_PKEY_meth_set_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_PCTX_set_cert_flags 59d6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59d6, ASN1_PCTX_set_cert_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ext 59dc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59dc, TS_TST_INFO_get_ext(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_ctrl 59e2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59e2, EVP_PKEY_asn1_set_ctrl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_TST_INFO_get_ext_by_critical 59e8 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59e8, TS_TST_INFO_get_ext_by_critical(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_CTX_new_id 59ee 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59ee, EVP_PKEY_CTX_new_id(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_REQ_get_ext_by_OBJ 59f4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59f4, TS_REQ_get_ext_by_OBJ(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_signer_cert 59fa ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x59fa, TS_CONF_set_signer_cert(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_hash_old 5a00 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a00, X509_NAME_hash_old(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_set_string 5a06 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a06, ASN1_TIME_set_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_flags 5a0c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a0c, EVP_MD_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_free 5a12 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a12, TS_RESP_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_add1_header 5a18 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a18, OCSP_REQ_CTX_add1_header(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_set1_req 5a1e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a1e, OCSP_REQ_CTX_set1_req(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_verify_cb 5a24 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a24, X509_STORE_set_verify_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get0_current_crl 5a2a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a2a, X509_STORE_CTX_get0_current_crl(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get0_parent_ctx 5a30 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a30, X509_STORE_CTX_get0_parent_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get0_current_issuer 5a36 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a36, X509_STORE_CTX_get0_current_issuer(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_copy 5a3c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a3c, EVP_CIPHER_CTX_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_get_prompt_constructor 5a42 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a42, UI_method_get_prompt_constructor(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase UI_method_set_prompt_constructor 5a48 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a48, UI_method_set_prompt_constructor(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_read_pw_string_min 5a4e 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a4e, EVP_read_pw_string_min(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cts128_encrypt 5a54 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a54, CRYPTO_cts128_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cts128_decrypt_block 5a5a 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a5a, CRYPTO_cts128_decrypt_block(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cfb128_1_encrypt 5a60 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a60, CRYPTO_cfb128_1_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cbc128_encrypt 5a66 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a66, CRYPTO_cbc128_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ctr128_encrypt 5a6c 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a6c, CRYPTO_ctr128_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ofb128_encrypt 5a72 21ba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a72, CRYPTO_ofb128_encrypt(a0,a1,d0,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cts128_decrypt 5a78 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a78, CRYPTO_cts128_decrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cts128_encrypt_block 5a7e 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a7e, CRYPTO_cts128_encrypt_block(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cbc128_decrypt 5a84 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a84, CRYPTO_cbc128_decrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cfb128_encrypt 5a8a 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a8a, CRYPTO_cfb128_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_cfb128_8_encrypt 5a90 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a90, CRYPTO_cfb128_8_encrypt(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_strcasecmp 5a96 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a96, OPENSSL_strcasecmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_memcmp 5a9c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5a9c, OPENSSL_memcmp(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_strncasecmp 5aa2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5aa2, OPENSSL_strncasecmp(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_gmtime 5aa8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5aa8, OPENSSL_gmtime(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_gmtime_adj 5aae 10803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5aae, OPENSSL_gmtime_adj(a0,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get0_info 5ab4 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ab4, EVP_PKEY_meth_get0_info(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_copy 5aba 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5aba, EVP_PKEY_meth_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_PKCS1_PSS_mgf1 5ac0 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ac0, RSA_padding_add_PKCS1_PSS_mgf1(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_verify_PKCS1_PSS_mgf1 5ac6 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ac6, RSA_verify_PKCS1_PSS_mgf1(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_set_md 5acc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5acc, X509_ALGOR_set_md(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_CTX_copy 5ad2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ad2, CMAC_CTX_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_CTX_free 5ad8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ad8, CMAC_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_CTX_get0_cipher_ctx 5ade 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ade, CMAC_CTX_get0_cipher_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_CTX_cleanup 5ae4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ae4, CMAC_CTX_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_Init 5aea ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5aea, CMAC_Init(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_Update 5af0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5af0, CMAC_Update(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_resume 5af6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5af6, CMAC_resume(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_CTX_new 5afc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5afc, CMAC_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMAC_Final 5b02 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b02, CMAC_Final(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ctr128_encrypt_ctr32 5b08 321ba09808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b08, CRYPTO_ctr128_encrypt_ctr32(a0,a1,d0,a2,a3,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_release 5b0e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b0e, CRYPTO_gcm128_release(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_decrypt_ccm64 5b14 b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b14, CRYPTO_ccm128_decrypt_ccm64(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_encrypt 5b1a 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b1a, CRYPTO_ccm128_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_encrypt 5b20 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b20, CRYPTO_gcm128_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_xts128_encrypt 5b26 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b26, CRYPTO_xts128_encrypt(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_nistcts128_decrypt_block 5b2c b1a09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b2c, CRYPTO_nistcts128_decrypt_block(a0,a1,d0,a2,d1,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_setiv 5b32 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b32, CRYPTO_gcm128_setiv(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_nistcts128_encrypt 5b38 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b38, CRYPTO_nistcts128_encrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_tag 5b3e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b3e, CRYPTO_gcm128_tag(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_encrypt_ccm64 5b44 b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b44, CRYPTO_ccm128_encrypt_ccm64(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_setiv 5b4a 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b4a, CRYPTO_ccm128_setiv(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_nistcts128_encrypt_block 5b50 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b50, CRYPTO_nistcts128_encrypt_block(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_aad 5b56 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b56, CRYPTO_gcm128_aad(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_init 5b5c a910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b5c, CRYPTO_ccm128_init(a0,d0,d1,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_nistcts128_decrypt 5b62 1ba09806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b62, CRYPTO_nistcts128_decrypt(a0,a1,d0,a2,a3,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_new 5b68 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b68, CRYPTO_gcm128_new(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_tag 5b6e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b6e, CRYPTO_ccm128_tag(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_decrypt 5b74 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b74, CRYPTO_ccm128_decrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ccm128_aad 5b7a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b7a, CRYPTO_ccm128_aad(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_init 5b80 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b80, CRYPTO_gcm128_init(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_decrypt 5b86 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b86, CRYPTO_gcm128_decrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_decrypt_ctr32 5b8c b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b8c, CRYPTO_gcm128_decrypt_ctr32(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_encrypt_ctr32 5b92 b0a9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b92, CRYPTO_gcm128_encrypt_ctr32(a0,a1,a2,d0,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_gcm128_finish 5b98 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b98, CRYPTO_gcm128_finish(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_pbkdf2_set 5b9e 3218005
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5b9e, PKCS5_pbkdf2_set(d0,a0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_PSS_PARAMS_new 5ba4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ba4, RSA_PSS_PARAMS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSA_PSS_PARAMS 5baa 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5baa, d2i_RSA_PSS_PARAMS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_PSS_PARAMS_free 5bb0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bb0, RSA_PSS_PARAMS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_RSA_PSS_PARAMS 5bb6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bb6, i2d_RSA_PSS_PARAMS(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_TAGCALL
 #ifdef __CLIB_PRAGMA_LIBCALL
  #pragma tagcall AmiSSLBase OPENSSL_showfatal 5bbc 9802
 #endif /* __CLIB_PRAGMA_LIBCALL */
 #ifdef __CLIB_PRAGMA_AMICALL
  #pragma tagcall(AmiSSLBase, 0x5bbc, OPENSSL_showfatal(a0,a1))
 #endif /* __CLIB_PRAGMA_AMICALL */
#endif /* __CLIB_PRAGMA_TAGCALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_MAPPING_it 5bc2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bc2, POLICY_MAPPING_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase NAME_CONSTRAINTS_it 5bc8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bc8, NAME_CONSTRAINTS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_OCTET_STRING_NDEF_it 5bce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bce, ASN1_OCTET_STRING_NDEF_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_CONSTRAINTS_it 5bda 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bda, POLICY_CONSTRAINTS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase POLICY_MAPPINGS_it 5be0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5be0, POLICY_MAPPINGS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase GENERAL_SUBTREE_it 5be6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5be6, GENERAL_SUBTREE_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_EXTENSIONS_it 5bec 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bec, X509_EXTENSIONS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGORS_it 5bf2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bf2, X509_ALGORS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ContentInfo_it 5bf8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bf8, CMS_ContentInfo_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_ReceiptRequest_it 5bfe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5bfe, CMS_ReceiptRequest_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SEQUENCE_ANY_it 5c04 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c04, ASN1_SEQUENCE_ANY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SET_ANY_it 5c0a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c0a, ASN1_SET_ANY_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ISSUING_DIST_POINT_it 5c16 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c16, ISSUING_DIST_POINT_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_PSS_PARAMS_it 5c1c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c1c, RSA_PSS_PARAMS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PEM_write_bio_DHxparams 5c28 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c28, PEM_write_bio_DHxparams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_ALGOR_cmp 5c2e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c2e, X509_ALGOR_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_STRING_clear_free 5c34 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c34, ASN1_STRING_clear_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TIME_diff 5c3a ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c3a, ASN1_TIME_diff(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_hex_string 5c40 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c40, BIO_hex_string(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientEncryptedKey_cert_cmp 5c4c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c4c, CMS_RecipientEncryptedKey_cert_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientEncryptedKey_get0_id 5c52 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c52, CMS_RecipientEncryptedKey_get0_id(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_encrypt 5c58 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c58, CMS_RecipientInfo_encrypt(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_get0_pkey_ctx 5c5e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c5e, CMS_RecipientInfo_get0_pkey_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_decrypt 5c64 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c64, CMS_RecipientInfo_kari_decrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_get0_alg 5c6a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c6a, CMS_RecipientInfo_kari_get0_alg(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_get0_ctx 5c70 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c70, CMS_RecipientInfo_kari_get0_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_get0_orig_id 5c76 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c76, CMS_RecipientInfo_kari_get0_orig_id(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_get0_reks 5c7c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c7c, CMS_RecipientInfo_kari_get0_reks(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_orig_id_cmp 5c82 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c82, CMS_RecipientInfo_kari_orig_id_cmp(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_RecipientInfo_kari_set0_pkey 5c88 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c88, CMS_RecipientInfo_kari_set0_pkey(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SharedInfo_encode 5c8e 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c8e, CMS_SharedInfo_encode(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_get0_md_ctx 5c94 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c94, CMS_SignerInfo_get0_md_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_get0_pkey_ctx 5c9a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5c9a, CMS_SignerInfo_get0_pkey_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CMS_SignerInfo_get0_signature 5ca0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ca0, CMS_SignerInfo_get0_signature(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_DHxparams 5ca6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ca6, d2i_DHxparams(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_DHxparams 5cac 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cac, i2d_DHxparams(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_compute_key_padded 5cb2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cb2, DH_compute_key_padded(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_get_1024_160 5cb8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cb8, DH_get_1024_160())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_get_2048_224 5cbe 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cbe, DH_get_2048_224())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_get_2048_256 5cc4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cc4, DH_get_2048_256())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_KDF_X9_42 5cca 32ba190808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cca, DH_KDF_X9_42(a0,d0,a1,d1,a2,a3,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_curve_nid2nist 5cd0 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cd0, EC_curve_nid2nist(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_curve_nist2nid 5cd6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cd6, EC_curve_nist2nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get_mont_data 5cdc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5cdc, EC_GROUP_get_mont_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDH_KDF_X9_62 5ce2 32a190807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ce2, ECDH_KDF_X9_62(a0,d0,a1,d1,a2,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_cbc_hmac_sha256 5d1e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d1e, EVP_aes_128_cbc_hmac_sha256())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_wrap 5d24 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d24, EVP_aes_128_wrap())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_wrap 5d2a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d2a, EVP_aes_192_wrap())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_cbc_hmac_sha256 5d30 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d30, EVP_aes_256_cbc_hmac_sha256())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_wrap 5d36 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d36, EVP_aes_256_wrap())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_des_ede3_wrap 5d3c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d3c, EVP_des_ede3_wrap())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_128_unwrap 5d42 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d42, CRYPTO_128_unwrap(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_128_wrap 5d48 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d48, CRYPTO_128_wrap(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_get0_mem_bio 5d4e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d4e, OCSP_REQ_CTX_get0_mem_bio(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_http 5d54 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d54, OCSP_REQ_CTX_http(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_i2d 5d5a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d5a, OCSP_REQ_CTX_i2d(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_nbio 5d60 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d60, OCSP_REQ_CTX_nbio(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_nbio_d2i 5d66 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d66, OCSP_REQ_CTX_nbio_d2i(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_REQ_CTX_new 5d6c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d6c, OCSP_REQ_CTX_new(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_set_max_response_length 5d72 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d72, OCSP_set_max_response_length(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase d2i_RSA_OAEP_PARAMS 5d78 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d78, d2i_RSA_OAEP_PARAMS(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_OAEP_PARAMS_free 5d7e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d7e, RSA_OAEP_PARAMS_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_OAEP_PARAMS_it 5d84 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d84, RSA_OAEP_PARAMS_it())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_OAEP_PARAMS_new 5d8a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d8a, RSA_OAEP_PARAMS_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_add_PKCS1_OAEP_mgf1 5d90 3b2a190808
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d90, RSA_padding_add_PKCS1_OAEP_mgf1(a0,d0,a1,d1,a2,d2,a3,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_padding_check_PKCS1_OAEP_mgf1 5d96 4b3a2190809
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d96, RSA_padding_check_PKCS1_OAEP_mgf1(a0,d0,a1,d1,d2,a2,d3,a3,d4))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase sk_deep_copy 5d9c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5d9c, sk_deep_copy(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_re_X509_tbs 5da2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5da2, i2d_re_X509_tbs(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_chain_check_suiteb 5da8 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5da8, X509_chain_check_suiteb(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_chain_up_ref 5dae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dae, X509_chain_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_check_suiteb 5db4 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5db4, X509_CRL_check_suiteb(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_diff 5dba 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dba, X509_CRL_diff(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_http_nbio 5dc0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dc0, X509_CRL_http_nbio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get0_signature 5dc6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dc6, X509_get0_signature(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_signature_nid 5dcc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dcc, X509_get_signature_nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_http_nbio 5dd2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dd2, X509_http_nbio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_dup 5dd8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dd8, X509_REVOKED_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get0_store 5dde 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dde, X509_STORE_CTX_get0_store(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_set_lookup_crls_cb 5de4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5de4, X509_STORE_set_lookup_crls_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_add1_host 5dea 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dea, X509_VERIFY_PARAM_add1_host(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_get0 5df0 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5df0, X509_VERIFY_PARAM_get0(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_get0_name 5df6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5df6, X509_VERIFY_PARAM_get0_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_get0_peername 5dfc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5dfc, X509_VERIFY_PARAM_get0_peername(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_get_count 5e02 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e02, X509_VERIFY_PARAM_get_count())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1_email 5e08 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e08, X509_VERIFY_PARAM_set1_email(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1_host 5e0e 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e0e, X509_VERIFY_PARAM_set1_host(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1_ip 5e14 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e14, X509_VERIFY_PARAM_set1_ip(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set1_ip_asc 5e1a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e1a, X509_VERIFY_PARAM_set1_ip_asc(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_set_hostflags 5e20 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e20, X509_VERIFY_PARAM_set_hostflags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_email 5e26 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e26, X509_check_email(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_host 5e2c a109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e2c, X509_check_host(a0,a1,d0,d1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_ip 5e32 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e32, X509_check_ip(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_check_ip_asc 5e38 19803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e38, X509_check_ip_asc(a0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_item 5e44 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e44, EVP_PKEY_asn1_set_item(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLS_client_method 5e4a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e4a, DTLS_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLS_method 5e50 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e50, DTLS_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLS_server_method 5e56 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e56, DTLS_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_2_client_method 5e5c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e5c, DTLSv1_2_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_2_method 5e62 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e62, DTLSv1_2_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_2_server_method 5e68 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e68, DTLSv1_2_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_certs_clear 5e6e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e6e, SSL_certs_clear(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_find 5e74 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e74, SSL_CIPHER_find(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_COMP_free_compression_methods 5e7a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e7a, SSL_COMP_free_compression_methods())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_cmd 5e80 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e80, SSL_CONF_cmd(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_cmd_argv 5e86 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e86, SSL_CONF_cmd_argv(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_cmd_value_type 5e8c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e8c, SSL_CONF_cmd_value_type(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_clear_flags 5e92 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e92, SSL_CONF_CTX_clear_flags(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_finish 5e98 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e98, SSL_CONF_CTX_finish(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_free 5e9e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5e9e, SSL_CONF_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_new 5ea4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ea4, SSL_CONF_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_set1_prefix 5eaa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5eaa, SSL_CONF_CTX_set1_prefix(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_set_flags 5eb0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5eb0, SSL_CONF_CTX_set_flags(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_set_ssl 5eb6 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5eb6, SSL_CONF_CTX_set_ssl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CONF_CTX_set_ssl_ctx 5ebc 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ebc, SSL_CONF_CTX_set_ssl_ctx(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_add_client_custom_ext 5ec2 a39210807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ec2, SSL_CTX_add_client_custom_ext(a0,d0,d1,d2,a1,d3,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_add_server_custom_ext 5ec8 a39210807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ec8, SSL_CTX_add_server_custom_ext(a0,d0,d1,d2,a1,d3,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get0_certificate 5ece 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ece, SSL_CTX_get0_certificate(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get0_param 5ed4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ed4, SSL_CTX_get0_param(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get0_privatekey 5eda 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5eda, SSL_CTX_get0_privatekey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_ssl_method 5ee0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ee0, SSL_CTX_get_ssl_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_alpn_protos 5ee6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ee6, SSL_CTX_set_alpn_protos(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_alpn_select_cb 5eec a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5eec, SSL_CTX_set_alpn_select_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_cert_cb 5ef2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ef2, SSL_CTX_set_cert_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_serverinfo 5ef8 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ef8, SSL_CTX_use_serverinfo(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_use_serverinfo_file 5efe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5efe, SSL_CTX_use_serverinfo_file(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_extension_supported 5f04 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f04, SSL_extension_supported(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get0_alpn_selected 5f0a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f0a, SSL_get0_alpn_selected(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get0_param 5f10 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f10, SSL_get0_param(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_is_server 5f16 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f16, SSL_is_server(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_alpn_protos 5f1c a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f1c, SSL_set_alpn_protos(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_cert_cb 5f22 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f22, SSL_set_cert_cb(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_check_chain 5f28 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f28, SSL_check_chain(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_shared_sigalgs 5f2e 21ba90807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f2e, SSL_get_shared_sigalgs(a0,d0,a1,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_sigalgs 5f34 21ba90807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f34, SSL_get_sigalgs(a0,d0,a1,a2,a3,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_add_stable_module 5f3a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f3a, ASN1_add_stable_module())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_buf_print 5f40 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f40, ASN1_buf_print(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_get_int64 5f46 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f46, ASN1_ENUMERATED_get_int64(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_ENUMERATED_set_int64 5f4c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f4c, ASN1_ENUMERATED_set_int64(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_get_int64 5f52 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f52, ASN1_INTEGER_get_int64(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_get_uint64 5f58 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f58, ASN1_INTEGER_get_uint64(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_set_int64 5f5e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f5e, ASN1_INTEGER_set_int64(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_INTEGER_set_uint64 5f64 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f64, ASN1_INTEGER_set_uint64(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SCTX_free 5f6a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f6a, ASN1_SCTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SCTX_get_app_data 5f70 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f70, ASN1_SCTX_get_app_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SCTX_get_flags 5f76 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f76, ASN1_SCTX_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SCTX_get_item 5f7c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f7c, ASN1_SCTX_get_item(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SCTX_get_template 5f82 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f82, ASN1_SCTX_get_template(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SCTX_new 5f88 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f88, ASN1_SCTX_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_SCTX_set_app_data 5f8e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f8e, ASN1_SCTX_set_app_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_str2mask 5f94 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f94, ASN1_str2mask(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_pack_sequence 5f9a a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5f9a, ASN1_TYPE_pack_sequence(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASN1_TYPE_unpack_sequence 5fa0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fa0, ASN1_TYPE_unpack_sequence(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASYNC_block_pause 5fa6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fa6, ASYNC_block_pause())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASYNC_cleanup_thread 5fac 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fac, ASYNC_cleanup_thread())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASYNC_clear_wake 5fb2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fb2, ASYNC_clear_wake(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASYNC_get_current_job 5fb8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fb8, ASYNC_get_current_job())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASYNC_get_wait_fd 5fbe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fbe, ASYNC_get_wait_fd(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASYNC_init_thread 5fc4 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fc4, ASYNC_init_thread(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASYNC_pause_job 5fca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fca, ASYNC_pause_job())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASYNC_start_job 5fd0 0ba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fd0, ASYNC_start_job(a0,a1,a2,a3,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASYNC_unblock_pause 5fd6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fd6, ASYNC_unblock_pause())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASYNC_wake 5fdc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fdc, ASYNC_wake(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ERR_load_ASYNC_strings 5fe2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fe2, ERR_load_ASYNC_strings())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_accept_ex 5fe8 18003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fe8, BIO_accept_ex(d0,a0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDR_clear 5fee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5fee, BIO_ADDR_clear(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDR_family 5ff4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ff4, BIO_ADDR_family(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDR_free 5ffa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x5ffa, BIO_ADDR_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDR_hostname_string 6000 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6000, BIO_ADDR_hostname_string(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDR_new 6006 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6006, BIO_ADDR_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDR_path_string 600c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x600c, BIO_ADDR_path_string(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDR_rawaddress 6012 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6012, BIO_ADDR_rawaddress(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDR_rawmake 6018 2190805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6018, BIO_ADDR_rawmake(a0,d0,a1,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDR_rawport 601e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x601e, BIO_ADDR_rawport(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDR_service_string 6024 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6024, BIO_ADDR_service_string(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDRINFO_address 602a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x602a, BIO_ADDRINFO_address(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDRINFO_family 6030 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6030, BIO_ADDRINFO_family(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDRINFO_free 6036 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6036, BIO_ADDRINFO_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDRINFO_next 603c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x603c, BIO_ADDRINFO_next(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDRINFO_protocol 6042 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6042, BIO_ADDRINFO_protocol(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_ADDRINFO_socktype 6048 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6048, BIO_ADDRINFO_socktype(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_closesocket 604e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x604e, BIO_closesocket(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_connect 6054 18003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6054, BIO_connect(d0,a0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_listen 605a 18003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x605a, BIO_listen(d0,a0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_lookup 6060 a2109806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6060, BIO_lookup(a0,a1,d0,d1,d2,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_parse_hostserv 6066 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6066, BIO_parse_hostserv(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_s_secmem 606c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x606c, BIO_s_secmem())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_sock_info 6072 81003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6072, BIO_sock_info(d0,d1,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BIO_socket 6078 321004
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6078, BIO_socket(d0,d1,d2,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_abs_is_word 607e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x607e, BN_abs_is_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bn2binpad 6084 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6084, BN_bn2binpad(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_bn2lebinpad 608a 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x608a, BN_bn2lebinpad(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_CTX_secure_new 6090 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6090, BN_CTX_secure_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GENCB_free 6096 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6096, BN_GENCB_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GENCB_get_arg 609c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x609c, BN_GENCB_get_arg(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GENCB_new 60a2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60a2, BN_GENCB_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GENCB_set 60a8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60a8, BN_GENCB_set(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_GENCB_set_old 60ae a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60ae, BN_GENCB_set_old(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_generate_dsa_nonce 60b4 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60b4, BN_generate_dsa_nonce(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_get_flags 60ba 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60ba, BN_get_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_negative 60c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60c0, BN_is_negative(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_odd 60c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60c6, BN_is_odd(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_one 60cc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60cc, BN_is_one(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_word 60d2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60d2, BN_is_word(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_is_zero 60d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60d8, BN_is_zero(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_lebin2bn 60de 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60de, BN_lebin2bn(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_nist_mod_func 60e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60e4, BN_nist_mod_func(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_secure_new 60ea 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60ea, BN_secure_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_security_bits 60f0 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60f0, BN_security_bits(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_set_flags 60f6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60f6, BN_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_to_montgomery 60fc ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x60fc, BN_to_montgomery(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_with_flags 6102 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6102, BN_with_flags(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BN_zero_ex 6108 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6108, BN_zero_ex(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase BUF_MEM_new_ex 610e 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x610e, BUF_MEM_new_ex(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_CTX_get_method 6114 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6114, COMP_CTX_get_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_CTX_get_type 611a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x611a, COMP_CTX_get_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_get_name 6120 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6120, COMP_get_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase COMP_get_type 6126 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6126, COMP_get_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_clear_free 612c 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x612c, CRYPTO_clear_free(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_clear_realloc 6132 2910805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6132, CRYPTO_clear_realloc(a0,d0,d1,a1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_free_ex_index 6138 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6138, CRYPTO_free_ex_index(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_memdup 613e 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x613e, CRYPTO_memdup(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_secure_actual_size 6144 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6144, CRYPTO_secure_actual_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_secure_allocated 614a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x614a, CRYPTO_secure_allocated(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_secure_free 6150 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6150, CRYPTO_secure_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_secure_malloc 6156 18003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6156, CRYPTO_secure_malloc(d0,a0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_secure_malloc_done 615c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x615c, CRYPTO_secure_malloc_done())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_secure_malloc_init 6162 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6162, CRYPTO_secure_malloc_init(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_secure_malloc_initialized 6168 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6168, CRYPTO_secure_malloc_initialized())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_secure_used 616e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x616e, CRYPTO_secure_used())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_secure_zalloc 6174 18003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6174, CRYPTO_secure_zalloc(d0,a0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_set_mem_debug 617a 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x617a, CRYPTO_set_mem_debug(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_strndup 6180 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6180, CRYPTO_strndup(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_zalloc 6186 18003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6186, CRYPTO_zalloc(d0,a0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_atexit 618c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x618c, OPENSSL_atexit(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_cleanup 6192 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6192, OPENSSL_cleanup())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_init_crypto 6198 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6198, OPENSSL_init_crypto(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_INIT_free 619e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x619e, OPENSSL_INIT_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_INIT_new 61a4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61a4, OPENSSL_INIT_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_INIT_set_config_filename 61aa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61aa, OPENSSL_INIT_set_config_filename(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_strlcat 61b0 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61b0, OPENSSL_strlcat(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_strlcpy 61b6 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61b6, OPENSSL_strlcpy(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_strnlen 61bc 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61bc, OPENSSL_strnlen(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_thread_stop 61c2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61c2, OPENSSL_thread_stop())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OpenSSL_version 61c8 001
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61c8, OpenSSL_version(d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OpenSSL_version_num 61ce 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61ce, OpenSSL_version_num())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_bits 61d4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61d4, DH_bits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DH_security_bits 61da 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61da, DH_security_bits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DSA_security_bits 61e0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61e0, DSA_security_bits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get0_cofactor 61e6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61e6, EC_GROUP_get0_cofactor(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_get0_order 61ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61ec, EC_GROUP_get0_order(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_GROUP_order_bits 61f2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61f2, EC_GROUP_order_bits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get_default_method 61f8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61f8, EC_KEY_get_default_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get_ex_data 61fe 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x61fe, EC_KEY_get_ex_data(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_get_method 6204 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6204, EC_KEY_get_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_key2buf 620a a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x620a, EC_KEY_key2buf(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_METHOD_free 6210 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6210, EC_KEY_METHOD_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_METHOD_get_compute_key 6216 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6216, EC_KEY_METHOD_get_compute_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_METHOD_get_init 621c 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x621c, EC_KEY_METHOD_get_init(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_METHOD_get_keygen 6222 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6222, EC_KEY_METHOD_get_keygen(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_METHOD_get_sign 6228 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6228, EC_KEY_METHOD_get_sign(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_METHOD_get_verify 622e a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x622e, EC_KEY_METHOD_get_verify(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_METHOD_new 6234 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6234, EC_KEY_METHOD_new(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_METHOD_set_compute_key 623a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x623a, EC_KEY_METHOD_set_compute_key(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_METHOD_set_init 6240 210ba9807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6240, EC_KEY_METHOD_set_init(a0,a1,a2,a3,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_METHOD_set_keygen 6246 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6246, EC_KEY_METHOD_set_keygen(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_METHOD_set_sign 624c ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x624c, EC_KEY_METHOD_set_sign(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_METHOD_set_verify 6252 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6252, EC_KEY_METHOD_set_verify(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_new_method 6258 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6258, EC_KEY_new_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_oct2key 625e a09804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x625e, EC_KEY_oct2key(a0,a1,d0,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_oct2priv 6264 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6264, EC_KEY_oct2priv(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_OpenSSL 626a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x626a, EC_KEY_OpenSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_priv2buf 6270 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6270, EC_KEY_priv2buf(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_priv2oct 6276 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6276, EC_KEY_priv2oct(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_default_method 627c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x627c, EC_KEY_set_default_method(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_ex_data 6282 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6282, EC_KEY_set_ex_data(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_KEY_set_method 6288 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6288, EC_KEY_set_method(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EC_POINT_point2buf 628e ba09805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x628e, EC_POINT_point2buf(a0,a1,d0,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ECDSA_SIG_get0 6294 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6294, ECDSA_SIG_get0(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_default_EC 629a 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x629a, ENGINE_get_default_EC())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_get_EC 62a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62a0, ENGINE_get_EC(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_all_EC 62a6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62a6, ENGINE_register_all_EC())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_register_EC 62ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62ac, ENGINE_register_EC(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_default_EC 62b2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62b2, ENGINE_set_default_EC(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_set_EC 62b8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62b8, ENGINE_set_EC(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ENGINE_unregister_EC 62be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62be, ENGINE_unregister_EC(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_ocb 62c4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62c4, EVP_aes_128_ocb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_128_wrap_pad 62ca 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62ca, EVP_aes_128_wrap_pad())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_ocb 62d0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62d0, EVP_aes_192_ocb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_192_wrap_pad 62d6 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62d6, EVP_aes_192_wrap_pad())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_ocb 62dc 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62dc, EVP_aes_256_ocb())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_aes_256_wrap_pad 62e2 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62e2, EVP_aes_256_wrap_pad())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_128_ctr 62e8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62e8, EVP_camellia_128_ctr())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_192_ctr 62ee 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62ee, EVP_camellia_192_ctr())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_camellia_256_ctr 62f4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62f4, EVP_camellia_256_ctr())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_chacha20 62fa 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x62fa, EVP_chacha20())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_chacha20_poly1305 6300 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6300, EVP_chacha20_poly1305())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_buf_noconst 6306 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6306, EVP_CIPHER_CTX_buf_noconst(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_cipher_data 630c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x630c, EVP_CIPHER_CTX_cipher_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_encrypting 6312 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6312, EVP_CIPHER_CTX_encrypting(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_iv 6318 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6318, EVP_CIPHER_CTX_iv(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_iv_noconst 631e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x631e, EVP_CIPHER_CTX_iv_noconst(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_num 6324 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6324, EVP_CIPHER_CTX_num(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_original_iv 632a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x632a, EVP_CIPHER_CTX_original_iv(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_reset 6330 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6330, EVP_CIPHER_CTX_reset(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_CTX_set_num 6336 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6336, EVP_CIPHER_CTX_set_num(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_impl_ctx_size 633c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x633c, EVP_CIPHER_impl_ctx_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_dup 6342 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6342, EVP_CIPHER_meth_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_free 6348 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6348, EVP_CIPHER_meth_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_get_cleanup 634e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x634e, EVP_CIPHER_meth_get_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_get_ctrl 6354 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6354, EVP_CIPHER_meth_get_ctrl(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_get_do_cipher 635a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x635a, EVP_CIPHER_meth_get_do_cipher(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_get_get_asn1_params 6360 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6360, EVP_CIPHER_meth_get_get_asn1_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_get_init 6366 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6366, EVP_CIPHER_meth_get_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_get_set_asn1_params 636c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x636c, EVP_CIPHER_meth_get_set_asn1_params(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_new 6372 21003
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6372, EVP_CIPHER_meth_new(d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_set_cleanup 6378 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6378, EVP_CIPHER_meth_set_cleanup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_set_ctrl 637e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x637e, EVP_CIPHER_meth_set_ctrl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_set_do_cipher 6384 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6384, EVP_CIPHER_meth_set_do_cipher(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_set_flags 638a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x638a, EVP_CIPHER_meth_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_set_get_asn1_params 6390 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6390, EVP_CIPHER_meth_set_get_asn1_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_set_impl_ctx_size 6396 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6396, EVP_CIPHER_meth_set_impl_ctx_size(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_set_init 639c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x639c, EVP_CIPHER_meth_set_init(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_set_iv_length 63a2 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63a2, EVP_CIPHER_meth_set_iv_length(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_CIPHER_meth_set_set_asn1_params 63a8 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63a8, EVP_CIPHER_meth_set_set_asn1_params(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_ENCODE_CTX_free 63ae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63ae, EVP_ENCODE_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_ENCODE_CTX_new 63b4 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63b4, EVP_ENCODE_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_ENCODE_CTX_num 63ba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63ba, EVP_ENCODE_CTX_num(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_md5_sha1 63c0 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63c0, EVP_md5_sha1())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_ctrl 63c6 910804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63c6, EVP_MD_CTX_ctrl(a0,d0,d1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_free 63cc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63cc, EVP_MD_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_md_data 63d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63d2, EVP_MD_CTX_md_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_new 63d8 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63d8, EVP_MD_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_pkey_ctx 63de 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63de, EVP_MD_CTX_pkey_ctx(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_reset 63e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63e4, EVP_MD_CTX_reset(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_set_update_fn 63ea 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63ea, EVP_MD_CTX_set_update_fn(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_CTX_update_fn 63f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63f0, EVP_MD_CTX_update_fn(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_dup 63f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63f6, EVP_MD_meth_dup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_free 63fc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x63fc, EVP_MD_meth_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_get_app_datasize 6402 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6402, EVP_MD_meth_get_app_datasize(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_get_cleanup 6408 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6408, EVP_MD_meth_get_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_get_copy 640e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x640e, EVP_MD_meth_get_copy(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_get_ctrl 6414 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6414, EVP_MD_meth_get_ctrl(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_get_final 641a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x641a, EVP_MD_meth_get_final(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_get_flags 6420 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6420, EVP_MD_meth_get_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_get_init 6426 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6426, EVP_MD_meth_get_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_get_input_blocksize 642c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x642c, EVP_MD_meth_get_input_blocksize(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_get_result_size 6432 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6432, EVP_MD_meth_get_result_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_get_update 6438 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6438, EVP_MD_meth_get_update(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_new 643e 1002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x643e, EVP_MD_meth_new(d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_set_app_datasize 6444 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6444, EVP_MD_meth_set_app_datasize(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_set_cleanup 644a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x644a, EVP_MD_meth_set_cleanup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_set_copy 6450 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6450, EVP_MD_meth_set_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_set_ctrl 6456 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6456, EVP_MD_meth_set_ctrl(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_set_final 645c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x645c, EVP_MD_meth_set_final(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_set_flags 6462 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6462, EVP_MD_meth_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_set_init 6468 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6468, EVP_MD_meth_set_init(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_set_input_blocksize 646e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x646e, EVP_MD_meth_set_input_blocksize(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_set_result_size 6474 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6474, EVP_MD_meth_set_result_size(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_MD_meth_set_update 647a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x647a, EVP_MD_meth_set_update(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PBE_get 6480 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6480, EVP_PBE_get(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PBE_scrypt 6486 ba54321908010
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6486, EVP_PBE_scrypt(a0,d0,a1,d1,d2,d3,d4,d5,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_asn1_set_security_bits 648c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x648c, EVP_PKEY_asn1_set_security_bits(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get0_DH 6492 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6492, EVP_PKEY_get0_DH(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get0_DSA 6498 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6498, EVP_PKEY_get0_DSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get0_EC_KEY 649e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x649e, EVP_PKEY_get0_EC_KEY(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_get0_RSA 64a4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64a4, EVP_PKEY_get0_RSA(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_cleanup 64aa 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64aa, EVP_PKEY_meth_get_cleanup(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_copy 64b0 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64b0, EVP_PKEY_meth_get_copy(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_ctrl 64b6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64b6, EVP_PKEY_meth_get_ctrl(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_decrypt 64bc a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64bc, EVP_PKEY_meth_get_decrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_derive 64c2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64c2, EVP_PKEY_meth_get_derive(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_encrypt 64c8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64c8, EVP_PKEY_meth_get_encrypt(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_init 64ce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64ce, EVP_PKEY_meth_get_init(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_keygen 64d4 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64d4, EVP_PKEY_meth_get_keygen(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_paramgen 64da a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64da, EVP_PKEY_meth_get_paramgen(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_sign 64e0 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64e0, EVP_PKEY_meth_get_sign(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_signctx 64e6 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64e6, EVP_PKEY_meth_get_signctx(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_verify 64ec a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64ec, EVP_PKEY_meth_get_verify(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_verify_recover 64f2 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64f2, EVP_PKEY_meth_get_verify_recover(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_meth_get_verifyctx 64f8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64f8, EVP_PKEY_meth_get_verifyctx(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_security_bits 64fe 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x64fe, EVP_PKEY_security_bits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase EVP_PKEY_up_ref 6504 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6504, EVP_PKEY_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_v2_scrypt_keyivgen 650a 1dba09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x650a, PKCS5_v2_scrypt_keyivgen(a0,a1,d0,a2,a3,a5,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_CTX_free 6510 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6510, HMAC_CTX_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_CTX_new 6516 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6516, HMAC_CTX_new())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_CTX_reset 651c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x651c, HMAC_CTX_reset(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase HMAC_size 6522 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6522, HMAC_size(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_error 6528 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6528, lh_error(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_get_down_load 652e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x652e, lh_get_down_load(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase lh_set_down_load 6534 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6534, lh_set_down_load(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_128_unwrap_pad 653a 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x653a, CRYPTO_128_unwrap_pad(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_128_wrap_pad 6540 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6540, CRYPTO_128_wrap_pad(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ocb128_aad 6546 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6546, CRYPTO_ocb128_aad(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ocb128_cleanup 654c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x654c, CRYPTO_ocb128_cleanup(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ocb128_copy_ctx 6552 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6552, CRYPTO_ocb128_copy_ctx(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ocb128_decrypt 6558 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6558, CRYPTO_ocb128_decrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ocb128_encrypt 655e 0a9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x655e, CRYPTO_ocb128_encrypt(a0,a1,a2,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ocb128_finish 6564 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6564, CRYPTO_ocb128_finish(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ocb128_init 656a 210a9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x656a, CRYPTO_ocb128_init(a0,a1,a2,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ocb128_new 6570 2109805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6570, CRYPTO_ocb128_new(a0,a1,d0,d1,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ocb128_setiv 6576 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6576, CRYPTO_ocb128_setiv(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase CRYPTO_ocb128_tag 657c 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x657c, CRYPTO_ocb128_tag(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_get0_data 6582 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6582, OBJ_get0_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OBJ_length 6588 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6588, OBJ_length(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_resp_get0_produced_at 658e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x658e, OCSP_resp_get0_produced_at(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_resp_get0_signature 6594 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6594, OCSP_resp_get0_signature(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OCSP_SINGLERESP_get0_id 659a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x659a, OCSP_SINGLERESP_get0_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_get0_mac 65a0 dba9805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65a0, PKCS12_get0_mac(a0,a1,a2,a3,a5))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_mac_present 65a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65a6, PKCS12_mac_present(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_create0_p8inf 65ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65ac, PKCS12_SAFEBAG_create0_p8inf(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_create0_pkcs8 65b2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65b2, PKCS12_SAFEBAG_create0_pkcs8(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_create_cert 65b8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65b8, PKCS12_SAFEBAG_create_cert(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_create_crl 65be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65be, PKCS12_SAFEBAG_create_crl(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_create_pkcs8_encrypt 65c4 a32918007
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65c4, PKCS12_SAFEBAG_create_pkcs8_encrypt(d0,a0,d1,a1,d2,d3,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_get0_attr 65ca 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65ca, PKCS12_SAFEBAG_get0_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_get0_p8inf 65d0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65d0, PKCS12_SAFEBAG_get0_p8inf(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_get0_pkcs8 65d6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65d6, PKCS12_SAFEBAG_get0_pkcs8(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_get0_safes 65dc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65dc, PKCS12_SAFEBAG_get0_safes(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_get0_type 65e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65e2, PKCS12_SAFEBAG_get0_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_get1_cert 65e8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65e8, PKCS12_SAFEBAG_get1_cert(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_get1_crl 65ee 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65ee, PKCS12_SAFEBAG_get1_crl(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_get_bag_nid 65f4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65f4, PKCS12_SAFEBAG_get_bag_nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS12_SAFEBAG_get_nid 65fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x65fa, PKCS12_SAFEBAG_get_nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_get_attr 6600 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6600, PKCS8_get_attr(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS8_set0_pbe 6606 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6606, PKCS8_set0_pbe(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RAND_OpenSSL 660c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x660c, RAND_OpenSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_bits 6612 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6612, RSA_bits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_check_key_ex 6618 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6618, RSA_check_key_ex(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_PKCS1_OpenSSL 661e 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x661e, RSA_PKCS1_OpenSSL())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_security_bits 6624 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6624, RSA_security_bits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_X931_derive_ex 662a 76543210dba98013
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x662a, RSA_X931_derive_ex(a0,a1,a2,a3,a5,d0,d1,d2,d3,d4,d5,d6,d7))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase RSA_X931_generate_key_ex 6630 190804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6630, RSA_X931_generate_key_ex(a0,d0,a1,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_CONF_set_signer_digest 6636 ba9804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6636, TS_CONF_set_signer_digest(a0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_RESP_CTX_set_signer_digest 663c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x663c, TS_RESP_CTX_set_signer_digest(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_STATUS_INFO_get0_failure_info 6642 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6642, TS_STATUS_INFO_get0_failure_info(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_STATUS_INFO_get0_status 6648 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6648, TS_STATUS_INFO_get0_status(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_STATUS_INFO_set_status 664e 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x664e, TS_STATUS_INFO_set_status(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_add_flags 6654 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6654, TS_VERIFY_CTX_add_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_set_data 665a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x665a, TS_VERIFY_CTX_set_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_set_flags 6660 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6660, TS_VERIFY_CTX_set_flags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_set_imprint 6666 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6666, TS_VERIFY_CTX_set_imprint(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TS_VERIFY_CTX_set_store 666c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x666c, TS_VERIFY_CTX_set_store(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_re_X509_CRL_tbs 6672 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6672, i2d_re_X509_CRL_tbs(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2d_re_X509_REQ_tbs 6678 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6678, i2d_re_X509_REQ_tbs(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase PKCS5_pbe2_set_scrypt 667e 221a09807
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x667e, PKCS5_pbe2_set_scrypt(a0,a1,d0,a2,d1,d2,d2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_aux_print 6684 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6684, X509_aux_print(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get0_extensions 668a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x668a, X509_CRL_get0_extensions(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get0_signature 6690 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6690, X509_CRL_get0_signature(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_issuer 6696 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6696, X509_CRL_get_issuer(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_lastUpdate 669c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x669c, X509_CRL_get_lastUpdate(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_nextUpdate 66a2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66a2, X509_CRL_get_nextUpdate(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_REVOKED 66a8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66a8, X509_CRL_get_REVOKED(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_signature_nid 66ae 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66ae, X509_CRL_get_signature_nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_get_version 66b4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66b4, X509_CRL_get_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_CRL_up_ref 66ba 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66ba, X509_CRL_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get0_extensions 66c0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66c0, X509_get0_extensions(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get0_pubkey 66c6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66c6, X509_get0_pubkey(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get0_reject_objects 66cc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66cc, X509_get0_reject_objects(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get0_tbs_sigalg 66d2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66d2, X509_get0_tbs_sigalg(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get0_trust_objects 66d8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66d8, X509_get0_trust_objects(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get0_uids 66de a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66de, X509_get0_uids(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_notAfter 66e4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66e4, X509_get_notAfter(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_notBefore 66ea 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66ea, X509_get_notBefore(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_signature_type 66f0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66f0, X509_get_signature_type(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_version 66f6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66f6, X509_get_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_X509_PUBKEY 66fc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x66fc, X509_get_X509_PUBKEY(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_ENTRY_set 6702 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6702, X509_NAME_ENTRY_set(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_NAME_get0_der 6708 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6708, X509_NAME_get0_der(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_PUBKEY_get0 670e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x670e, X509_PUBKEY_get0(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get0_signature 6714 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6714, X509_REQ_get0_signature(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_signature_nid 671a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x671a, X509_REQ_get_signature_nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_subject_name 6720 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6720, X509_REQ_get_subject_name(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_version 6726 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6726, X509_REQ_get_version(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REQ_get_X509_PUBKEY 672c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x672c, X509_REQ_get_X509_PUBKEY(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get0_extensions 6732 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6732, X509_REVOKED_get0_extensions(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get0_revocationDate 6738 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6738, X509_REVOKED_get0_revocationDate(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_REVOKED_get0_serialNumber 673e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x673e, X509_REVOKED_get0_serialNumber(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_trusted 6744 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6744, X509_trusted(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_up_ref 674a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x674a, X509_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_get_num_untrusted 6750 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6750, X509_STORE_CTX_get_num_untrusted(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_STORE_CTX_set0_dane 6756 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6756, X509_STORE_CTX_set0_dane(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_VERIFY_PARAM_move_peername 675c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x675c, X509_VERIFY_PARAM_move_peername(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase ASIdentifiers_free 6762 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6762, ASIdentifiers_free(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase i2s_ASN1_IA5STRING 6768 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6768, i2s_ASN1_IA5STRING(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase s2i_ASN1_IA5STRING 676e 99803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x676e, s2i_ASN1_IA5STRING(a0,a1,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_addr_add_inherit 6774 90803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6774, v3_addr_add_inherit(a0,d0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_addr_add_prefix 677a 1a90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x677a, v3_addr_add_prefix(a0,d0,a1,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_addr_add_range 6780 ba90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6780, v3_addr_add_range(a0,d0,a1,a2,a3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_addr_canonize 6786 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6786, v3_addr_canonize(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_addr_get_afi 678c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x678c, v3_addr_get_afi(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_addr_get_range 6792 1a90805
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6792, v3_addr_get_range(a0,d0,a1,a2,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_addr_inherits 6798 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6798, v3_addr_inherits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_addr_is_canonical 679e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x679e, v3_addr_is_canonical(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_addr_subset 67a4 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67a4, v3_addr_subset(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_addr_validate_path 67aa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67aa, v3_addr_validate_path(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_asid_add_id_or_range 67b0 a90804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67b0, v3_asid_add_id_or_range(a0,d0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_asid_add_inherit 67b6 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67b6, v3_asid_add_inherit(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_asid_canonize 67bc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67bc, v3_asid_canonize(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_asid_inherits 67c2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67c2, v3_asid_inherits(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_asid_is_canonical 67c8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67c8, v3_asid_is_canonical(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_asid_subset 67ce 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67ce, v3_asid_subset(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase v3_asid_validate_path 67d4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67d4, v3_asid_validate_path(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get0_subject_key_id 67da 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67da, X509_get0_subject_key_id(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_extended_key_usage 67e0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67e0, X509_get_extended_key_usage(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_extension_flags 67e6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67e6, X509_get_extension_flags(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase X509_get_key_usage 67ec 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67ec, X509_get_key_usage(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase DTLSv1_listen 67f2 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67f2, DTLSv1_listen(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase OPENSSL_init_ssl 67f8 8002
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67f8, OPENSSL_init_ssl(d0,a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_add1_host 67fe 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x67fe, SSL_add1_host(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_add_ssl_module 6804 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6804, SSL_add_ssl_module())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_cipher_nid 680a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x680a, SSL_CIPHER_get_cipher_nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CIPHER_get_digest_nid 6810 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6810, SSL_CIPHER_get_digest_nid(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_clear_options 6816 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6816, SSL_clear_options(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_config 681c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x681c, SSL_config(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_clear_options 6822 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6822, SSL_CTX_clear_options(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_config 6828 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6828, SSL_CTX_config(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_dane_enable 682e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x682e, SSL_CTX_dane_enable(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_dane_mtype_set 6834 109804
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6834, SSL_CTX_dane_mtype_set(a0,a1,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get0_security_ex_data 683a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x683a, SSL_CTX_get0_security_ex_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_options 6840 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6840, SSL_CTX_get_options(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_security_callback 6846 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6846, SSL_CTX_get_security_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_get_security_level 684c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x684c, SSL_CTX_get_security_level(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set0_security_ex_data 6852 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6852, SSL_CTX_set0_security_ex_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_default_verify_dir 6858 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6858, SSL_CTX_set_default_verify_dir(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_default_verify_file 685e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x685e, SSL_CTX_set_default_verify_file(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_not_resumable_session_callback 6864 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6864, SSL_CTX_set_not_resumable_session_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_options 686a 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x686a, SSL_CTX_set_options(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_security_callback 6870 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6870, SSL_CTX_set_security_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_set_security_level 6876 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6876, SSL_CTX_set_security_level(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_CTX_up_ref 687c 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x687c, SSL_CTX_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_dane_enable 6882 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6882, SSL_dane_enable(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_dane_tlsa_add 6888 39210806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6888, SSL_dane_tlsa_add(a0,d0,d1,d2,a1,d3))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get0_dane 688e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x688e, SSL_get0_dane(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get0_dane_authority 6894 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6894, SSL_get0_dane_authority(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get0_dane_tlsa 689a 10ba9806
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x689a, SSL_get0_dane_tlsa(a0,a1,a2,a3,d0,d1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get0_peername 68a0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68a0, SSL_get0_peername(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get0_security_ex_data 68a6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68a6, SSL_get0_security_ex_data(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_async_wait_fd 68ac 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68ac, SSL_get_async_wait_fd(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_client_random 68b2 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68b2, SSL_get_client_random(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_options 68b8 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68b8, SSL_get_options(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_security_callback 68be 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68be, SSL_get_security_callback(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_security_level 68c4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68c4, SSL_get_security_level(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_server_random 68ca 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68ca, SSL_get_server_random(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_get_state 68d0 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68d0, SSL_get_state(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_in_before 68d6 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68d6, SSL_in_before(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_in_init 68dc 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68dc, SSL_in_init(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_is_init_finished 68e2 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68e2, SSL_is_init_finished(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get0_ticket 68e8 a9803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68e8, SSL_SESSION_get0_ticket(a0,a1,a2))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_master_key 68ee 09803
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68ee, SSL_SESSION_get_master_key(a0,a1,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_get_ticket_lifetime_hint 68f4 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68f4, SSL_SESSION_get_ticket_lifetime_hint(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_has_ticket 68fa 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x68fa, SSL_SESSION_has_ticket(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_SESSION_print_keylog 6900 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6900, SSL_SESSION_print_keylog(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_session_reused 6906 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6906, SSL_session_reused(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set0_security_ex_data 690c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x690c, SSL_set0_security_ex_data(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set1_host 6912 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6912, SSL_set1_host(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_default_passwd_cb 6918 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6918, SSL_set_default_passwd_cb(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_default_passwd_cb_userdata 691e 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x691e, SSL_set_default_passwd_cb_userdata(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_hostflags 6924 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6924, SSL_set_hostflags(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_not_resumable_session_callback 692a 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x692a, SSL_set_not_resumable_session_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_options 6930 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6930, SSL_set_options(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_rbio 6936 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6936, SSL_set_rbio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_security_callback 693c 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x693c, SSL_set_security_callback(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_security_level 6942 0802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6942, SSL_set_security_level(a0,d0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_set_wbio 6948 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6948, SSL_set_wbio(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_up_ref 694e 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x694e, SSL_up_ref(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_use_certificate_chain_file 6954 9802
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6954, SSL_use_certificate_chain_file(a0,a1))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase SSL_waiting_for_async 695a 801
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x695a, SSL_waiting_for_async(a0))
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLS_client_method 6960 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6960, TLS_client_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLS_method 6966 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x6966, TLS_method())
#endif /* __CLIB_PRAGMA_AMICALL */
#ifdef __CLIB_PRAGMA_LIBCALL
 #pragma libcall AmiSSLBase TLS_server_method 696c 00
#endif /* __CLIB_PRAGMA_LIBCALL */
#ifdef __CLIB_PRAGMA_AMICALL
 #pragma amicall(AmiSSLBase, 0x696c, TLS_server_method())
#endif /* __CLIB_PRAGMA_AMICALL */

#endif /* PRAGMAS_AMISSL_PRAGMAS_H */

/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2009, 2010 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ANY = 258,
     IP = 259,
     IF = 260,
     MAC = 261,
     MPLS = 262,
     TOS = 263,
     DIR = 264,
     FLAGS = 265,
     PROTO = 266,
     MASK = 267,
     HOSTNAME = 268,
     NET = 269,
     PORT = 270,
     FWDSTAT = 271,
     IN = 272,
     OUT = 273,
     SRC = 274,
     DST = 275,
     EQ = 276,
     LT = 277,
     GT = 278,
     PREV = 279,
     NEXT = 280,
     NUMBER = 281,
     STRING = 282,
     IDENT = 283,
     PORTNUM = 284,
     ICMP_TYPE = 285,
     ICMP_CODE = 286,
     ENGINE_TYPE = 287,
     ENGINE_ID = 288,
     AS = 289,
     PACKETS = 290,
     BYTES = 291,
     FLOWS = 292,
     PPS = 293,
     BPS = 294,
     BPP = 295,
     DURATION = 296,
     NOT = 297,
     END = 298,
     IPV4 = 299,
     IPV6 = 300,
     BGPNEXTHOP = 301,
     ROUTER = 302,
     VLAN = 303,
     CLIENT = 304,
     SERVER = 305,
     APP = 306,
     LATENCY = 307,
     SYSID = 308,
     ASA = 309,
     REASON = 310,
     DENIED = 311,
     XEVENT = 312,
     XIP = 313,
     XNET = 314,
     XPORT = 315,
     INGRESS = 316,
     EGRESS = 317,
     ACL = 318,
     ACE = 319,
     XACE = 320,
     NAT = 321,
     ADD = 322,
     EVENT = 323,
     VRF = 324,
     NPORT = 325,
     NIP = 326,
     OR = 327,
     AND = 328,
     NEGATE = 329
   };
#endif
/* Tokens.  */
#define ANY 258
#define IP 259
#define IF 260
#define MAC 261
#define MPLS 262
#define TOS 263
#define DIR 264
#define FLAGS 265
#define PROTO 266
#define MASK 267
#define HOSTNAME 268
#define NET 269
#define PORT 270
#define FWDSTAT 271
#define IN 272
#define OUT 273
#define SRC 274
#define DST 275
#define EQ 276
#define LT 277
#define GT 278
#define PREV 279
#define NEXT 280
#define NUMBER 281
#define STRING 282
#define IDENT 283
#define PORTNUM 284
#define ICMP_TYPE 285
#define ICMP_CODE 286
#define ENGINE_TYPE 287
#define ENGINE_ID 288
#define AS 289
#define PACKETS 290
#define BYTES 291
#define FLOWS 292
#define PPS 293
#define BPS 294
#define BPP 295
#define DURATION 296
#define NOT 297
#define END 298
#define IPV4 299
#define IPV6 300
#define BGPNEXTHOP 301
#define ROUTER 302
#define VLAN 303
#define CLIENT 304
#define SERVER 305
#define APP 306
#define LATENCY 307
#define SYSID 308
#define ASA 309
#define REASON 310
#define DENIED 311
#define XEVENT 312
#define XIP 313
#define XNET 314
#define XPORT 315
#define INGRESS 316
#define EGRESS 317
#define ACL 318
#define ACE 319
#define XACE 320
#define NAT 321
#define ADD 322
#define EVENT 323
#define VRF 324
#define NPORT 325
#define NIP 326
#define OR 327
#define AND 328
#define NEGATE 329




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 97 "grammar.y"

	uint64_t		value;
	char			*s;
	FilterParam_t	param;
	void			*list;



/* Line 1685 of yacc.c  */
#line 208 "grammar.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;



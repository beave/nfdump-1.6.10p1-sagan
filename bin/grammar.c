/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 41 "grammar.y"


#include "config.h"

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>

#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif

#include "nf_common.h"
#include "rbtree.h"
#include "nfdump.h"
#include "nffile.h"
#include "nftree.h"
#include "ipconv.h"
#include "util.h"

/*
 * function prototypes
 */
static void  yyerror(char *msg);

static uint32_t ChainHosts(uint64_t *offsets, uint64_t *hostlist, int num_records, int type);

static uint64_t VerifyMac(char *s);

enum { DIR_UNSPEC = 1, 
	   SOURCE, DESTINATION, SOURCE_AND_DESTINATION, SOURCE_OR_DESTINATION, 
	   DIR_IN, DIR_OUT, 
	   IN_SRC, IN_DST, OUT_SRC, OUT_DST, 
	   ADJ_PREV, ADJ_NEXT };

/* var defs */
extern int 			lineno;
extern char 		*yytext;
extern uint64_t		*IPstack;
extern uint32_t	StartNode;
extern uint16_t	Extended;
extern int (*FilterEngine)(uint32_t *);
extern char	*FilterFilename;

static uint32_t num_ip;

char yyerror_buff[256];

#define MPLSMAX 0x00ffffff


/* Line 189 of yacc.c  */
#line 129 "grammar.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 97 "grammar.y"

	uint64_t		value;
	char			*s;
	FilterParam_t	param;
	void			*list;



/* Line 214 of yacc.c  */
#line 322 "grammar.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 334 "grammar.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  87
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  208

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      81,    82,    74,    72,    80,     2,     2,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    73,    75,    76
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    13,    15,    18,
      21,    26,    31,    35,    39,    43,    47,    51,    56,    60,
      63,    67,    74,    78,    85,    89,    93,    98,   103,   108,
     111,   116,   123,   126,   129,   133,   137,   141,   146,   151,
     156,   161,   165,   171,   176,   181,   185,   190,   195,   200,
     204,   209,   216,   220,   225,   231,   235,   239,   243,   248,
     252,   255,   258,   261,   264,   266,   270,   273,   277,   282,
     284,   287,   291,   292,   294,   296,   298,   299,   301,   303,
     307,   311,   315,   319,   321,   323,   326,   329,   332,   335,
     337,   339,   341,   343,   345,   347,   349,   351,   355,   359,
     362
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      84,     0,    -1,    -1,    92,    -1,     3,    -1,    28,    27,
      -1,    44,    -1,    45,    -1,    11,    26,    -1,    11,    27,
      -1,    89,    35,    88,    26,    -1,    89,    36,    88,    26,
      -1,    37,    88,    26,    -1,    38,    88,    26,    -1,    39,
      88,    26,    -1,    40,    88,    26,    -1,    41,    88,    26,
      -1,    89,     8,    88,    26,    -1,    10,    88,    26,    -1,
      10,    27,    -1,    89,     4,    27,    -1,    89,     4,    17,
      77,    86,    78,    -1,    25,     4,    27,    -1,    25,     4,
      17,    77,    86,    78,    -1,    46,     4,    27,    -1,    47,
       4,    27,    -1,    49,    52,    88,    26,    -1,    50,    52,
      88,    26,    -1,    51,    52,    88,    26,    -1,    53,    26,
      -1,    89,    15,    88,    26,    -1,    89,    15,    17,    77,
      87,    78,    -1,    30,    26,    -1,    31,    26,    -1,    32,
      88,    26,    -1,    33,    88,    26,    -1,    54,    68,    55,
      -1,    54,    68,    88,    26,    -1,    54,    68,    56,    90,
      -1,    54,    68,    56,    27,    -1,    54,    57,    88,    26,
      -1,    89,    58,    27,    -1,    89,    59,    27,    79,    26,
      -1,    89,    60,    88,    26,    -1,    90,    91,    88,    26,
      -1,    66,    68,    55,    -1,    66,    68,    88,    26,    -1,
      61,    69,    88,    26,    -1,    89,    70,    88,    26,    -1,
      89,    71,    27,    -1,    89,    34,    88,    26,    -1,    89,
      34,    17,    77,    87,    78,    -1,    89,    12,    26,    -1,
      89,    14,    27,    27,    -1,    89,    14,    27,    79,    26,
      -1,    89,     5,    26,    -1,    89,    48,    26,    -1,    89,
       6,    27,    -1,     7,    27,    88,    26,    -1,     7,     3,
      26,    -1,    16,    26,    -1,    16,    27,    -1,     9,    26,
      -1,     9,    90,    -1,    27,    -1,    27,    79,    26,    -1,
      86,    27,    -1,    86,    80,    27,    -1,    86,    27,    79,
      26,    -1,    26,    -1,    87,    26,    -1,    87,    80,    26,
      -1,    -1,    21,    -1,    22,    -1,    23,    -1,    -1,    19,
      -1,    20,    -1,    19,    73,    20,    -1,    20,    73,    19,
      -1,    19,    75,    20,    -1,    20,    75,    19,    -1,    17,
      -1,    18,    -1,    17,    19,    -1,    17,    20,    -1,    18,
      19,    -1,    18,    20,    -1,    24,    -1,    25,    -1,    61,
      -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,    85,
      -1,    92,    73,    92,    -1,    92,    75,    92,    -1,    42,
      92,    -1,    81,    92,    82,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   121,   121,   122,   127,   131,   141,   146,   151,   167,
     182,   200,   217,   221,   225,   229,   233,   237,   269,   277,
     304,   350,   378,   405,   411,   438,   465,   469,   473,   477,
     485,   518,   582,   598,   614,   623,   632,   656,   669,   689,
     713,   726,   777,   867,   905,   945,   963,   976,   989,  1027,
    1078,  1117,  1181,  1214,  1304,  1389,  1415,  1448,  1510,  1665,
    1679,  1687,  1698,  1707,  1723,  1766,  1820,  1851,  1883,  1927,
    1948,  1959,  1973,  1974,  1975,  1976,  1980,  1981,  1982,  1983,
    1984,  1985,  1986,  1987,  1988,  1989,  1990,  1991,  1992,  1993,
    1994,  1997,  1998,  2001,  2002,  2003,  2006,  2007,  2008,  2009,
    2010
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ANY", "IP", "IF", "MAC", "MPLS", "TOS",
  "DIR", "FLAGS", "PROTO", "MASK", "HOSTNAME", "NET", "PORT", "FWDSTAT",
  "IN", "OUT", "SRC", "DST", "EQ", "LT", "GT", "PREV", "NEXT", "NUMBER",
  "STRING", "IDENT", "PORTNUM", "ICMP_TYPE", "ICMP_CODE", "ENGINE_TYPE",
  "ENGINE_ID", "AS", "PACKETS", "BYTES", "FLOWS", "PPS", "BPS", "BPP",
  "DURATION", "NOT", "END", "IPV4", "IPV6", "BGPNEXTHOP", "ROUTER", "VLAN",
  "CLIENT", "SERVER", "APP", "LATENCY", "SYSID", "ASA", "REASON", "DENIED",
  "XEVENT", "XIP", "XNET", "XPORT", "INGRESS", "EGRESS", "ACL", "ACE",
  "XACE", "NAT", "ADD", "EVENT", "VRF", "NPORT", "NIP", "'+'", "OR", "'*'",
  "AND", "NEGATE", "'['", "']'", "'/'", "','", "'('", "')'", "$accept",
  "prog", "term", "iplist", "ullist", "comp", "dqual", "inout", "acl",
  "expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,    43,   327,    42,   328,   329,    91,    93,    47,
      44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    86,    86,    86,    86,    86,    87,
      87,    87,    88,    88,    88,    88,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    90,    90,    91,    91,    91,    92,    92,    92,    92,
      92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     2,     2,
       4,     4,     3,     3,     3,     3,     3,     4,     3,     2,
       3,     6,     3,     6,     3,     3,     4,     4,     4,     2,
       4,     6,     2,     2,     3,     3,     3,     4,     4,     4,
       4,     3,     5,     4,     4,     3,     4,     4,     4,     3,
       4,     6,     3,     4,     5,     3,     3,     3,     4,     3,
       2,     2,     2,     2,     1,     3,     2,     3,     4,     1,
       2,     3,     0,     1,     1,     1,     0,     1,     1,     3,
       3,     3,     3,     1,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      76,     4,     0,     0,    72,     0,     0,    83,    84,    77,
      78,    89,    90,     0,     0,     0,    72,    72,    72,    72,
      72,    72,    72,    76,     6,     7,     0,     0,     0,     0,
       0,     0,     0,    91,    92,     0,    76,     0,    96,     0,
       0,     3,     0,    72,    62,    91,    63,    73,    74,    75,
      19,     0,     8,     9,    60,    61,    85,    86,    87,    88,
       0,     0,     0,     0,     0,     5,    32,    33,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,    72,    72,
      72,    29,    72,    72,    72,    72,     0,     1,     0,     0,
       0,    72,     0,     0,    72,    72,    72,    72,     0,     0,
       0,    72,    72,     0,    93,    94,    95,    72,    76,    76,
      59,     0,    18,    79,    81,    80,    82,     0,    22,    34,
      35,    12,    13,    14,    15,    16,    24,    25,     0,     0,
       0,     0,    36,     0,     0,     0,    45,     0,   100,     0,
      20,    55,    57,     0,    52,     0,     0,     0,     0,     0,
       0,     0,    56,    41,     0,     0,     0,    49,     0,    97,
      98,    58,     0,    26,    27,    28,    40,    39,    38,    37,
      47,    46,     0,    17,    53,     0,     0,    30,     0,    50,
      10,    11,     0,    43,    48,    44,    64,     0,     0,    54,
      69,     0,     0,    42,     0,    66,    23,     0,    21,    70,
      31,     0,    51,    65,     0,    67,    71,    68
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    37,    38,   187,   191,    51,    39,    40,   107,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -45
static const yytype_int16 yypact[] =
{
      96,   -45,     8,   -16,    15,    29,    71,    98,   103,     2,
      18,   -45,    11,     7,    52,    78,    31,    31,    31,    31,
      31,    31,    31,   156,   -45,   -45,    40,    57,   -40,   -11,
      59,    83,   -44,    50,   -45,    63,   156,   125,   -45,   215,
      37,    35,   106,    31,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   113,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     124,   128,   132,   133,     3,   -45,   -45,   -45,   127,   129,
     130,   134,   135,   138,   142,   -45,   143,   144,    31,    31,
      31,   -45,    31,    -5,    31,     4,   -42,   -45,    12,   152,
     155,    31,   153,   158,    26,    67,    31,    31,   157,   163,
     164,    31,    31,   165,   -45,   -45,   -45,    31,   156,   156,
     -45,   173,   -45,   -45,   -45,   -45,   -45,    77,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   178,   182,
     185,   186,   -45,    -4,   187,   188,   -45,   189,   -45,    92,
     -45,   -45,   -45,   190,   -45,   -13,   147,   199,   149,   202,
     205,   206,   -45,   -45,   154,   208,   209,   -45,   210,   166,
     -45,   -45,   211,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   211,   -45,   -45,   213,   214,   -45,   214,   -45,
     -45,   -45,   216,   -45,   -45,   -45,   167,    -6,     5,   -45,
     -45,   -18,    -7,   -45,   217,   168,   -45,   218,   -45,   -45,
     -45,   222,   -45,   -45,   226,   -45,   -45,   -45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,   -45,    72,    75,   -15,   -45,    -3,   -45,   -14
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      46,    68,    69,    70,    71,    72,    73,    74,   199,    75,
      44,    42,    78,    82,   174,    64,    47,    48,    49,   199,
     117,   195,    86,   167,    83,    47,    48,    49,   111,   139,
     118,   108,   195,   109,    65,    43,    47,    48,    49,   140,
     138,    79,    50,   146,    76,    45,    34,    47,    48,    49,
     132,   133,    47,    48,    49,    52,    53,    45,    34,   136,
     200,    77,   201,   128,   129,   130,   175,   131,   134,   135,
     137,   202,   196,   201,   197,    60,   143,    61,    66,   147,
     149,   150,   151,   198,   148,   197,   155,   156,    47,    48,
      49,    62,   158,    63,   159,   160,    -2,    54,    55,     1,
     104,   105,   106,     2,    67,     3,     4,     5,   108,    81,
     109,    80,     6,     7,     8,     9,    10,    56,    57,    84,
      11,    12,    58,    59,    13,    87,    14,    15,    16,    17,
     168,    85,   110,    18,    19,    20,    21,    22,    23,   112,
      24,    25,    26,    27,   113,    28,    29,    30,   114,    31,
      32,   115,   116,   119,   162,   120,   121,    33,    34,     1,
     122,   123,    35,     2,   124,     3,     4,     5,   125,   172,
     126,   127,     6,     7,     8,     9,    10,    36,   141,   144,
      11,    12,   142,   152,    13,   145,    14,    15,    16,    17,
     153,   154,   157,    18,    19,    20,    21,    22,    23,   161,
      24,    25,    26,    27,   163,    28,    29,    30,   164,    31,
      32,   165,   166,   169,   170,   171,   173,    33,    34,    88,
      89,    90,    35,    91,   176,   177,   178,    92,   179,    93,
      94,   180,   181,   182,   183,   184,   185,    36,   186,   189,
     190,   109,   193,   203,   188,   205,   194,   204,   206,    95,
      96,    97,   207,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,   100,   101,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,   103
};

static const yytype_int16 yycheck[] =
{
       3,    16,    17,    18,    19,    20,    21,    22,    26,    23,
      26,     3,    52,    57,    27,     4,    21,    22,    23,    26,
      17,    27,    36,    27,    68,    21,    22,    23,    43,    17,
      27,    73,    27,    75,    27,    27,    21,    22,    23,    27,
      82,    52,    27,    17,     4,    61,    62,    21,    22,    23,
      55,    56,    21,    22,    23,    26,    27,    61,    62,    55,
      78,     4,    80,    78,    79,    80,    79,    82,    83,    84,
      85,    78,    78,    80,    80,    73,    91,    75,    26,    94,
      95,    96,    97,    78,    17,    80,   101,   102,    21,    22,
      23,    73,   107,    75,   108,   109,     0,    26,    27,     3,
      63,    64,    65,     7,    26,     9,    10,    11,    73,    26,
      75,    52,    16,    17,    18,    19,    20,    19,    20,    69,
      24,    25,    19,    20,    28,     0,    30,    31,    32,    33,
     133,    68,    26,    37,    38,    39,    40,    41,    42,    26,
      44,    45,    46,    47,    20,    49,    50,    51,    20,    53,
      54,    19,    19,    26,    77,    26,    26,    61,    62,     3,
      26,    26,    66,     7,    26,     9,    10,    11,    26,    77,
      27,    27,    16,    17,    18,    19,    20,    81,    26,    26,
      24,    25,    27,    26,    28,    27,    30,    31,    32,    33,
      27,    27,    27,    37,    38,    39,    40,    41,    42,    26,
      44,    45,    46,    47,    26,    49,    50,    51,    26,    53,
      54,    26,    26,    26,    26,    26,    26,    61,    62,     4,
       5,     6,    66,     8,    77,    26,    77,    12,    26,    14,
      15,    26,    26,    79,    26,    26,    26,    81,    27,    26,
      26,    75,    26,    26,   172,    27,    79,    79,    26,    34,
      35,    36,    26,   178,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     9,    10,    11,    16,    17,    18,    19,
      20,    24,    25,    28,    30,    31,    32,    33,    37,    38,
      39,    40,    41,    42,    44,    45,    46,    47,    49,    50,
      51,    53,    54,    61,    62,    66,    81,    84,    85,    89,
      90,    92,     3,    27,    26,    61,    90,    21,    22,    23,
      27,    88,    26,    27,    26,    27,    19,    20,    19,    20,
      73,    75,    73,    75,     4,    27,    26,    26,    88,    88,
      88,    88,    88,    88,    88,    92,     4,     4,    52,    52,
      52,    26,    57,    68,    69,    68,    92,     0,     4,     5,
       6,     8,    12,    14,    15,    34,    35,    36,    48,    58,
      59,    60,    70,    71,    63,    64,    65,    91,    73,    75,
      26,    88,    26,    20,    20,    19,    19,    17,    27,    26,
      26,    26,    26,    26,    26,    26,    27,    27,    88,    88,
      88,    88,    55,    56,    88,    88,    55,    88,    82,    17,
      27,    26,    27,    88,    26,    27,    17,    88,    17,    88,
      88,    88,    26,    27,    27,    88,    88,    27,    88,    92,
      92,    26,    77,    26,    26,    26,    26,    27,    90,    26,
      26,    26,    77,    26,    27,    79,    77,    26,    77,    26,
      26,    26,    79,    26,    26,    26,    27,    86,    86,    26,
      26,    87,    87,    26,    79,    27,    78,    80,    78,    26,
      78,    80,    78,    26,    79,    27,    26,    26
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1464 of yacc.c  */
#line 122 "grammar.y"
    {   
		StartNode = (yyvsp[(1) - (1)].value); 
	}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 127 "grammar.y"
    { /* this is an unconditionally true expression, as a filter applies in any case */
		(yyval.param).self = NewBlock(OffsetProto, 0, 0, CMP_EQ, FUNC_NONE, NULL ); 
	}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 131 "grammar.y"
    {	
		if ( !ScreenIdentString((yyvsp[(2) - (2)].s)) ) {
			yyerror("Illegal ident string");
			YYABORT;
		}

		uint32_t	index = AddIdent((yyvsp[(2) - (2)].s));
		(yyval.param).self = NewBlock(0, 0, index, CMP_IDENT, FUNC_NONE, NULL ); 
	}
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 141 "grammar.y"
    { 
		(yyval.param).self = NewBlock(OffsetRecordFlags, (1LL << ShiftRecordFlags)  & MaskRecordFlags, 
					(0LL << ShiftRecordFlags)  & MaskRecordFlags, CMP_EQ, FUNC_NONE, NULL); 
	}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 146 "grammar.y"
    { 
		(yyval.param).self = NewBlock(OffsetRecordFlags, (1LL << ShiftRecordFlags)  & MaskRecordFlags, 
					(1LL << ShiftRecordFlags)  & MaskRecordFlags, CMP_EQ, FUNC_NONE, NULL); 
	}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 151 "grammar.y"
    { 
		int64_t	proto;
		proto = (yyvsp[(2) - (2)].value);

		if ( proto > 255 ) {
			yyerror("Protocol number > 255");
			YYABORT;
		}
		if ( proto < 0 ) {
			yyerror("Unknown protocol");
			YYABORT;
		}
		(yyval.param).self = NewBlock(OffsetProto, MaskProto, (proto << ShiftProto)  & MaskProto, CMP_EQ, FUNC_NONE, NULL); 

	}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 167 "grammar.y"
    { 
		int64_t	proto;
		proto = Proto_num((yyvsp[(2) - (2)].s));

		if ( proto > 255 ) {
			yyerror("Protocol number > 255");
			YYABORT;
		}
		if ( proto < 0 ) {
			yyerror("Unknown protocol");
			YYABORT;
		}
		(yyval.param).self = NewBlock(OffsetProto, MaskProto, (proto << ShiftProto)  & MaskProto, CMP_EQ, FUNC_NONE, NULL); 
	}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 182 "grammar.y"
    { 

		switch ( (yyvsp[(1) - (4)].param).direction ) {
			case DIR_UNSPEC:
			case DIR_IN: 
				(yyval.param).self = NewBlock(OffsetPackets, MaskPackets, (yyvsp[(4) - (4)].value), (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL); 
				break;
			case DIR_OUT: 
				(yyval.param).self = NewBlock(OffsetOutPackets, MaskPackets, (yyvsp[(4) - (4)].value), (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL); 
				break;
			default:
				/* should never happen */
				yyerror("This token is not expected here!");
				YYABORT;
		} // End of switch

	}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 200 "grammar.y"
    {	

		switch ( (yyvsp[(1) - (4)].param).direction ) {
			case DIR_UNSPEC:
			case DIR_IN: 
				(yyval.param).self = NewBlock(OffsetBytes, MaskBytes, (yyvsp[(4) - (4)].value), (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL); 
				break;
			case DIR_OUT: 
				(yyval.param).self = NewBlock(OffsetOutBytes, MaskBytes, (yyvsp[(4) - (4)].value), (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL); 
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		} // End of switch

	}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 217 "grammar.y"
    {	
			(yyval.param).self = NewBlock(OffsetAggrFlows, MaskFlows, (yyvsp[(3) - (3)].value), (yyvsp[(2) - (3)].param).comp, FUNC_NONE, NULL); 
	}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 221 "grammar.y"
    {	
		(yyval.param).self = NewBlock(0, AnyMask, (yyvsp[(3) - (3)].value), (yyvsp[(2) - (3)].param).comp, FUNC_PPS, NULL); 
	}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 225 "grammar.y"
    {	
		(yyval.param).self = NewBlock(0, AnyMask, (yyvsp[(3) - (3)].value), (yyvsp[(2) - (3)].param).comp, FUNC_BPS, NULL); 
	}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 229 "grammar.y"
    {	
		(yyval.param).self = NewBlock(0, AnyMask, (yyvsp[(3) - (3)].value), (yyvsp[(2) - (3)].param).comp, FUNC_BPP, NULL); 
	}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 233 "grammar.y"
    {	
		(yyval.param).self = NewBlock(0, AnyMask, (yyvsp[(3) - (3)].value), (yyvsp[(2) - (3)].param).comp, FUNC_DURATION, NULL); 
	}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 237 "grammar.y"
    {	
		if ( (yyvsp[(4) - (4)].value) > 255 ) {
			yyerror("TOS must be 0..255");
			YYABORT;
		}

		switch ( (yyvsp[(1) - (4)].param).direction ) {
			case DIR_UNSPEC:
			case SOURCE:
				(yyval.param).self = NewBlock(OffsetTos, MaskTos, ((yyvsp[(4) - (4)].value) << ShiftTos) & MaskTos, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL); 
				break;
			case DESTINATION:
				(yyval.param).self = NewBlock(OffsetDstTos, MaskDstTos, ((yyvsp[(4) - (4)].value) << ShiftDstTos) & MaskDstTos, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL); 
				break;
			case SOURCE_OR_DESTINATION: 
				(yyval.param).self = Connect_OR(
					NewBlock(OffsetTos, MaskTos, ((yyvsp[(4) - (4)].value) << ShiftTos) & MaskTos, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL),
					NewBlock(OffsetDstTos, MaskDstTos, ((yyvsp[(4) - (4)].value) << ShiftDstTos) & MaskDstTos, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL)
				);
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetTos, MaskTos, ((yyvsp[(4) - (4)].value) << ShiftTos) & MaskTos, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL),
					NewBlock(OffsetDstTos, MaskDstTos, ((yyvsp[(4) - (4)].value) << ShiftDstTos) & MaskDstTos, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL)
				);
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
			}
	}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 269 "grammar.y"
    {	
		if ( (yyvsp[(3) - (3)].value) > 63 ) {
			yyerror("Flags must be 0..63");
			YYABORT;
		}
		(yyval.param).self = NewBlock(OffsetFlags, MaskFlags, ((yyvsp[(3) - (3)].value) << ShiftFlags) & MaskFlags, (yyvsp[(2) - (3)].param).comp, FUNC_NONE, NULL); 
	}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 277 "grammar.y"
    {	
		uint64_t fl = 0;
		int cnt     = 0;
		size_t		len = strlen((yyvsp[(2) - (2)].s));

		if ( len > 7 ) {
			yyerror("Too many flags");
			YYABORT;
		}

		if ( strchr((yyvsp[(2) - (2)].s), 'F') ) { fl |=  1; cnt++; }
		if ( strchr((yyvsp[(2) - (2)].s), 'S') ) { fl |=  2; cnt++; }
		if ( strchr((yyvsp[(2) - (2)].s), 'R') ) { fl |=  4; cnt++; }
		if ( strchr((yyvsp[(2) - (2)].s), 'P') ) { fl |=  8; cnt++; }
		if ( strchr((yyvsp[(2) - (2)].s), 'A') ) { fl |=  16; cnt++; }
		if ( strchr((yyvsp[(2) - (2)].s), 'U') ) { fl |=  32; cnt++; }
		if ( strchr((yyvsp[(2) - (2)].s), 'X') ) { fl =  63; cnt++; }

		if ( cnt != len ) {
			yyerror("Too many flags");
			YYABORT;
		}

		(yyval.param).self = NewBlock(OffsetFlags, (fl << ShiftFlags) & MaskFlags, 
					(fl << ShiftFlags) & MaskFlags, CMP_FLAGS, FUNC_NONE, NULL); 
	}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 304 "grammar.y"
    { 	
		int af, bytes, ret;

		ret = parse_ip(&af, (yyvsp[(3) - (3)].s), IPstack, &bytes, ALLOW_LOOKUP, &num_ip);

		if ( ret == 0 ) {
			yyerror("Error parsing IP address.");
			YYABORT;
		}

		// ret == -1 will never happen here, as ALLOW_LOOKUP is set
		if ( ret == -2 ) {
			// could not resolv host => 'not any'
			(yyval.param).self = Invert(NewBlock(OffsetProto, 0, 0, CMP_EQ, FUNC_NONE, NULL )); 
		} else {
			uint64_t offsets[4] = {OffsetSrcIPv6a, OffsetSrcIPv6b, OffsetDstIPv6a, OffsetDstIPv6b };
			if ( af && (( af == PF_INET && bytes != 4 ) || ( af == PF_INET6 && bytes != 16 ))) {
				yyerror("incomplete IP address");
				YYABORT;
			}

			switch ( (yyvsp[(1) - (3)].param).direction ) {
				case SOURCE:
				case DESTINATION:
					(yyval.param).self = ChainHosts(offsets, IPstack, num_ip, (yyvsp[(1) - (3)].param).direction);
					break;
				case DIR_UNSPEC:
				case SOURCE_OR_DESTINATION: {
					uint32_t src = ChainHosts(offsets, IPstack, num_ip, SOURCE);
					uint32_t dst = ChainHosts(offsets, IPstack, num_ip, DESTINATION);
					(yyval.param).self = Connect_OR(src, dst);
					} break;
				case SOURCE_AND_DESTINATION: {
					uint32_t src = ChainHosts(offsets, IPstack, num_ip, SOURCE);
					uint32_t dst = ChainHosts(offsets, IPstack, num_ip, DESTINATION);
					(yyval.param).self = Connect_AND(src, dst);
					} break;
				default:
					yyerror("This token is not expected here!");
					YYABORT;
	
			} // End of switch

		}
	}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 350 "grammar.y"
    { 	

		switch ( (yyvsp[(1) - (6)].param).direction ) {
			case SOURCE:
				(yyval.param).self = NewBlock(OffsetSrcIPv6a, MaskIPv6, 0 , CMP_IPLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) );
				break;
			case DESTINATION:
				(yyval.param).self = NewBlock(OffsetDstIPv6a, MaskIPv6, 0 , CMP_IPLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) );
				break;
			case DIR_UNSPEC:
			case SOURCE_OR_DESTINATION:
				(yyval.param).self = Connect_OR(
					NewBlock(OffsetSrcIPv6a, MaskIPv6, 0 , CMP_IPLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) ),
					NewBlock(OffsetDstIPv6a, MaskIPv6, 0 , CMP_IPLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) )
				);
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetSrcIPv6a, MaskIPv6, 0 , CMP_IPLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) ),
					NewBlock(OffsetDstIPv6a, MaskIPv6, 0 , CMP_IPLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) )
				);
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		}
	}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 378 "grammar.y"
    { 	
		int af, bytes, ret;

		ret = parse_ip(&af, (yyvsp[(3) - (3)].s), IPstack, &bytes, STRICT_IP, &num_ip);

		if ( ret == 0 ) {
			yyerror("Error parsing IP address.");
			YYABORT;
		}

		if ( ret == -1 ) {
			yyerror("IP address required - hostname not allowed here.");
			YYABORT;
		}
		// ret == -2 will never happen here, as STRICT_IP is set

		if ( af && (( af == PF_INET && bytes != 4 ) || ( af == PF_INET6 && bytes != 16 ))) {
			yyerror("incomplete IP address");
			YYABORT;
		}

		(yyval.param).self = Connect_AND(
			NewBlock(OffsetNexthopv6b, MaskIPv6, IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
			NewBlock(OffsetNexthopv6a, MaskIPv6, IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
		);
	}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 405 "grammar.y"
    { 	

		(yyval.param).self = NewBlock(OffsetNexthopv6a, MaskIPv6, 0 , CMP_IPLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) );

	}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 411 "grammar.y"
    { 	
		int af, bytes, ret;

		ret = parse_ip(&af, (yyvsp[(3) - (3)].s), IPstack, &bytes, STRICT_IP, &num_ip);

		if ( ret == 0 ) {
			yyerror("Error parsing IP address.");
			YYABORT;
		}

		if ( ret == -1 ) {
			yyerror("IP address required - hostname not allowed here.");
			YYABORT;
		}
		// ret == -2 will never happen here, as STRICT_IP is set

		if ( af && (( af == PF_INET && bytes != 4 ) || ( af == PF_INET6 && bytes != 16 ))) {
			yyerror("incomplete IP address");
			YYABORT;
		}

		(yyval.param).self = Connect_AND(
			NewBlock(OffsetBGPNexthopv6b, MaskIPv6, IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
			NewBlock(OffsetBGPNexthopv6a, MaskIPv6, IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
		);
	}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 438 "grammar.y"
    { 	
		int af, bytes, ret;

		ret = parse_ip(&af, (yyvsp[(3) - (3)].s), IPstack, &bytes, STRICT_IP, &num_ip);

		if ( ret == 0 ) {
			yyerror("Error parsing IP address.");
			YYABORT;
		}

		if ( ret == -1 ) {
			yyerror("IP address required - hostname not allowed here.");
			YYABORT;
		}
		// ret == -2 will never happen here, as STRICT_IP is set

		if ( af && (( af == PF_INET && bytes != 4 ) || ( af == PF_INET6 && bytes != 16 ))) {
			yyerror("incomplete IP address");
			YYABORT;
		}

		(yyval.param).self = Connect_AND(
			NewBlock(OffsetRouterv6b, MaskIPv6, IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
			NewBlock(OffsetRouterv6a, MaskIPv6, IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
		);
	}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 465 "grammar.y"
    { 	
		(yyval.param).self = NewBlock(OffsetClientLatency, MaskLatency, (yyvsp[(4) - (4)].value), (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL); 
	}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 469 "grammar.y"
    { 	
		(yyval.param).self = NewBlock(OffsetServerLatency, MaskLatency, (yyvsp[(4) - (4)].value), (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL); 
	}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 473 "grammar.y"
    { 	
		(yyval.param).self = NewBlock(OffsetAppLatency, MaskLatency, (yyvsp[(4) - (4)].value), (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL); 
	}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 477 "grammar.y"
    { 	
		if ( (yyvsp[(2) - (2)].value) > 255 ) {
			yyerror("Router SysID expected between be 1..255");
			YYABORT;
		}
		(yyval.param).self = NewBlock(OffsetExporterSysID, MaskExporterSysID, ((yyvsp[(2) - (2)].value) << ShiftExporterSysID) & MaskExporterSysID, CMP_EQ, FUNC_NONE, NULL); 
	}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 485 "grammar.y"
    {	
		if ( (yyvsp[(4) - (4)].value) > 65535 ) {
			yyerror("Port outside of range 0..65535");
			YYABORT;
		}

		switch ( (yyvsp[(1) - (4)].param).direction ) {
			case SOURCE:
				(yyval.param).self = NewBlock(OffsetPort, MaskSrcPort, ((yyvsp[(4) - (4)].value) << ShiftSrcPort) & MaskSrcPort, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
				break;
			case DESTINATION:
				(yyval.param).self = NewBlock(OffsetPort, MaskDstPort, ((yyvsp[(4) - (4)].value) << ShiftDstPort) & MaskDstPort, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
				break;
			case DIR_UNSPEC:
			case SOURCE_OR_DESTINATION:
				(yyval.param).self = Connect_OR(
					NewBlock(OffsetPort, MaskSrcPort, ((yyvsp[(4) - (4)].value) << ShiftSrcPort) & MaskSrcPort, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL ),
					NewBlock(OffsetPort, MaskDstPort, ((yyvsp[(4) - (4)].value) << ShiftDstPort) & MaskDstPort, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL )
				);
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetPort, MaskSrcPort, ((yyvsp[(4) - (4)].value) << ShiftSrcPort) & MaskSrcPort, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL ),
					NewBlock(OffsetPort, MaskDstPort, ((yyvsp[(4) - (4)].value) << ShiftDstPort) & MaskDstPort, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL )
				);
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		} // End switch

	}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 518 "grammar.y"
    { 	
		struct ULongListNode *node;
		ULongtree_t *root = NULL;

		if ( (yyvsp[(1) - (6)].param).direction == DIR_UNSPEC || (yyvsp[(1) - (6)].param).direction == SOURCE_OR_DESTINATION || (yyvsp[(1) - (6)].param).direction == SOURCE_AND_DESTINATION ) {
			// src and/or dst port
			// we need a second rbtree due to different shifts for src and dst ports
			root = malloc(sizeof(ULongtree_t));

			struct ULongListNode *n;
			if ( root == NULL) {
				yyerror("malloc() error");
				YYABORT;
			}
			RB_INIT(root);

			RB_FOREACH(node, ULongtree, (ULongtree_t *)(yyvsp[(5) - (6)].list)) {
				if ( node->value > 65535 ) {
					yyerror("Port outside of range 0..65535");
					YYABORT;
				}
				if ((n = malloc(sizeof(struct ULongListNode))) == NULL) {
					yyerror("malloc() error");
					YYABORT;
				}
				n->value 	= (node->value << ShiftDstPort) & MaskDstPort;
				node->value = (node->value << ShiftSrcPort) & MaskSrcPort;
				RB_INSERT(ULongtree, root, n);
			}
		}

		switch ( (yyvsp[(1) - (6)].param).direction ) {
			case SOURCE:
				RB_FOREACH(node, ULongtree, (ULongtree_t *)(yyvsp[(5) - (6)].list)) {
					node->value = (node->value << ShiftSrcPort) & MaskSrcPort;
				}
				(yyval.param).self = NewBlock(OffsetPort, MaskSrcPort, 0, CMP_ULLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) );
				break;
			case DESTINATION:
				RB_FOREACH(node, ULongtree, (ULongtree_t *)(yyvsp[(5) - (6)].list)) {
					node->value = (node->value << ShiftDstPort) & MaskDstPort;
				}
				(yyval.param).self = NewBlock(OffsetPort, MaskDstPort, 0, CMP_ULLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) );
				break;
			case DIR_UNSPEC:
			case SOURCE_OR_DESTINATION:
				(yyval.param).self = Connect_OR(
					NewBlock(OffsetPort, MaskSrcPort, 0, CMP_ULLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) ),
					NewBlock(OffsetPort, MaskDstPort, 0, CMP_ULLIST, FUNC_NONE, (void *)root )
				);
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetPort, MaskSrcPort, 0, CMP_ULLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) ),
					NewBlock(OffsetPort, MaskDstPort, 0, CMP_ULLIST, FUNC_NONE, (void *)root )
				);
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		} // End of switch

	}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 582 "grammar.y"
    {
		if ( (yyvsp[(2) - (2)].value) > 255 ) {
			yyerror("ICMP tpye of range 0..15");
			YYABORT;
		}
		(yyval.param).self = Connect_AND(
			// imply proto ICMP with a proto ICMP block
			Connect_OR (
				NewBlock(OffsetProto, MaskProto, ((uint64_t)IPPROTO_ICMP << ShiftProto)  & MaskProto, CMP_EQ, FUNC_NONE, NULL), 
				NewBlock(OffsetProto, MaskProto, ((uint64_t)IPPROTO_ICMPV6 << ShiftProto)  & MaskProto, CMP_EQ, FUNC_NONE, NULL)
			),
			NewBlock(OffsetPort, MaskICMPtype, ((yyvsp[(2) - (2)].value) << ShiftICMPtype) & MaskICMPtype, CMP_EQ, FUNC_NONE, NULL )
		);

	}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 598 "grammar.y"
    {
		if ( (yyvsp[(2) - (2)].value) > 255 ) {
			yyerror("ICMP code of range 0..15");
			YYABORT;
		}
		(yyval.param).self = Connect_AND(
			// imply proto ICMP with a proto ICMP block
			Connect_OR (
				NewBlock(OffsetProto, MaskProto, ((uint64_t)IPPROTO_ICMP << ShiftProto)  & MaskProto, CMP_EQ, FUNC_NONE, NULL), 
				NewBlock(OffsetProto, MaskProto, ((uint64_t)IPPROTO_ICMPV6 << ShiftProto)  & MaskProto, CMP_EQ, FUNC_NONE, NULL)
			),
			NewBlock(OffsetPort, MaskICMPcode, ((yyvsp[(2) - (2)].value) << ShiftICMPcode) & MaskICMPcode, CMP_EQ, FUNC_NONE, NULL )
		);

	}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 614 "grammar.y"
    {
		if ( (yyvsp[(3) - (3)].value) > 255 ) {
			yyerror("Engine type of range 0..255");
			YYABORT;
		}
		(yyval.param).self = NewBlock(OffsetRouterID, MaskEngineType, ((yyvsp[(3) - (3)].value) << ShiftEngineType) & MaskEngineType, (yyvsp[(2) - (3)].param).comp, FUNC_NONE, NULL);

	}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 623 "grammar.y"
    {
		if ( (yyvsp[(3) - (3)].value) > 255 ) {
			yyerror("Engine ID of range 0..255");
			YYABORT;
		}
		(yyval.param).self = NewBlock(OffsetRouterID, MaskEngineID, ((yyvsp[(3) - (3)].value) << ShiftEngineID) & MaskEngineID, (yyvsp[(2) - (3)].param).comp, FUNC_NONE, NULL);

	}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 632 "grammar.y"
    {
#ifdef NSEL
		if ( strncasecmp((yyvsp[(3) - (3)].s),"ignore", 6) == 0) {
			(yyval.param).self = NewBlock(OffsetConnID, MaskFWevent, ( NSEL_EVENT_IGNORE << ShiftFWevent) & MaskFWevent, CMP_EQ, FUNC_NONE, NULL );
		} else if( strncasecmp((yyvsp[(3) - (3)].s),"create", 6) == 0) {
			(yyval.param).self = NewBlock(OffsetConnID, MaskFWevent, ( NSEL_EVENT_CREATE << ShiftFWevent) & MaskFWevent, CMP_EQ, FUNC_NONE, NULL );
		} else if( strncasecmp((yyvsp[(3) - (3)].s),"term", 4) == 0 || strncasecmp((yyvsp[(3) - (3)].s),"delete", 6) == 0) {
			(yyval.param).self = NewBlock(OffsetConnID, MaskFWevent, ( NSEL_EVENT_DELETE << ShiftFWevent) & MaskFWevent, CMP_EQ, FUNC_NONE, NULL );
		} else if  (strncasecmp((yyvsp[(3) - (3)].s),"deny", 4) == 0) {
			(yyval.param).self = NewBlock(OffsetConnID, MaskFWevent, ( NSEL_EVENT_DENIED << ShiftFWevent) & MaskFWevent, CMP_EQ, FUNC_NONE, NULL );
		} else if  (strncasecmp((yyvsp[(3) - (3)].s),"alert", 5) == 0) {
			(yyval.param).self = NewBlock(OffsetConnID, MaskFWevent, ( NSEL_EVENT_ALERT << ShiftFWevent) & MaskFWevent, CMP_EQ, FUNC_NONE, NULL );
		} else if  (strncasecmp((yyvsp[(3) - (3)].s),"update", 6) == 0) {
			(yyval.param).self = NewBlock(OffsetConnID, MaskFWevent, ( NSEL_EVENT_UPDATE << ShiftFWevent) & MaskFWevent, CMP_EQ, FUNC_NONE, NULL );
		} else {
			yyerror("Unknown asa event");
			YYABORT;
		}
#else
		yyerror("NSEL/ASA filters not available");
		YYABORT;
#endif
	}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 656 "grammar.y"
    {
#ifdef NSEL
		if ( (yyvsp[(4) - (4)].value) > 255 ) {
			yyerror("Invalid xevent ID");
			YYABORT;
		}
		(yyval.param).self = NewBlock(OffsetConnID, MaskFWevent, ( (yyvsp[(4) - (4)].value) << ShiftFWevent) & MaskFWevent, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
#else
		yyerror("NSEL/ASA filters not available");
		YYABORT;
#endif
	}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 669 "grammar.y"
    {
#ifdef NSEL
		uint64_t xevent = 0;
		if ( (yyvsp[(4) - (4)].param).inout == INGRESS ) {
			xevent = 1001;
		} else if ( (yyvsp[(4) - (4)].param).inout == EGRESS ) {
			xevent = 1002;
		} else {
				yyerror("Invalid inout token");
				YYABORT;
		}
		(yyval.param).self = Connect_AND(
			NewBlock(OffsetConnID, MaskFWevent, ( NSEL_EVENT_DENIED << ShiftFWevent) & MaskFWevent, CMP_EQ, FUNC_NONE, NULL ),
			NewBlock(OffsetConnID, MaskFWXevent, ( xevent << ShiftFWXevent) & MaskFWXevent, CMP_EQ, FUNC_NONE, NULL )
		);
#else
		yyerror("NSEL/ASA filters not available");
		YYABORT;
#endif
	}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 689 "grammar.y"
    {
#ifdef NSEL
		uint64_t xevent = 0;
		if( strncasecmp((yyvsp[(4) - (4)].s),"interface", 6) == 0) {
			xevent = 1003;
		} else if( strncasecmp((yyvsp[(4) - (4)].s),"nosyn", 6) == 0) {
			xevent = 1004;
		} else {
			xevent = (uint64_t)strtol((yyvsp[(4) - (4)].s), (char **)NULL, 10);
			if ( (xevent == 0 && errno == EINVAL) || xevent > 65535 ) {
				yyerror("Invalid xevent ID");
				YYABORT;
			}
		}
		(yyval.param).self = Connect_AND(
			NewBlock(OffsetConnID, MaskFWevent, ( NSEL_EVENT_DENIED << ShiftFWevent) & MaskFWevent, CMP_EQ, FUNC_NONE, NULL ),
			NewBlock(OffsetConnID, MaskFWXevent, ( xevent << ShiftFWXevent) & MaskFWXevent, CMP_EQ, FUNC_NONE, NULL )
		);
#else
		yyerror("NSEL/ASA filters not available");
		YYABORT;
#endif
	}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 713 "grammar.y"
    {
#ifdef NSEL
		if ( (yyvsp[(4) - (4)].value) > 65535 ) {
			yyerror("Invalid xevent ID");
			YYABORT;
		}
		(yyval.param).self = NewBlock(OffsetConnID, MaskFWXevent, ( (yyvsp[(4) - (4)].value) << ShiftFWXevent) & MaskFWXevent, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
#else
		yyerror("NSEL/ASA filters not available");
		YYABORT;
#endif
	}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 726 "grammar.y"
    { 	
#ifdef NSEL
		int af, bytes, ret;

		ret = parse_ip(&af, (yyvsp[(3) - (3)].s), IPstack, &bytes, ALLOW_LOOKUP, &num_ip);

		if ( ret == 0 ) {
			yyerror("Error parsing IP address.");
			YYABORT;
		}

		// ret == -1 will never happen here, as ALLOW_LOOKUP is set
		if ( ret == -2 ) {
			// could not resolv host => 'not any'
			(yyval.param).self = Invert(NewBlock(OffsetProto, 0, 0, CMP_EQ, FUNC_NONE, NULL )); 
		} else {
			uint64_t offsets[4] = {OffsetXLATESRCv6a, OffsetXLATESRCv6b, OffsetXLATEDSTv6a, OffsetXLATEDSTv6b };
			if ( af && (( af == PF_INET && bytes != 4 ) || ( af == PF_INET6 && bytes != 16 ))) {
				yyerror("incomplete IP address");
				YYABORT;
			}

			switch ( (yyvsp[(1) - (3)].param).direction ) {
				case SOURCE:
				case DESTINATION:
					(yyval.param).self = ChainHosts(offsets, IPstack, num_ip, (yyvsp[(1) - (3)].param).direction);
					break;
				case DIR_UNSPEC:
				case SOURCE_OR_DESTINATION: {
					uint32_t src = ChainHosts(offsets, IPstack, num_ip, SOURCE);
					uint32_t dst = ChainHosts(offsets, IPstack, num_ip, DESTINATION);
					(yyval.param).self = Connect_OR(src, dst);
					} break;
				case SOURCE_AND_DESTINATION: {
					uint32_t src = ChainHosts(offsets, IPstack, num_ip, SOURCE);
					uint32_t dst = ChainHosts(offsets, IPstack, num_ip, DESTINATION);
					(yyval.param).self = Connect_AND(src, dst);
					} break;
				default:
					yyerror("This token is not expected here!");
					YYABORT;
	
			} // End of switch

		}
#else
		yyerror("NSEL/ASA filters not available");
		YYABORT;
#endif
	}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 777 "grammar.y"
    { 
#ifdef NSEL
		int af, bytes, ret;
		uint64_t	mask[2];

		ret = parse_ip(&af, (yyvsp[(3) - (5)].s), IPstack, &bytes, STRICT_IP, &num_ip);
		if ( ret == 0 ) {
			yyerror("Invalid IP address");
			YYABORT;
		}
		if ( ret == -1 ) {
			yyerror("IP address required - hostname not allowed here.");
			YYABORT;
		}
		// ret == -2 will never happen here, as STRICT_IP is set


		if ( (yyvsp[(5) - (5)].value) > (bytes*8) ) {
			yyerror("Too many netbits for this IP addresss");
			YYABORT;
		}

		if ( af == PF_INET ) {
			mask[0] = 0xffffffffffffffffLL;
			mask[1] = 0xffffffffffffffffLL << ( 32 - (yyvsp[(5) - (5)].value) );
		} else {	// PF_INET6
			if ( (yyvsp[(5) - (5)].value) > 64 ) {
				mask[0] = 0xffffffffffffffffLL;
				mask[1] = 0xffffffffffffffffLL << ( 128 - (yyvsp[(5) - (5)].value) );
			} else {
				mask[0] = 0xffffffffffffffffLL << ( 64 - (yyvsp[(5) - (5)].value) );
				mask[1] = 0;
			}
		}
		// IP aadresses are stored in network representation 
		mask[0]	 = mask[0];
		mask[1]	 = mask[1];

		IPstack[0] &= mask[0];
		IPstack[1] &= mask[1];

		switch ( (yyvsp[(1) - (5)].param).direction ) {
			case SOURCE:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetXLATESRCv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
					NewBlock(OffsetXLATESRCv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
				);
				break;
			case DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetXLATEDSTv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
					NewBlock(OffsetXLATEDSTv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
				);
				break;
			case DIR_UNSPEC:
			case SOURCE_OR_DESTINATION:
				(yyval.param).self = Connect_OR(
					Connect_AND(
						NewBlock(OffsetXLATESRCv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetXLATESRCv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
					),
					Connect_AND(
						NewBlock(OffsetXLATEDSTv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetXLATEDSTv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
					)
				);
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					Connect_AND(
						NewBlock(OffsetXLATESRCv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetXLATESRCv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
					),
					Connect_AND(
						NewBlock(OffsetXLATEDSTv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetXLATEDSTv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
					)
				);
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		} // End of switch

#else
		yyerror("NSEL/ASA filters not available");
		YYABORT;
#endif
	}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 867 "grammar.y"
    {	
#ifdef NSEL
		if ( (yyvsp[(4) - (4)].value) > 65535 ) {
			yyerror("Port outside of range 0..65535");
			YYABORT;
		}

		switch ( (yyvsp[(1) - (4)].param).direction ) {
			case SOURCE:
				(yyval.param).self = NewBlock(OffsetXLATEPort, MaskXLATESRCPORT, ((yyvsp[(4) - (4)].value) << ShiftXLATESRCPORT) & MaskXLATESRCPORT, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
				break;
			case DESTINATION:
				(yyval.param).self = NewBlock(OffsetXLATEPort, MaskXLATEDSTPORT, ((yyvsp[(4) - (4)].value) << ShiftXLATEDSTPORT) & MaskXLATEDSTPORT, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
				break;
			case DIR_UNSPEC:
			case SOURCE_OR_DESTINATION:
				(yyval.param).self = Connect_OR(
					NewBlock(OffsetXLATEPort, MaskXLATESRCPORT, ((yyvsp[(4) - (4)].value) << ShiftXLATESRCPORT) & MaskXLATESRCPORT, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL ),
					NewBlock(OffsetXLATEPort, MaskXLATEDSTPORT, ((yyvsp[(4) - (4)].value) << ShiftXLATEDSTPORT) & MaskXLATEDSTPORT, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL )
				);
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetXLATEPort, MaskXLATESRCPORT, ((yyvsp[(4) - (4)].value) << ShiftXLATESRCPORT) & MaskXLATESRCPORT, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL ),
					NewBlock(OffsetXLATEPort, MaskXLATEDSTPORT, ((yyvsp[(4) - (4)].value) << ShiftXLATEDSTPORT) & MaskXLATEDSTPORT, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL )
				);
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		} // End switch
#else
		yyerror("NSEL/ASA filters not available");
		YYABORT;
#endif

	}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 905 "grammar.y"
    {
#ifdef NSEL
		uint64_t offset, mask, shift;
		if ( (yyvsp[(1) - (4)].param).inout == INGRESS ) {
			switch ((yyvsp[(2) - (4)].param).acl) {
				case ACL:
					offset = OffsetIngressAclId;
					mask   = MaskIngressAclId;	
					shift  = ShiftIngressAclId;
					break;
				case ACE:
					offset = OffsetIngressAceId;
					mask   = MaskIngressAceId;	
					shift  = ShiftIngressAceId;
					break;
				case XACE:
					offset = OffsetIngressGrpId;
					mask   = MaskIngressGrpId;	
					shift  = ShiftIngressGrpId;
					break;
				default:
					yyerror("Invalid ACL specifier");
					YYABORT;
			}
		} else if ( (yyvsp[(1) - (4)].param).inout == EGRESS && (yyval.param).acl == ACL ) {
			offset = OffsetEgressAclId;
			mask   = MaskEgressAclId;	
			shift  = ShiftEgressAclId;
		} else {
			yyerror("ingress/egress syntax error");
			YYABORT;
		}
		(yyval.param).self = NewBlock(offset, mask, ((yyvsp[(4) - (4)].value) << shift) & mask , (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );

#else
		yyerror("NSEL/ASA filters not available");
		YYABORT;
#endif
	}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 945 "grammar.y"
    {
#ifdef NEL
		if ( strncasecmp((yyvsp[(3) - (3)].s),"invalid", 6) == 0) {
			(yyval.param).self = NewBlock(OffsetNELcommon, MasNATevent, ( NEL_EVENT_INVALID << ShiftNATevent) & MasNATevent, CMP_EQ, FUNC_NONE, NULL );
		} else if( strncasecmp((yyvsp[(3) - (3)].s),"add", 6) == 0) {
			(yyval.param).self = NewBlock(OffsetNELcommon, MasNATevent, ( NEL_EVENT_ADD << ShiftNATevent) & MasNATevent, CMP_EQ, FUNC_NONE, NULL );
		} else if( strncasecmp((yyvsp[(3) - (3)].s),"delete", 4) == 0 || strncasecmp((yyvsp[(3) - (3)].s),"delete", 6) == 0) {
			(yyval.param).self = NewBlock(OffsetNELcommon, MasNATevent, ( NEL_EVENT_DELETE << ShiftNATevent) & MasNATevent, CMP_EQ, FUNC_NONE, NULL );
		} else {
			yyerror("Unknown nat event");
			YYABORT;
		}
#else
		yyerror("NEL/NAT filters not available");
		YYABORT;
#endif
	}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 963 "grammar.y"
    {
#ifdef NEL
		if ( (yyvsp[(4) - (4)].value) > 255 ) {
			yyerror("Invalid event ID");
			YYABORT;
		}
		(yyval.param).self = NewBlock(OffsetNELcommon, MasNATevent, ( (yyvsp[(4) - (4)].value) << ShiftNATevent) & MasNATevent, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
#else
		yyerror("NEL/NAT filters not available");
		YYABORT;
#endif
	}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 976 "grammar.y"
    {
#ifdef NEL
		if ( (yyvsp[(4) - (4)].value) > 0xFFFFFFFFLL ) {
			yyerror("Invalid vrf ID");
			YYABORT;
		}
		(yyval.param).self = NewBlock(OffsetVRFID, MaskVRFID, ( (yyvsp[(4) - (4)].value) << ShiftVRFID) & MaskVRFID, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
#else
		yyerror("NEL/NAT filters not available");
		YYABORT;
#endif
	}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 989 "grammar.y"
    {	
#ifdef NEL
		if ( (yyvsp[(4) - (4)].value) > 65535 ) {
			yyerror("Port outside of range 0..65535");
			YYABORT;
		}

		switch ( (yyvsp[(1) - (4)].param).direction ) {
			case SOURCE:
				(yyval.param).self = NewBlock(OffsetNELcommon, MaskPostSRCPort, ((yyvsp[(4) - (4)].value) << ShiftPostSRCPort) & MaskPostSRCPort, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
				break;
			case DESTINATION:
				(yyval.param).self = NewBlock(OffsetNELcommon, MaskPostDSTPort, ((yyvsp[(4) - (4)].value) << ShiftPostDSTPort) & MaskPostDSTPort, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
				break;
			case DIR_UNSPEC:
			case SOURCE_OR_DESTINATION:
				(yyval.param).self = Connect_OR(
					NewBlock(OffsetNELcommon, MaskPostSRCPort, ((yyvsp[(4) - (4)].value) << ShiftPostSRCPort) & MaskPostSRCPort, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL ),
					NewBlock(OffsetNELcommon, MaskPostDSTPort, ((yyvsp[(4) - (4)].value) << ShiftPostDSTPort) & MaskPostDSTPort, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL )
				);
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetNELcommon, MaskPostSRCPort, ((yyvsp[(4) - (4)].value) << ShiftPostSRCPort) & MaskPostSRCPort, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL ),
					NewBlock(OffsetNELcommon, MaskPostDSTPort, ((yyvsp[(4) - (4)].value) << ShiftPostDSTPort) & MaskPostDSTPort, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL )
				);
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		} // End switch
#else
		yyerror("NEL/NAT filters not available");
		YYABORT;
#endif

	}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 1027 "grammar.y"
    { 	
#ifdef NEL
		int af, bytes, ret;

		ret = parse_ip(&af, (yyvsp[(3) - (3)].s), IPstack, &bytes, ALLOW_LOOKUP, &num_ip);

		if ( ret == 0 ) {
			yyerror("Error parsing IP address.");
			YYABORT;
		}

		// ret == -1 will never happen here, as ALLOW_LOOKUP is set
		if ( ret == -2 ) {
			// could not resolv host => 'not any'
			(yyval.param).self = Invert(NewBlock(OffsetProto, 0, 0, CMP_EQ, FUNC_NONE, NULL )); 
		} else {
			uint64_t offsets[4] = {OffsetGlobalInsidev6a, OffsetGlobalInsidev6b, OffsetGlobalOutsidev6a, OffsetGlobalOutsidev6b };
			if ( af && (( af == PF_INET && bytes != 4 ) || ( af == PF_INET6 && bytes != 16 ))) {
				yyerror("incomplete IP address");
				YYABORT;
			}

			switch ( (yyvsp[(1) - (3)].param).direction ) {
				case SOURCE:
				case DESTINATION:
					(yyval.param).self = ChainHosts(offsets, IPstack, num_ip, (yyvsp[(1) - (3)].param).direction);
					break;
				case DIR_UNSPEC:
				case SOURCE_OR_DESTINATION: {
					uint32_t src = ChainHosts(offsets, IPstack, num_ip, SOURCE);
					uint32_t dst = ChainHosts(offsets, IPstack, num_ip, DESTINATION);
					(yyval.param).self = Connect_OR(src, dst);
					} break;
				case SOURCE_AND_DESTINATION: {
					uint32_t src = ChainHosts(offsets, IPstack, num_ip, SOURCE);
					uint32_t dst = ChainHosts(offsets, IPstack, num_ip, DESTINATION);
					(yyval.param).self = Connect_AND(src, dst);
					} break;
				default:
					yyerror("This token is not expected here!");
					YYABORT;
	
			} // End of switch

		}
#else
		yyerror("NSEL/ASA filters not available");
		YYABORT;
#endif
	}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 1078 "grammar.y"
    {	
		if ( (yyvsp[(4) - (4)].value) > 0xfFFFFFFF || (yyvsp[(4) - (4)].value) < 0 ) {
			yyerror("AS number of range");
			YYABORT;
		}

		switch ( (yyvsp[(1) - (4)].param).direction ) {
			case SOURCE:
				(yyval.param).self = NewBlock(OffsetAS, MaskSrcAS, ((yyvsp[(4) - (4)].value) << ShiftSrcAS) & MaskSrcAS, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
				break;
			case DESTINATION:
				(yyval.param).self = NewBlock(OffsetAS, MaskDstAS, ((yyvsp[(4) - (4)].value) << ShiftDstAS) & MaskDstAS, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL);
				break;
			case DIR_UNSPEC:
			case SOURCE_OR_DESTINATION:
				(yyval.param).self = Connect_OR(
					NewBlock(OffsetAS, MaskSrcAS, ((yyvsp[(4) - (4)].value) << ShiftSrcAS) & MaskSrcAS, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL ),
					NewBlock(OffsetAS, MaskDstAS, ((yyvsp[(4) - (4)].value) << ShiftDstAS) & MaskDstAS, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL)
				);
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetAS, MaskSrcAS, ((yyvsp[(4) - (4)].value) << ShiftSrcAS) & MaskSrcAS, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL ),
					NewBlock(OffsetAS, MaskDstAS, ((yyvsp[(4) - (4)].value) << ShiftDstAS) & MaskDstAS, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL)
				);
				break;
			case ADJ_PREV:
				(yyval.param).self = NewBlock(OffsetBGPadj, MaskBGPadjPrev, ((yyvsp[(4) - (4)].value) << ShiftBGPadjPrev) & MaskBGPadjPrev, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
				break;
			case ADJ_NEXT:
				(yyval.param).self = NewBlock(OffsetBGPadj, MaskBGPadjNext, ((yyvsp[(4) - (4)].value) << ShiftBGPadjNext) & MaskBGPadjNext, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		} // End of switch

	}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 1117 "grammar.y"
    { 	
		struct ULongListNode *node;
		ULongtree_t *root = NULL;

		if ( (yyvsp[(1) - (6)].param).direction == DIR_UNSPEC || (yyvsp[(1) - (6)].param).direction == SOURCE_OR_DESTINATION || (yyvsp[(1) - (6)].param).direction == SOURCE_AND_DESTINATION ) {
			// src and/or dst AS
			// we need a second rbtree due to different shifts for src and dst AS
			root = malloc(sizeof(ULongtree_t));

			struct ULongListNode *n;
			if ( root == NULL) {
				yyerror("malloc() error");
				YYABORT;
			}
			RB_INIT(root);

			RB_FOREACH(node, ULongtree, (ULongtree_t *)(yyvsp[(5) - (6)].list)) {
				if ( node->value > 0xFFFFFFFFLL ) {
					yyerror("AS number of range");
					YYABORT;
				}
				if ((n = malloc(sizeof(struct ULongListNode))) == NULL) {
					yyerror("malloc() error");
					YYABORT;
				}
				n->value 	= (node->value << ShiftDstAS) & MaskDstAS;
				node->value = (node->value << ShiftSrcAS) & MaskSrcAS;
				RB_INSERT(ULongtree, root, n);
			}
		}

		switch ( (yyvsp[(1) - (6)].param).direction ) {
			case SOURCE:
				RB_FOREACH(node, ULongtree, (ULongtree_t *)(yyvsp[(5) - (6)].list)) {
					node->value = (node->value << ShiftSrcAS) & MaskSrcAS;
				}
				(yyval.param).self = NewBlock(OffsetAS, MaskSrcAS, 0, CMP_ULLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) );
				break;
			case DESTINATION:
				RB_FOREACH(node, ULongtree, (ULongtree_t *)(yyvsp[(5) - (6)].list)) {
					node->value = (node->value << ShiftDstAS) & MaskDstAS;
				}
				(yyval.param).self = NewBlock(OffsetAS, MaskDstAS, 0, CMP_ULLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) );
				break;
			case DIR_UNSPEC:
			case SOURCE_OR_DESTINATION:
				(yyval.param).self = Connect_OR(
					NewBlock(OffsetAS, MaskSrcAS, 0, CMP_ULLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) ),
					NewBlock(OffsetAS, MaskDstAS, 0, CMP_ULLIST, FUNC_NONE, (void *)root )
				);
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetAS, MaskSrcAS, 0, CMP_ULLIST, FUNC_NONE, (void *)(yyvsp[(5) - (6)].list) ),
					NewBlock(OffsetAS, MaskDstAS, 0, CMP_ULLIST, FUNC_NONE, (void *)root )
				);
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		}

	}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 1181 "grammar.y"
    {	
		if ( (yyvsp[(3) - (3)].value) > 255 ) {
			yyerror("Mask outside of range 0..255");
			YYABORT;
		}

		switch ( (yyvsp[(1) - (3)].param).direction ) {
			case SOURCE:
				(yyval.param).self = NewBlock(OffsetMask, MaskSrcMask, ((yyvsp[(3) - (3)].value) << ShiftSrcMask) & MaskSrcMask, CMP_EQ, FUNC_NONE, NULL );
				break;
			case DESTINATION:
				(yyval.param).self = NewBlock(OffsetMask, MaskDstMask, ((yyvsp[(3) - (3)].value) << ShiftDstMask) & MaskDstMask, CMP_EQ, FUNC_NONE, NULL );
				break;
			case DIR_UNSPEC:
			case SOURCE_OR_DESTINATION:
				(yyval.param).self = Connect_OR(
					NewBlock(OffsetMask, MaskSrcMask, ((yyvsp[(3) - (3)].value) << ShiftSrcMask) & MaskSrcMask, CMP_EQ, FUNC_NONE, NULL ),
					NewBlock(OffsetMask, MaskDstMask, ((yyvsp[(3) - (3)].value) << ShiftDstMask) & MaskDstMask, CMP_EQ, FUNC_NONE, NULL )
				);
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetMask, MaskSrcMask, ((yyvsp[(3) - (3)].value) << ShiftSrcMask) & MaskSrcMask, CMP_EQ, FUNC_NONE, NULL ),
					NewBlock(OffsetMask, MaskDstMask, ((yyvsp[(3) - (3)].value) << ShiftDstMask) & MaskDstMask, CMP_EQ, FUNC_NONE, NULL )
				);
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		} // End switch

	}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 1214 "grammar.y"
    { 
		int af, bytes, ret;
		uint64_t	mask[2];
		ret = parse_ip(&af, (yyvsp[(3) - (4)].s), IPstack, &bytes, STRICT_IP, &num_ip);

		if ( ret == 0 ) {
			yyerror("Invalid IP address");
			YYABORT;
		}
		
		if ( ret == -1 ) {
			yyerror("IP address required - hostname not allowed here.");
			YYABORT;
		}
		// ret == -2 will never happen here, as STRICT_IP is set

		if ( af != PF_INET ) {
			yyerror("IP netmask syntax valid only for IPv4");
			YYABORT;
		}
		if ( bytes != 4 ) {
			yyerror("Need complete IP address");
			YYABORT;
		}

		ret = parse_ip(&af, (yyvsp[(4) - (4)].s), mask, &bytes, STRICT_IP, &num_ip);
		if ( ret == 0 ) {
			yyerror("Invalid IP address");
			YYABORT;
		}
		if ( ret == -1 ) {
			yyerror("IP address required - hostname not allowed here.");
			YYABORT;
		}
		// ret == -2 will never happen here, as STRICT_IP is set

		if ( af != PF_INET || bytes != 4 ) {
			yyerror("Invalid netmask for IPv4 address");
			YYABORT;
		}

		IPstack[0] &= mask[0];
		IPstack[1] &= mask[1];

		switch ( (yyvsp[(1) - (4)].param).direction ) {
			case SOURCE:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetSrcIPv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
					NewBlock(OffsetSrcIPv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
				);
				break;
			case DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetDstIPv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
					NewBlock(OffsetDstIPv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
				);
				break;
			case DIR_UNSPEC:
			case SOURCE_OR_DESTINATION:
				(yyval.param).self = Connect_OR(
					Connect_AND(
						NewBlock(OffsetSrcIPv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetSrcIPv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
					),
					Connect_AND(
						NewBlock(OffsetDstIPv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetDstIPv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
					)
				);		
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					Connect_AND(
						NewBlock(OffsetSrcIPv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetSrcIPv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
					),
					Connect_AND(
						NewBlock(OffsetDstIPv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetDstIPv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
					)
				);
				break;
			default:
				/* should never happen */
				yyerror("This token is not expected here!");
				YYABORT;
		} // End of switch

	}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 1304 "grammar.y"
    { 
		int af, bytes, ret;
		uint64_t	mask[2];

		ret = parse_ip(&af, (yyvsp[(3) - (5)].s), IPstack, &bytes, STRICT_IP, &num_ip);
		if ( ret == 0 ) {
			yyerror("Invalid IP address");
			YYABORT;
		}
		if ( ret == -1 ) {
			yyerror("IP address required - hostname not allowed here.");
			YYABORT;
		}
		// ret == -2 will never happen here, as STRICT_IP is set


		if ( (yyvsp[(5) - (5)].value) > (bytes*8) ) {
			yyerror("Too many netbits for this IP addresss");
			YYABORT;
		}

		if ( af == PF_INET ) {
			mask[0] = 0xffffffffffffffffLL;
			mask[1] = 0xffffffffffffffffLL << ( 32 - (yyvsp[(5) - (5)].value) );
		} else {	// PF_INET6
			if ( (yyvsp[(5) - (5)].value) > 64 ) {
				mask[0] = 0xffffffffffffffffLL;
				mask[1] = 0xffffffffffffffffLL << ( 128 - (yyvsp[(5) - (5)].value) );
			} else {
				mask[0] = 0xffffffffffffffffLL << ( 64 - (yyvsp[(5) - (5)].value) );
				mask[1] = 0;
			}
		}
		// IP aadresses are stored in network representation 
		mask[0]	 = mask[0];
		mask[1]	 = mask[1];

		IPstack[0] &= mask[0];
		IPstack[1] &= mask[1];

		switch ( (yyvsp[(1) - (5)].param).direction ) {
			case SOURCE:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetSrcIPv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
					NewBlock(OffsetSrcIPv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
				);
				break;
			case DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetDstIPv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
					NewBlock(OffsetDstIPv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
				);
				break;
			case DIR_UNSPEC:
			case SOURCE_OR_DESTINATION:
				(yyval.param).self = Connect_OR(
					Connect_AND(
						NewBlock(OffsetSrcIPv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetSrcIPv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
					),
					Connect_AND(
						NewBlock(OffsetDstIPv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetDstIPv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
					)
				);
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					Connect_AND(
						NewBlock(OffsetSrcIPv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetSrcIPv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
					),
					Connect_AND(
						NewBlock(OffsetDstIPv6b, mask[1], IPstack[1] , CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetDstIPv6a, mask[0], IPstack[0] , CMP_EQ, FUNC_NONE, NULL )
					)
				);
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		} // End of switch

	}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 1389 "grammar.y"
    {
		if ( (yyvsp[(3) - (3)].value) > 0xffffffffLL ) {
			yyerror("Input interface number must 0..2^32");
			YYABORT;
		}

		switch ( (yyvsp[(1) - (3)].param).direction ) {
			case DIR_UNSPEC:
				(yyval.param).self = Connect_OR(
					NewBlock(OffsetInOut, MaskInput, ((yyvsp[(3) - (3)].value) << ShiftInput) & MaskInput, CMP_EQ, FUNC_NONE, NULL),
					NewBlock(OffsetInOut, MaskOutput, ((yyvsp[(3) - (3)].value) << ShiftOutput) & MaskOutput, CMP_EQ, FUNC_NONE, NULL)
				);
				break;
			case DIR_IN: 
				(yyval.param).self = NewBlock(OffsetInOut, MaskInput, ((yyvsp[(3) - (3)].value) << ShiftInput) & MaskInput, CMP_EQ, FUNC_NONE, NULL); 
				break;
			case DIR_OUT: 
				(yyval.param).self = NewBlock(OffsetInOut, MaskOutput, ((yyvsp[(3) - (3)].value) << ShiftOutput) & MaskOutput, CMP_EQ, FUNC_NONE, NULL); 
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		} // End of switch

	}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 1415 "grammar.y"
    {	
		if ( (yyvsp[(3) - (3)].value) > 65535 || (yyvsp[(3) - (3)].value) < 0 ) {
			yyerror("VLAN number of range 0..65535");
			YYABORT;
		}

		switch ( (yyvsp[(1) - (3)].param).direction ) {
			case SOURCE:
				(yyval.param).self = NewBlock(OffsetVlan, MaskSrcVlan, ((yyvsp[(3) - (3)].value) << ShiftSrcVlan) & MaskSrcVlan, CMP_EQ, FUNC_NONE, NULL );
				break;
			case DESTINATION:
				(yyval.param).self = NewBlock(OffsetVlan, MaskDstVlan, ((yyvsp[(3) - (3)].value) << ShiftDstVlan) & MaskDstVlan, CMP_EQ, FUNC_NONE, NULL);
				break;
			case DIR_UNSPEC:
			case SOURCE_OR_DESTINATION:
				(yyval.param).self = Connect_OR(
					NewBlock(OffsetVlan, MaskSrcVlan, ((yyvsp[(3) - (3)].value) << ShiftSrcVlan) & MaskSrcVlan, CMP_EQ, FUNC_NONE, NULL ),
					NewBlock(OffsetVlan, MaskDstVlan, ((yyvsp[(3) - (3)].value) << ShiftDstVlan) & MaskDstVlan, CMP_EQ, FUNC_NONE, NULL)
				);
				break;
			case SOURCE_AND_DESTINATION:
				(yyval.param).self = Connect_AND(
					NewBlock(OffsetVlan, MaskSrcVlan, ((yyvsp[(3) - (3)].value) << ShiftSrcVlan) & MaskSrcVlan, CMP_EQ, FUNC_NONE, NULL ),
					NewBlock(OffsetVlan, MaskDstVlan, ((yyvsp[(3) - (3)].value) << ShiftDstVlan) & MaskDstVlan, CMP_EQ, FUNC_NONE, NULL)
				);
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		} // End of switch

	}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 1448 "grammar.y"
    {
		uint64_t	mac = VerifyMac((yyvsp[(3) - (3)].s));
		if ( mac == 0 ) {
			yyerror("Invalid MAC address format");
			YYABORT;
		}
		switch ( (yyvsp[(1) - (3)].param).direction ) {
			case DIR_UNSPEC: {
					uint32_t in, out;
					in  = Connect_OR(
						NewBlock(OffsetInSrcMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetInDstMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL )
					);
					out  = Connect_OR(
						NewBlock(OffsetOutSrcMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetOutDstMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL )
					);
					(yyval.param).self = Connect_OR(in, out);
					} break;
			case DIR_IN:
					(yyval.param).self = Connect_OR(
						NewBlock(OffsetInSrcMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetInDstMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL )
					);
					break;
			case DIR_OUT:
					(yyval.param).self = Connect_OR(
						NewBlock(OffsetOutSrcMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetOutDstMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL )
					);
					break;
			case SOURCE:
					(yyval.param).self = Connect_OR(
						NewBlock(OffsetInSrcMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetOutSrcMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL )
					);
					break;
			case DESTINATION:
					(yyval.param).self = Connect_OR(
						NewBlock(OffsetInDstMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL ),
						NewBlock(OffsetOutDstMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL )
					);
					break;
			case IN_SRC: 
					(yyval.param).self = NewBlock(OffsetInSrcMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL );
					break;
			case IN_DST: 
					(yyval.param).self = NewBlock(OffsetInDstMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL );
					break;
			case OUT_SRC: 
					(yyval.param).self = NewBlock(OffsetOutSrcMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL );
					break;
			case OUT_DST:
					(yyval.param).self = NewBlock(OffsetOutDstMAC, MaskMac, mac, CMP_EQ, FUNC_NONE, NULL );
					break;
				break;
			default:
				yyerror("This token is not expected here!");
				YYABORT;
		} // End of switch
	}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 1510 "grammar.y"
    {	
		if ( (yyvsp[(4) - (4)].value) > MPLSMAX ) {
			yyerror("MPLS value out of range");
			YYABORT;
		}

		// search for label1 - label10
		if ( strncasecmp((yyvsp[(2) - (4)].s), "label", 5) == 0 ) {
			uint64_t mask;
			uint32_t offset, shift;
			char *s = &(yyvsp[(2) - (4)].s)[5];
			if ( s == '\0' ) {
				yyerror("Missing label number");
				YYABORT;
			}
			int i = (int)strtol(s, (char **)NULL, 10);

			switch (i) {
				case 1:
					offset	= OffsetMPLS12;
					mask	= MaskMPLSlabelOdd;
					shift	= ShiftMPLSlabelOdd;
					break;
				case 2:
					offset	= OffsetMPLS12;
					mask	= MaskMPLSlabelEven;
					shift	= ShiftMPLSlabelEven;
					break;
				case 3:
					offset	= OffsetMPLS34;
					mask	= MaskMPLSlabelOdd;
					shift	= ShiftMPLSlabelOdd;
					break;
				case 4:
					offset	= OffsetMPLS34;
					mask	= MaskMPLSlabelEven;
					shift	= ShiftMPLSlabelEven;
					break;
				case 5:
					offset	= OffsetMPLS56;
					mask	= MaskMPLSlabelOdd;
					shift	= ShiftMPLSlabelOdd;
					break;
				case 6:
					offset	= OffsetMPLS56;
					mask	= MaskMPLSlabelEven;
					shift	= ShiftMPLSlabelEven;
					break;
				case 7:
					offset	= OffsetMPLS78;
					mask	= MaskMPLSlabelOdd;
					shift	= ShiftMPLSlabelOdd;
					break;
				case 8:
					offset	= OffsetMPLS78;
					mask	= MaskMPLSlabelEven;
					shift	= ShiftMPLSlabelEven;
					break;
				case 9:
					offset	= OffsetMPLS910;
					mask	= MaskMPLSlabelOdd;
					shift	= ShiftMPLSlabelOdd;
					break;
				case 10:
					offset	= OffsetMPLS910;
					mask	= MaskMPLSlabelEven;
					shift	= ShiftMPLSlabelEven;
					break;
				default: 
					yyerror("MPLS label out of range 1..10");
					YYABORT;
			}
			(yyval.param).self = NewBlock(offset, mask, ((yyvsp[(4) - (4)].value) << shift) & mask, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );

		} else if ( strcasecmp((yyvsp[(2) - (4)].s), "eos") == 0 ) {
			// match End of Stack label 
			(yyval.param).self = NewBlock(0, AnyMask, (yyvsp[(4) - (4)].value) << 4, (yyvsp[(3) - (4)].param).comp, FUNC_MPLS_EOS, NULL );

		} else if ( strncasecmp((yyvsp[(2) - (4)].s), "exp", 3) == 0 ) {
			uint64_t mask;
			uint32_t offset, shift;
			char *s = &(yyvsp[(2) - (4)].s)[3];
			if ( s == '\0' ) {
				yyerror("Missing label number");
				YYABORT;
			}
			int i = (int)strtol(s, (char **)NULL, 10);

			if ( (yyvsp[(4) - (4)].value) < 0 || (yyvsp[(4) - (4)].value) > 7 ) {
				yyerror("MPLS exp value out of range");
				YYABORT;
			}

			switch (i) {
				case 1:
					offset	= OffsetMPLS12;
					mask	= MaskMPLSexpOdd;
					shift	= ShiftMPLSexpOdd;
					break;
				case 2:
					offset	= OffsetMPLS12;
					mask	= MaskMPLSexpEven;
					shift	= ShiftMPLSexpEven;
					break;
				case 3:
					offset	= OffsetMPLS34;
					mask	= MaskMPLSexpOdd;
					shift	= ShiftMPLSexpOdd;
					break;
				case 4:
					offset	= OffsetMPLS34;
					mask	= MaskMPLSexpEven;
					shift	= ShiftMPLSexpEven;
					break;
				case 5:
					offset	= OffsetMPLS56;
					mask	= MaskMPLSexpOdd;
					shift	= ShiftMPLSexpOdd;
					break;
				case 6:
					offset	= OffsetMPLS56;
					mask	= MaskMPLSexpEven;
					shift	= ShiftMPLSexpEven;
					break;
				case 7:
					offset	= OffsetMPLS78;
					mask	= MaskMPLSexpOdd;
					shift	= ShiftMPLSexpOdd;
					break;
				case 8:
					offset	= OffsetMPLS78;
					mask	= MaskMPLSexpEven;
					shift	= ShiftMPLSexpEven;
					break;
				case 9:
					offset	= OffsetMPLS910;
					mask	= MaskMPLSexpOdd;
					shift	= ShiftMPLSexpOdd;
					break;
				case 10:
					offset	= OffsetMPLS910;
					mask	= MaskMPLSexpEven;
					shift	= ShiftMPLSexpEven;
					break;
				default: 
					yyerror("MPLS label out of range 1..10");
					YYABORT;
			}
			(yyval.param).self = NewBlock(offset, mask, (yyvsp[(4) - (4)].value) << shift, (yyvsp[(3) - (4)].param).comp, FUNC_NONE, NULL );

		} else {
			yyerror("Unknown MPLS option");
			YYABORT;
		}
	}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 1665 "grammar.y"
    {	
		uint32_t *opt = malloc(sizeof(uint32_t));
		if ( (yyvsp[(3) - (3)].value) > MPLSMAX ) {
			yyerror("MPLS value out of range");
			YYABORT;
		}
		if ( opt == NULL) {
			yyerror("malloc() error");
			YYABORT;
		}
		*opt = (yyvsp[(3) - (3)].value) << 4;
		(yyval.param).self = NewBlock(0, AnyMask, (yyvsp[(3) - (3)].value) << 4, CMP_EQ, FUNC_MPLS_ANY, opt );

	}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 1679 "grammar.y"
    {
		if ( (yyvsp[(2) - (2)].value) > 255 ) {
			yyerror("Forwarding status of range 0..255");
			YYABORT;
		}
		(yyval.param).self = NewBlock(OffsetStatus, MaskStatus, ((yyvsp[(2) - (2)].value) << ShiftStatus) & MaskStatus, CMP_EQ, FUNC_NONE, NULL);
	}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 1687 "grammar.y"
    {
		uint64_t id = Get_fwd_status_id((yyvsp[(2) - (2)].s));
		if (id == 256 ) {
			yyerror("Unknown forwarding status");
			YYABORT;
		}

		(yyval.param).self = NewBlock(OffsetStatus, MaskStatus, (id << ShiftStatus) & MaskStatus, CMP_EQ, FUNC_NONE, NULL);

	}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 1698 "grammar.y"
    {
		if ( (yyvsp[(2) - (2)].value) > 2 ) {
			yyerror("Flow direction status of range 0, 1");
			YYABORT;
		}
		(yyval.param).self = NewBlock(OffsetDir, MaskDir, ((yyvsp[(2) - (2)].value) << ShiftDir) & MaskDir, CMP_EQ, FUNC_NONE, NULL);

	}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 1707 "grammar.y"
    {
		uint64_t dir = 0xFF;
		if ( (yyvsp[(2) - (2)].param).inout == INGRESS )
			dir = 0;
		else if ( (yyvsp[(2) - (2)].param).inout == EGRESS )
			dir = 1;
		else {
			yyerror("Flow direction status of range ingress, egress");
			YYABORT;
		}

		(yyval.param).self = NewBlock(OffsetDir, MaskDir, (dir << ShiftDir) & MaskDir, CMP_EQ, FUNC_NONE, NULL);

	}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 1723 "grammar.y"
    { 
		int i, af, bytes, ret;
		struct IPListNode *node;

		IPlist_t *root = malloc(sizeof(IPlist_t));

		if ( root == NULL) {
			yyerror("malloc() error");
			YYABORT;
		}
		RB_INIT(root);

		ret = parse_ip(&af, (yyvsp[(1) - (1)].s), IPstack, &bytes, ALLOW_LOOKUP, &num_ip);

		if ( ret == 0 ) {
			yyerror("Invalid IP address");
			YYABORT;
		}
		// ret == -1 will never happen here, as ALLOW_LOOKUP is set
		
		if ( ret != -2 ) {
			if ( af && (( af == PF_INET && bytes != 4 ) || ( af == PF_INET6 && bytes != 16 ))) {
				yyerror("incomplete IP address");
				YYABORT;
			}

			for ( i=0; i<num_ip; i++ ) {
				if ((node = malloc(sizeof(struct IPListNode))) == NULL) {
					yyerror("malloc() error");
					YYABORT;
				}
				node->ip[0] = IPstack[2*i];
				node->ip[1] = IPstack[2*i+1];
				node->mask[0] = 0xffffffffffffffffLL;
				node->mask[1] = 0xffffffffffffffffLL;
				RB_INSERT(IPtree, root, node);
			}

		}
		(yyval.list) = (void *)root;

	}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 1766 "grammar.y"
    { 
		int af, bytes, ret;
		struct IPListNode *node;

		IPlist_t *root = malloc(sizeof(IPlist_t));

		if ( root == NULL) {
			yyerror("malloc() error");
			YYABORT;
		}
		RB_INIT(root);

		ret = parse_ip(&af, (yyvsp[(1) - (3)].s), IPstack, &bytes, STRICT_IP, &num_ip);

		if ( ret == 0 ) {
			yyerror("Invalid IP address");
			YYABORT;
		}
		// ret == -1 will never happen here, as ALLOW_LOOKUP is set
		
		if ( ret != -2 ) {
			if ( af && (( af == PF_INET && bytes != 4 ) || ( af == PF_INET6 && bytes != 16 ))) {
				yyerror("incomplete IP address");
				YYABORT;
			}

			if ((node = malloc(sizeof(struct IPListNode))) == NULL) {
				yyerror("malloc() error");
				YYABORT;
			}

			if ( af == PF_INET ) {
				node->mask[0] = 0xffffffffffffffffLL;
				node->mask[1] = 0xffffffffffffffffLL << ( 32 - (yyvsp[(3) - (3)].value) );
			} else {	// PF_INET6
				if ( (yyvsp[(3) - (3)].value) > 64 ) {
					node->mask[0] = 0xffffffffffffffffLL;
					node->mask[1] = 0xffffffffffffffffLL << ( 128 - (yyvsp[(3) - (3)].value) );
				} else {
					node->mask[0] = 0xffffffffffffffffLL << ( 64 - (yyvsp[(3) - (3)].value) );
					node->mask[1] = 0;
				}
			}

			node->ip[0] = IPstack[0] & node->mask[0];
			node->ip[1] = IPstack[1] & node->mask[1];

			RB_INSERT(IPtree, root, node);

		}
		(yyval.list) = (void *)root;

	}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 1820 "grammar.y"
    { 
		int i, af, bytes, ret;
		struct IPListNode *node;

		ret = parse_ip(&af, (yyvsp[(2) - (2)].s), IPstack, &bytes, ALLOW_LOOKUP, &num_ip);

		if ( ret == 0 ) {
			yyerror("Invalid IP address");
			YYABORT;
		}
		if ( af && (( af == PF_INET && bytes != 4 ) || ( af == PF_INET6 && bytes != 16 ))) {
			yyerror("incomplete IP address");
			YYABORT;
		}

		// ret == - 2 means lookup failure
		if ( ret != -2 ) {
			for ( i=0; i<num_ip; i++ ) {
				if ((node = malloc(sizeof(struct IPListNode))) == NULL) {
					yyerror("malloc() error");
					YYABORT;
				}
				node->ip[0] = IPstack[2*i];
				node->ip[1] = IPstack[2*i+1];
				node->mask[0] = 0xffffffffffffffffLL;
				node->mask[1] = 0xffffffffffffffffLL;
	
				RB_INSERT(IPtree, (IPlist_t *)(yyval.list), node);
			}
		}
	}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 1851 "grammar.y"
    { 
		int i, af, bytes, ret;
		struct IPListNode *node;

		ret = parse_ip(&af, (yyvsp[(3) - (3)].s), IPstack, &bytes, ALLOW_LOOKUP, &num_ip);

		if ( ret == 0 ) {
			yyerror("Invalid IP address");
			YYABORT;
		}
		if ( af && (( af == PF_INET && bytes != 4 ) || ( af == PF_INET6 && bytes != 16 ))) {
			yyerror("incomplete IP address");
			YYABORT;
		}

		// ret == - 2 means lookup failure
		if ( ret != -2 ) {
			for ( i=0; i<num_ip; i++ ) {
				if ((node = malloc(sizeof(struct IPListNode))) == NULL) {
					yyerror("malloc() error");
					YYABORT;
				}
				node->ip[0] = IPstack[2*i];
				node->ip[1] = IPstack[2*i+1];
				node->mask[0] = 0xffffffffffffffffLL;
				node->mask[1] = 0xffffffffffffffffLL;
	
				RB_INSERT(IPtree, (IPlist_t *)(yyval.list), node);
			}
		}
	}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 1883 "grammar.y"
    { 
		int af, bytes, ret;
		struct IPListNode *node;

		ret = parse_ip(&af, (yyvsp[(2) - (4)].s), IPstack, &bytes, STRICT_IP, &num_ip);

		if ( ret == 0 ) {
			yyerror("Invalid IP address");
			YYABORT;
		}
		if ( af && (( af == PF_INET && bytes != 4 ) || ( af == PF_INET6 && bytes != 16 ))) {
			yyerror("incomplete IP address");
			YYABORT;
		}

		// ret == - 2 means lookup failure
		if ( ret != -2 ) {
			if ((node = malloc(sizeof(struct IPListNode))) == NULL) {
				yyerror("malloc() error");
				YYABORT;
			}
			if ( af == PF_INET ) {
				node->mask[0] = 0xffffffffffffffffLL;
				node->mask[1] = 0xffffffffffffffffLL << ( 32 - (yyvsp[(4) - (4)].value) );
			} else {	// PF_INET6
				if ( (yyvsp[(4) - (4)].value) > 64 ) {
					node->mask[0] = 0xffffffffffffffffLL;
					node->mask[1] = 0xffffffffffffffffLL << ( 128 - (yyvsp[(4) - (4)].value) );
				} else {
					node->mask[0] = 0xffffffffffffffffLL << ( 64 - (yyvsp[(4) - (4)].value) );
					node->mask[1] = 0;
				}
			}

			node->ip[0] = IPstack[0] & node->mask[0];
			node->ip[1] = IPstack[1] & node->mask[1];

			RB_INSERT(IPtree, (IPlist_t *)(yyval.list), node);
		}
	}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 1927 "grammar.y"
    { 
		struct ULongListNode *node;

		ULongtree_t *root = malloc(sizeof(ULongtree_t));

		if ( root == NULL) {
			yyerror("malloc() error");
			YYABORT;
		}
		RB_INIT(root);

		if ((node = malloc(sizeof(struct ULongListNode))) == NULL) {
			yyerror("malloc() error");
			YYABORT;
		}
		node->value = (yyvsp[(1) - (1)].value);

		RB_INSERT(ULongtree, root, node);
		(yyval.list) = (void *)root;
	}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 1948 "grammar.y"
    { 
		struct ULongListNode *node;

		if ((node = malloc(sizeof(struct ULongListNode))) == NULL) {
			yyerror("malloc() error");
			YYABORT;
		}
		node->value = (yyvsp[(2) - (2)].value);
		RB_INSERT(ULongtree, (ULongtree_t *)(yyval.list), node);
	}
    break;

  case 71:

/* Line 1464 of yacc.c  */
#line 1959 "grammar.y"
    { 
		struct ULongListNode *node;

		if ((node = malloc(sizeof(struct ULongListNode))) == NULL) {
			yyerror("malloc() error");
			YYABORT;
		}
		node->value = (yyvsp[(3) - (3)].value);
		RB_INSERT(ULongtree, (ULongtree_t *)(yyval.list), node);
	}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 1973 "grammar.y"
    { (yyval.param).comp = CMP_EQ; }
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 1974 "grammar.y"
    { (yyval.param).comp = CMP_EQ; }
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 1975 "grammar.y"
    { (yyval.param).comp = CMP_LT; }
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 1976 "grammar.y"
    { (yyval.param).comp = CMP_GT; }
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 1980 "grammar.y"
    { (yyval.param).direction = DIR_UNSPEC;  			 }
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 1981 "grammar.y"
    { (yyval.param).direction = SOURCE;				 }
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 1982 "grammar.y"
    { (yyval.param).direction = DESTINATION;			 }
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 1983 "grammar.y"
    { (yyval.param).direction = SOURCE_OR_DESTINATION;  }
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 1984 "grammar.y"
    { (yyval.param).direction = SOURCE_OR_DESTINATION;  }
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 1985 "grammar.y"
    { (yyval.param).direction = SOURCE_AND_DESTINATION; }
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 1986 "grammar.y"
    { (yyval.param).direction = SOURCE_AND_DESTINATION; }
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 1987 "grammar.y"
    { (yyval.param).direction = DIR_IN;				 }
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 1988 "grammar.y"
    { (yyval.param).direction = DIR_OUT;				 }
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 1989 "grammar.y"
    { (yyval.param).direction = IN_SRC;				 }
    break;

  case 86:

/* Line 1464 of yacc.c  */
#line 1990 "grammar.y"
    { (yyval.param).direction = IN_DST;				 }
    break;

  case 87:

/* Line 1464 of yacc.c  */
#line 1991 "grammar.y"
    { (yyval.param).direction = OUT_SRC;				 }
    break;

  case 88:

/* Line 1464 of yacc.c  */
#line 1992 "grammar.y"
    { (yyval.param).direction = OUT_DST;				 }
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 1993 "grammar.y"
    { (yyval.param).direction = ADJ_PREV;				 }
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 1994 "grammar.y"
    { (yyval.param).direction = ADJ_NEXT;				 }
    break;

  case 91:

/* Line 1464 of yacc.c  */
#line 1997 "grammar.y"
    { (yyval.param).inout	= INGRESS;	}
    break;

  case 92:

/* Line 1464 of yacc.c  */
#line 1998 "grammar.y"
    { (yyval.param).inout	= EGRESS;   }
    break;

  case 93:

/* Line 1464 of yacc.c  */
#line 2001 "grammar.y"
    { (yyval.param).acl = ACL; 	}
    break;

  case 94:

/* Line 1464 of yacc.c  */
#line 2002 "grammar.y"
    { (yyval.param).acl = ACE;		}
    break;

  case 95:

/* Line 1464 of yacc.c  */
#line 2003 "grammar.y"
    { (yyval.param).acl = XACE;	}
    break;

  case 96:

/* Line 1464 of yacc.c  */
#line 2006 "grammar.y"
    { (yyval.value) = (yyvsp[(1) - (1)].param).self;        }
    break;

  case 97:

/* Line 1464 of yacc.c  */
#line 2007 "grammar.y"
    { (yyval.value) = Connect_OR((yyvsp[(1) - (3)].value), (yyvsp[(3) - (3)].value));  }
    break;

  case 98:

/* Line 1464 of yacc.c  */
#line 2008 "grammar.y"
    { (yyval.value) = Connect_AND((yyvsp[(1) - (3)].value), (yyvsp[(3) - (3)].value)); }
    break;

  case 99:

/* Line 1464 of yacc.c  */
#line 2009 "grammar.y"
    { (yyval.value) = Invert((yyvsp[(2) - (2)].value));			}
    break;

  case 100:

/* Line 1464 of yacc.c  */
#line 2010 "grammar.y"
    { (yyval.value) = (yyvsp[(2) - (3)].value); }
    break;



/* Line 1464 of yacc.c  */
#line 4132 "grammar.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 2013 "grammar.y"


static void  yyerror(char *msg) {

	if ( FilterFilename )
		snprintf(yyerror_buff, 255 ,"File '%s' line %d: %s at '%s'", FilterFilename, lineno, msg, yytext);
	else 
		snprintf(yyerror_buff, 255, "Line %d: %s at '%s'", lineno, msg, yytext);

	yyerror_buff[255] = '\0';
	fprintf(stderr, "%s\n", yyerror_buff);

} /* End of yyerror */

static uint32_t ChainHosts(uint64_t *offsets, uint64_t *hostlist, int num_records, int type) {
uint32_t offset_a, offset_b, i, j, block;
	if ( type == SOURCE ) {
		offset_a = offsets[0];
		offset_b = offsets[1];
	} else {
		offset_a = offsets[2];
		offset_b = offsets[3];
	}

	i = 0;
	block = Connect_AND(
				NewBlock(offset_b, MaskIPv6, hostlist[i+1] , CMP_EQ, FUNC_NONE, NULL ),
				NewBlock(offset_a, MaskIPv6, hostlist[i] , CMP_EQ, FUNC_NONE, NULL )
			);
	i += 2;
	for ( j=1; j<num_records; j++ ) {
		uint32_t b = Connect_AND(
				NewBlock(offset_b, MaskIPv6, hostlist[i+1] , CMP_EQ, FUNC_NONE, NULL ),
				NewBlock(offset_a, MaskIPv6, hostlist[i] , CMP_EQ, FUNC_NONE, NULL )
			);
		block = Connect_OR(block, b);
		i += 2;
	}

	return block;

} // End of ChainHosts

uint64_t VerifyMac(char *s) {
uint64_t mac;
size_t slen = strlen(s);
long l;
char *p, *q, *r;
int i;

	if ( slen > 17 )
		return 0; 

	for (i=0; i<slen; i++ ) {
		if ( !isxdigit(s[i]) && s[i] != ':' ) 
			return 0;
	}

	p = strdup(s);
	if ( !p ) {
		yyerror("malloc() error");
		return 0;
	}

	mac = 0;
	i = 0;	// number of MAC octets must be 6
	r = p;
	q = strchr(r, ':');
	while ( r && i < 6 ) {
		if ( q ) 
			*q = '\0';
		l = strtol(r, NULL, 16);
		if ( (i == 0 && errno == EINVAL) ) {
			free(p);
			return 0;
		}
		if ( l > 255 ) {
			free(p);
			return 0;
		}

		mac = ( mac << 8 ) | (l & 0xFF );
		i++;

		if ( q ) {
			r = ++q;
			q = strchr(r, ':');
		} else 
			r = NULL;
	}

	if ( i != 6 )
		return 0;

	return mac;

} // End of VerifyMac


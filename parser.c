
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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
#line 1 "parser.y"


#include <cstddef>
#include <string>
#include <map>
#include <vector>

#include "TableIdentificateur.hpp"
#include "TableSymbole.hpp"

#include "Symbole.hpp"
#include "SymboleProgramme.hpp"
#include "SymboleArgument.hpp"
#include "SymboleArgumentConstant.hpp"
#include "SymboleArgumentVariable.hpp"
#include "SymboleFonction.hpp"
#include "SymboleProcedure.hpp"
#include "SymboleConstante.hpp"
#include "SymboleVariable.hpp"

#include "Type.hpp"
#include "TypeEntier.hpp"

typedef pair <int, TableSymbole> TS_Pair;

extern char* yytext;
extern int yyerror ( char* );
extern int yylex ();

extern TableIdentificateur ti; // table des identificateurs

map<int, TableSymbole> ts_map; // liste qui conserve toutes les tables des symboles
int tsCourante; // id de la table des symboles du contexte courant

vector<int> symboles; // liste des id des symboles à ajouter dans la table des symboles courantes
vector<int> arguments;
int arite;
string base_type;



/* Line 189 of yacc.c  */
#line 115 "parser.c"

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
     KW_PROGRAM = 258,
     KW_CONST = 259,
     KW_TYPE = 260,
     KW_VAR = 261,
     KW_ARRAY = 262,
     KW_OF = 263,
     KW_RECORD = 264,
     KW_BEGIN = 265,
     KW_END = 266,
     KW_DIV = 267,
     KW_MOD = 268,
     KW_AND = 269,
     KW_OR = 270,
     KW_XOR = 271,
     KW_NOT = 272,
     KW_IF = 273,
     KW_THEN = 274,
     KW_ELSE = 275,
     KW_WHILE = 276,
     KW_DO = 277,
     KW_REPEAT = 278,
     KW_UNTIL = 279,
     KW_FOR = 280,
     KW_TO = 281,
     KW_DOWNTO = 282,
     KW_PROC = 283,
     KW_FUNC = 284,
     KW_NIL = 285,
     KW_INTEGER = 286,
     KW_REAL = 287,
     KW_BOOLEAN = 288,
     KW_CHAR = 289,
     KW_STRING = 290,
     SEP_SCOL = 291,
     SEP_DOT = 292,
     SEP_DOTS = 293,
     SEP_DOTDOT = 294,
     SEP_COMMA = 295,
     SEP_CO = 296,
     SEP_CF = 297,
     SEP_PO = 298,
     SEP_PF = 299,
     OP_EQ = 300,
     OP_NEQ = 301,
     OP_LT = 302,
     OP_LTE = 303,
     OP_GT = 304,
     OP_GTE = 305,
     OP_ADD = 306,
     OP_SUB = 307,
     OP_MUL = 308,
     OP_SLASH = 309,
     OP_EXP = 310,
     OP_PTR = 311,
     OP_AFFECT = 312,
     TOK_IDENT = 313,
     TOK_INTEGER = 314,
     TOK_REAL = 315,
     TOK_BOOLEAN = 316,
     TOK_STRING = 317,
     OP_POS = 318,
     OP_NEG = 319,
     OP_DOT = 320,
     KW_IFX = 321
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 42 "parser.y"

	int id;



/* Line 214 of yacc.c  */
#line 223 "parser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 235 "parser.c"

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
# if YYENABLE_NLS
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   422

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNRULES -- Number of states.  */
#define YYNSTATES  245

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    11,    17,    20,    21,    24,    26,
      31,    34,    35,    38,    40,    45,    48,    49,    52,    54,
      59,    63,    65,    68,    69,    73,    75,    77,    79,    83,
      85,    88,    91,    95,    99,   101,   103,   105,   109,   114,
     118,   121,   125,   128,   131,   133,   135,   137,   139,   141,
     143,   145,   147,   149,   151,   153,   155,   157,   161,   165,
     167,   171,   173,   176,   178,   180,   187,   191,   193,   195,
     197,   201,   205,   207,   211,   214,   218,   223,   226,   230,
     232,   237,   242,   251,   256,   263,   267,   269,   271,   273,
     275,   277,   279,   281,   283,   285,   287,   291,   295,   299,
     303,   307,   311,   315,   318,   321,   325,   329,   333,   337,
     341,   345,   349,   353,   357,   360,   364,   366,   368,   370,
     372,   374,   376,   381,   385,   388,   390,   394,   397,   402,
     405,   409,   412,   416,   418,   422
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      68,     0,    -1,    69,    36,    70,    37,    -1,     3,    58,
      -1,    71,    74,    77,    81,   111,    -1,     4,    72,    -1,
      -1,    72,    73,    -1,    73,    -1,    58,    45,   115,    36,
      -1,     5,    75,    -1,    -1,    75,    76,    -1,    76,    -1,
      58,    45,    96,    36,    -1,     6,    78,    -1,    -1,    78,
      79,    -1,    79,    -1,    80,    38,    96,    36,    -1,    80,
      40,    58,    -1,    58,    -1,    82,    36,    -1,    -1,    82,
      36,    83,    -1,    83,    -1,    84,    -1,    92,    -1,    85,
      36,    70,    -1,    86,    -1,    86,    87,    -1,    28,    58,
      -1,    43,    88,    44,    -1,    88,    36,    89,    -1,    89,
      -1,    90,    -1,    91,    -1,    80,    38,    98,    -1,     6,
      80,    38,    98,    -1,    93,    36,    70,    -1,    94,    95,
      -1,    94,    87,    95,    -1,    29,    58,    -1,    38,    98,
      -1,    97,    -1,    98,    -1,    99,    -1,   101,    -1,   104,
      -1,   107,    -1,   110,    -1,    58,    -1,    31,    -1,    32,
      -1,    33,    -1,    34,    -1,    35,    -1,    43,   100,    44,
      -1,   100,    40,    58,    -1,    58,    -1,   102,    39,   102,
      -1,   103,    -1,    52,   103,    -1,    58,    -1,    59,    -1,
       7,    41,   105,    42,     8,    96,    -1,   105,    40,   106,
      -1,   106,    -1,    58,    -1,   101,    -1,     9,   108,    11,
      -1,   108,    36,   109,    -1,   109,    -1,    80,    38,    96,
      -1,    56,    96,    -1,    10,   112,    11,    -1,    10,   112,
      36,    11,    -1,    10,    11,    -1,   112,    36,   113,    -1,
     113,    -1,    21,   115,    22,   113,    -1,    23,   112,    24,
     115,    -1,    25,    58,    57,   115,   114,   115,    22,   113,
      -1,    18,   115,    19,   113,    -1,    18,   115,    19,   113,
      20,   113,    -1,   121,    57,   115,    -1,   122,    -1,   111,
      -1,    26,    -1,    27,    -1,   116,    -1,   117,    -1,   118,
      -1,   119,    -1,   120,    -1,   122,    -1,   115,    51,   115,
      -1,   115,    52,   115,    -1,   115,    53,   115,    -1,   115,
      54,   115,    -1,   115,    12,   115,    -1,   115,    13,   115,
      -1,   115,    55,   115,    -1,    52,   115,    -1,    51,   115,
      -1,   115,    45,   115,    -1,   115,    46,   115,    -1,   115,
      47,   115,    -1,   115,    48,   115,    -1,   115,    49,   115,
      -1,   115,    50,   115,    -1,   115,    14,   115,    -1,   115,
      15,   115,    -1,   115,    16,   115,    -1,    17,   115,    -1,
      43,   115,    44,    -1,    59,    -1,    60,    -1,    61,    -1,
      30,    -1,    62,    -1,    58,    -1,   120,    41,   124,    42,
      -1,   120,    37,    58,    -1,   120,    56,    -1,    58,    -1,
     121,    37,    58,    -1,   121,    56,    -1,   121,    41,   124,
      42,    -1,    58,   123,    -1,    43,   125,    44,    -1,    43,
      44,    -1,   124,    40,   115,    -1,   115,    -1,   125,    40,
     115,    -1,   115,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   128,   128,   138,   148,   151,   152,   155,   156,   159,
     162,   163,   166,   167,   170,   173,   174,   177,   178,   181,
     192,   195,   200,   201,   204,   205,   208,   209,   212,   229,
     230,   233,   247,   265,   266,   269,   270,   273,   285,   297,
     314,   315,   318,   329,   332,   333,   336,   337,   338,   339,
     340,   343,   344,   345,   346,   347,   348,   351,   354,   355,
     358,   361,   362,   365,   366,   369,   372,   373,   376,   377,
     380,   383,   384,   387,   390,   393,   394,   395,   398,   399,
     402,   405,   408,   411,   414,   417,   420,   423,   428,   429,
     432,   433,   434,   435,   436,   437,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   452,   454,   455,   456,   457,
     458,   461,   462,   463,   464,   467,   468,   469,   470,   471,
     472,   475,   476,   477,   478,   481,   482,   483,   484,   487,
     490,   491,   494,   495,   498,   499
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_PROGRAM", "KW_CONST", "KW_TYPE",
  "KW_VAR", "KW_ARRAY", "KW_OF", "KW_RECORD", "KW_BEGIN", "KW_END",
  "KW_DIV", "KW_MOD", "KW_AND", "KW_OR", "KW_XOR", "KW_NOT", "KW_IF",
  "KW_THEN", "KW_ELSE", "KW_WHILE", "KW_DO", "KW_REPEAT", "KW_UNTIL",
  "KW_FOR", "KW_TO", "KW_DOWNTO", "KW_PROC", "KW_FUNC", "KW_NIL",
  "KW_INTEGER", "KW_REAL", "KW_BOOLEAN", "KW_CHAR", "KW_STRING",
  "SEP_SCOL", "SEP_DOT", "SEP_DOTS", "SEP_DOTDOT", "SEP_COMMA", "SEP_CO",
  "SEP_CF", "SEP_PO", "SEP_PF", "OP_EQ", "OP_NEQ", "OP_LT", "OP_LTE",
  "OP_GT", "OP_GTE", "OP_ADD", "OP_SUB", "OP_MUL", "OP_SLASH", "OP_EXP",
  "OP_PTR", "OP_AFFECT", "TOK_IDENT", "TOK_INTEGER", "TOK_REAL",
  "TOK_BOOLEAN", "TOK_STRING", "OP_POS", "OP_NEG", "OP_DOT", "KW_IFX",
  "$accept", "Program", "ProgramHeader", "Block", "BlockDeclConst",
  "ListDeclConst", "DeclConst", "BlockDeclType", "ListDeclType",
  "DeclType", "BlockDeclVar", "ListDeclVar", "DeclVar", "ListIdent",
  "BlockDeclFunc", "ListDeclFunc", "DeclFunc", "ProcDecl", "ProcHeader",
  "ProcIdent", "FormalArgs", "ListFormalArgs", "FormalArg", "ValFormalArg",
  "VarFormalArg", "FuncDecl", "FuncHeader", "FuncIdent", "FuncResult",
  "Type", "UserType", "BaseType", "EnumType", "ListEnumValue", "InterType",
  "InterBase", "NSInterBase", "ArrayType", "ListArrayIndex", "ArrayIndex",
  "RecordType", "RecordFields", "RecordField", "PointerType", "BlockCode",
  "ListInstr", "Instr", "ForDirection", "Expression", "MathExpr",
  "CompExpr", "BoolExpr", "AtomExpr", "VarExpr", "LeftExpr", "Call",
  "Parameters", "ListIndices", "ListParameters", 0
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
     315,   316,   317,   318,   319,   320,   321
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    70,    71,    71,    72,    72,    73,
      74,    74,    75,    75,    76,    77,    77,    78,    78,    79,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    85,
      85,    86,    87,    88,    88,    89,    89,    90,    91,    92,
      93,    93,    94,    95,    96,    96,    97,    97,    97,    97,
      97,    98,    98,    98,    98,    98,    98,    99,   100,   100,
     101,   102,   102,   103,   103,   104,   105,   105,   106,   106,
     107,   108,   108,   109,   110,   111,   111,   111,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     115,   115,   115,   115,   115,   115,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   117,   117,   117,
     117,   118,   118,   118,   118,   119,   119,   119,   119,   119,
     119,   120,   120,   120,   120,   121,   121,   121,   121,   122,
     123,   123,   124,   124,   125,   125
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     5,     2,     0,     2,     1,     4,
       2,     0,     2,     1,     4,     2,     0,     2,     1,     4,
       3,     1,     2,     0,     3,     1,     1,     1,     3,     1,
       2,     2,     3,     3,     1,     1,     1,     3,     4,     3,
       2,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       3,     1,     2,     1,     1,     6,     3,     1,     1,     1,
       3,     3,     1,     3,     2,     3,     4,     2,     3,     1,
       4,     4,     8,     4,     6,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     1,     1,     1,     1,
       1,     1,     4,     3,     2,     1,     3,     2,     4,     2,
       3,     2,     3,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     6,     0,     0,    11,
       0,     5,     8,     2,     0,    16,     0,     7,     0,    10,
      13,     0,    23,     0,   119,     0,     0,     0,   121,   116,
     117,   118,   120,     0,    90,    91,    92,    93,    94,    95,
       0,    12,    21,    15,    18,     0,     0,     0,     0,     0,
      25,    26,     0,    29,    27,     0,     0,   114,     0,   104,
     103,     0,   129,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,     0,     0,    52,    53,    54,    55,    56,
       0,     0,     0,    51,    64,     0,    44,    45,    46,    47,
       0,    61,    48,    49,    50,    17,     0,     0,    31,    42,
       0,     4,    22,     6,     0,    30,     6,     0,     0,    40,
     115,   131,   135,     0,   100,   101,   111,   112,   113,   105,
     106,   107,   108,   109,   110,    96,    97,    98,    99,   102,
     123,   133,     0,     0,     0,     0,    72,    59,     0,    63,
      62,    74,    14,     0,     0,    20,    77,     0,     0,     0,
       0,   125,    87,     0,    79,     0,    86,    24,    28,     0,
       0,     0,    34,    35,    36,    39,    51,    43,    41,     0,
     130,     0,   122,    68,    69,     0,    67,     0,    70,     0,
       0,    57,    60,    19,     0,     0,     0,     0,    75,     0,
       0,     0,   127,     0,     0,     0,     0,    32,   134,   132,
       0,     0,    73,    71,    58,     0,     0,     0,     0,     0,
      76,    78,   126,     0,    85,     0,    37,    33,    66,     0,
      83,    80,    81,     0,   128,    38,    65,     0,    88,    89,
       0,    84,     0,     0,    82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     8,     9,    11,    12,    15,    19,    20,
      22,    43,    44,    45,    48,    49,    50,    51,    52,    53,
     115,   171,   172,   173,   174,    54,    55,    56,   119,    95,
      96,    97,    98,   148,    99,   100,   101,   102,   185,   186,
     103,   145,   146,   104,   162,   163,   164,   240,   141,    34,
      35,    36,    37,    38,   165,    39,    62,   142,   123
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -140
static const yytype_int16 yypact[] =
{
      21,   -24,    43,    31,  -140,  -140,    69,    23,    49,    86,
      58,    23,  -140,  -140,    54,   100,   134,  -140,    70,    54,
    -140,    76,   133,   134,  -140,   134,   134,   134,   102,  -140,
    -140,  -140,  -140,   213,  -140,  -140,  -140,  -140,    48,  -140,
      67,  -140,  -140,    76,  -140,   -32,   114,   116,   165,   140,
    -140,  -140,   142,   137,  -140,   145,    27,   127,   238,   127,
     127,    88,  -140,   134,   134,   134,   134,   134,  -140,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     125,   134,  -140,   143,    76,  -140,  -140,  -140,  -140,  -140,
     130,   108,    67,   150,  -140,   154,  -140,  -140,  -140,  -140,
     152,  -140,  -140,  -140,  -140,  -140,    67,   139,  -140,  -140,
       8,  -140,   133,    69,     6,  -140,    69,   121,   160,  -140,
    -140,  -140,   323,    28,   127,   127,   127,   115,   115,   367,
     367,   367,   367,   367,   367,   115,   115,   127,   127,  -140,
    -140,   323,     4,    62,    50,     3,  -140,  -140,    39,  -140,
    -140,  -140,  -140,    85,   163,  -140,  -140,   134,   134,    59,
     144,   102,  -140,     5,  -140,   -20,  -140,  -140,  -140,    76,
      95,   -14,  -140,  -140,  -140,  -140,  -140,  -140,  -140,   134,
    -140,   134,  -140,   150,  -140,   117,  -140,    67,  -140,    76,
     151,  -140,  -140,  -140,   257,   301,   -11,   153,  -140,    17,
     155,   134,  -140,   134,   120,   121,     6,  -140,   323,   323,
      62,   203,  -140,  -140,  -140,    59,    59,   134,    59,   134,
    -140,  -140,  -140,   131,   323,   121,  -140,  -140,  -140,    67,
     180,  -140,   323,   192,  -140,  -140,  -140,    59,  -140,  -140,
     134,  -140,   312,    59,  -140
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,   -93,  -140,  -140,   201,  -140,  -140,   195,
    -140,  -140,   172,   -82,  -140,  -140,   104,  -140,  -140,  -140,
     161,  -140,    14,  -140,  -140,  -140,  -140,  -140,   103,   -91,
    -140,  -112,  -140,  -140,  -139,    77,   132,  -140,  -140,    12,
    -140,  -140,    42,  -140,   184,    74,  -121,  -140,   -16,  -140,
    -140,  -140,  -140,  -140,  -140,  -107,  -140,    33,  -140
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -64
static const yytype_int16 yytable[] =
{
      33,   151,   144,   166,   184,   177,   106,    57,   107,    58,
      59,    60,   169,   217,   188,   154,   198,   200,   110,   156,
     168,   201,   206,   175,     1,   218,   157,   110,   220,   158,
     207,   159,   170,   160,     4,   157,   202,   203,   158,   189,
     159,   199,   160,     5,   181,   122,   182,   124,   125,   126,
     127,   128,   166,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,    42,   117,   161,     6,   179,   110,
     114,   184,   180,     7,    83,   161,    84,   157,   221,   190,
     158,    10,   159,   191,   160,    80,    13,   204,   187,    81,
     107,    14,   166,   226,   230,   231,   212,   221,    85,    86,
      87,    88,    89,    16,    82,    23,    21,   144,   166,   166,
      90,   166,    18,   235,    91,    40,   241,   161,    24,    91,
     183,    94,   244,    92,   170,    93,    94,    63,    64,    65,
     166,    25,   121,   205,    42,   107,   166,    91,   236,    26,
      27,   194,   195,   149,    94,    61,    28,    29,    30,    31,
      32,    23,    85,    86,    87,    88,    89,   210,   225,   211,
     107,    46,    47,   208,    24,   209,   149,    94,    77,    78,
      79,   181,   108,   234,   109,   110,   112,    25,   113,   176,
     114,   116,    79,   140,   143,    26,    27,   224,   147,   -63,
     152,   153,    28,    29,    30,    31,    32,   155,   117,   193,
     237,   232,   197,   233,    63,    64,    65,    66,    67,   214,
     219,   229,    17,   222,    41,   105,   167,   118,   238,   239,
     227,   178,   228,   150,   242,    63,    64,    65,    66,    67,
     192,   213,   111,   196,   223,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    68,
      63,    64,    65,    66,    67,     0,     0,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    63,
      64,    65,    66,    67,     0,     0,   215,     0,     0,     0,
       0,     0,   120,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    63,    64,    65,    66,    67,     0,     0,
       0,     0,     0,   216,    63,    64,    65,    66,    67,     0,
       0,     0,     0,     0,   243,    63,    64,    65,    66,    67,
       0,     0,     0,     0,     0,     0,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    63,
      64,    65,    66,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,    75,    76,
      77,    78,    79
};

static const yytype_int16 yycheck[] =
{
      16,    92,    84,   110,   143,   117,    38,    23,    40,    25,
      26,    27,     6,    24,    11,   106,    11,    37,    10,    11,
     113,    41,    36,   116,     3,    36,    18,    10,    11,    21,
      44,    23,   114,    25,    58,    18,    56,    57,    21,    36,
      23,    36,    25,     0,    40,    61,    42,    63,    64,    65,
      66,    67,   159,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    58,    38,    58,    36,    40,    10,
      43,   210,    44,     4,     7,    58,     9,    18,   199,    40,
      21,    58,    23,    44,    25,    37,    37,   169,    38,    41,
      40,     5,   199,   205,   215,   216,   187,   218,    31,    32,
      33,    34,    35,    45,    56,    17,     6,   189,   215,   216,
      43,   218,    58,   225,    52,    45,   237,    58,    30,    52,
      58,    59,   243,    56,   206,    58,    59,    12,    13,    14,
     237,    43,    44,    38,    58,    40,   243,    52,   229,    51,
      52,   157,   158,    58,    59,    43,    58,    59,    60,    61,
      62,    17,    31,    32,    33,    34,    35,    40,    38,    42,
      40,    28,    29,   179,    30,   181,    58,    59,    53,    54,
      55,    40,    58,    42,    58,    10,    36,    43,    36,    58,
      43,    36,    55,    58,    41,    51,    52,   203,    58,    39,
      36,    39,    58,    59,    60,    61,    62,    58,    38,    36,
      20,   217,    58,   219,    12,    13,    14,    15,    16,    58,
      57,     8,    11,    58,    19,    43,   112,    56,    26,    27,
     206,   118,   210,    91,   240,    12,    13,    14,    15,    16,
     153,   189,    48,   159,   201,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    36,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    12,
      13,    14,    15,    16,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    12,    13,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    22,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    22,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    68,    69,    58,     0,    36,     4,    70,    71,
      58,    72,    73,    37,     5,    74,    45,    73,    58,    75,
      76,     6,    77,    17,    30,    43,    51,    52,    58,    59,
      60,    61,    62,   115,   116,   117,   118,   119,   120,   122,
      45,    76,    58,    78,    79,    80,    28,    29,    81,    82,
      83,    84,    85,    86,    92,    93,    94,   115,   115,   115,
     115,    43,   123,    12,    13,    14,    15,    16,    36,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      37,    41,    56,     7,     9,    31,    32,    33,    34,    35,
      43,    52,    56,    58,    59,    96,    97,    98,    99,   101,
     102,   103,   104,   107,   110,    79,    38,    40,    58,    58,
      10,   111,    36,    36,    43,    87,    36,    38,    87,    95,
      44,    44,   115,   125,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
      58,   115,   124,    41,    80,   108,   109,    58,   100,    58,
     103,    96,    36,    39,    96,    58,    11,    18,    21,    23,
      25,    58,   111,   112,   113,   121,   122,    83,    70,     6,
      80,    88,    89,    90,    91,    70,    58,    98,    95,    40,
      44,    40,    42,    58,   101,   105,   106,    38,    11,    36,
      40,    44,   102,    36,   115,   115,   112,    58,    11,    36,
      37,    41,    56,    57,    80,    38,    36,    44,   115,   115,
      40,    42,    96,   109,    58,    19,    22,    24,    36,    57,
      11,   113,    58,   124,   115,    38,    98,    89,   106,     8,
     113,   113,   115,   115,    42,    98,    96,    20,    26,    27,
     114,   113,   115,    22,   113
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

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
# if YYLTYPE_IS_TRIVIAL
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
        case 2:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
						it->second.afficher();
						
						cout << "\n\nTable des identificateurs\n";
						ti.afficher();
					;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 138 "parser.y"
    {
						//ts_program
						TableSymbole ts((yyvsp[(2) - (2)].id));
						Symbole* s = new SymboleProgramme((yyvsp[(2) - (2)].id));
						ts.inserer(s);
						ts_map.insert(TS_Pair((yyvsp[(2) - (2)].id), ts));
						tsCourante = (yyvsp[(2) - (2)].id);							
					;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
						while (!symboles.empty()) {
							Symbole* s = new SymboleVariable(symboles.back(), base_type);
							it->second.inserer(s);
							symboles.pop_back();
						}
					;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {
						symboles.push_back((yyvsp[(3) - (3)].id));						
					;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {
						symboles.push_back((yyvsp[(1) - (1)].id));
					;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
						it->second.afficher();

						//creation du symbole correspodant à la procédure
						Symbole* s = new SymboleProcedure(it->second.getId(), arite, &(it->second));

						//on remonte au contexte parent
						tsCourante = it->second.getParent();
						it = ts_map.find(tsCourante);

						//ajout du symbole procédure dans la table des symboles courante
						it->second.inserer(s);
					;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    {
						//ts_procedure
						//ajout du symbole procedure dans la table des symboles courante
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
												
						//creation d'une nouvelle table des symboles
						//qui devient la table des symboles courante
						TableSymbole ts((yyvsp[(2) - (2)].id), tsCourante);
						ts_map.insert(TS_Pair((yyvsp[(2) - (2)].id), ts));
						tsCourante = (yyvsp[(2) - (2)].id);
					;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
						
						arite = arguments.size();
						int i = arite;
						while (!arguments.empty()) {
							Symbole* s = it->second.getSymbole(arguments.back());
							SymboleArgument* sa = dynamic_cast<SymboleArgument*>(s);
							if (sa!=NULL) { 
								sa->setPosition(i);
							}
							arguments.pop_back();
							i--;
						}
					;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);					
						while (!symboles.empty()) {
							Symbole* s = new SymboleArgumentConstant(symboles.back(), base_type);
							it->second.inserer(s);
							arguments.push_back(symboles.back());
							symboles.pop_back();
						}
					;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 285 "parser.y"
    {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
						while (!symboles.empty()) {
							Symbole* s = new SymboleArgumentVariable(symboles.back(), base_type);
							it->second.inserer(s);
							arguments.push_back(symboles.back());
							symboles.pop_back();
						}
					;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    {
						map<int, TableSymbole>::iterator it;
						it = ts_map.find(tsCourante);
						it->second.afficher();
						
						//creation du symbole correspodant à la fonction
						Symbole* s = new SymboleFonction(it->second.getId(), arite, &(it->second));

						//on remonte au contexte parent
						tsCourante = it->second.getParent();
						it = ts_map.find(tsCourante);

						//ajout du symbole fonction dans la table des symboles courante
						it->second.inserer(s);
					;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 318 "parser.y"
    {
						//ts_fonction
												
						//creation d'une nouvelle table des symboles
						//qui devient la table des symboles courante
						TableSymbole ts((yyvsp[(2) - (2)].id), tsCourante);
						ts_map.insert(TS_Pair((yyvsp[(2) - (2)].id), ts));
						tsCourante = (yyvsp[(2) - (2)].id);
					;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 344 "parser.y"
    {base_type = "integer";}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 345 "parser.y"
    {base_type = "real";}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 346 "parser.y"
    {base_type = "boolean";}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 347 "parser.y"
    {base_type = "char";}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    {base_type = "string";}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 402 "parser.y"
    {
						//c3a_instr_while();
					;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 405 "parser.y"
    {
						//c3a_instr_repeat();
					;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 408 "parser.y"
    {
						//c3a_instr_for();
					;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 411 "parser.y"
    {
						//c3a_instr_ifthen();
					;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 414 "parser.y"
    {
						//c3a_instr_ifthenelse();
					;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 417 "parser.y"
    {
						//c3a_instr_affect();
					;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 420 "parser.y"
    {
						//c3a_instr_call();
					;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 423 "parser.y"
    {
						//c3a_instr_blockcode();
					;}
    break;



/* Line 1455 of yacc.c  */
#line 2003 "parser.c"
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



/* Line 1675 of yacc.c  */
#line 502 "parser.y"


int main(int argc, char* argv[]) {
	yyparse();
}


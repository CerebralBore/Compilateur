
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 42 "parser.y"

	int id;



/* Line 1676 of yacc.c  */
#line 124 "parser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;



/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    WHILE = 259,
    BLOCK_END = 260,
    DO = 261,
    IF = 262,
    ELSE = 263,
    SEMI = 264,
    COMMA = 265,
    CONSTANT = 266,
    OR_OP = 267,
    LQ_OP = 268,
    GQ_OP = 269,
    EQ_OP = 270,
    NQ_OP = 271,
    STRING_LITERAL = 272,
    SWITCH = 273,
    DEFAULT = 274,
    CASE = 275,
    FOR = 276,
    CONTINUE = 277,
    BREAK = 278,
    RETURN = 279,
    FUNCTION = 280,
    INTEGER = 281,
    FLOAT_NUMBER = 282,
    STRING = 283,
    BOOLEAN = 284,
    SET = 285,
    ARRAY = 286,
    MATRIZ = 287,
    VOID = 288,
    STRUCT = 289
  };
#endif
/* Tokens.  */
#define ID 258
#define WHILE 259
#define BLOCK_END 260
#define DO 261
#define IF 262
#define ELSE 263
#define SEMI 264
#define COMMA 265
#define CONSTANT 266
#define OR_OP 267
#define LQ_OP 268
#define GQ_OP 269
#define EQ_OP 270
#define NQ_OP 271
#define STRING_LITERAL 272
#define SWITCH 273
#define DEFAULT 274
#define CASE 275
#define FOR 276
#define CONTINUE 277
#define BREAK 278
#define RETURN 279
#define FUNCTION 280
#define INTEGER 281
#define FLOAT_NUMBER 282
#define STRING 283
#define BOOLEAN 284
#define SET 285
#define ARRAY 286
#define MATRIZ 287
#define VOID 288
#define STRUCT 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "parser.y"

	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	

#line 132 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

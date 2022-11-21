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
    SEMI = 263,
    ELSE = 264,
    CONSTANT = 265,
    OR_OP = 266,
    LQ_OP = 267,
    GQ_OP = 268,
    EQ_OP = 269,
    NQ_OP = 270,
    STRING_LITERAL = 271,
    SWITCH = 272,
    DEFAULT = 273,
    CASE = 274,
    FOR = 275,
    CONTINUE = 276,
    BREAK = 277,
    RETURN = 278,
    FUNCTION = 279,
    INTEGER = 280,
    FLOAT_NUMBER = 281,
    STRING = 282,
    BOOLEAN = 283,
    SET = 284,
    ARRAY = 285,
    MATRIZ = 286,
    VOID = 287,
    STRUCT = 288,
    LOWER_THAN_ELSE = 289
  };
#endif
/* Tokens.  */
#define ID 258
#define WHILE 259
#define BLOCK_END 260
#define DO 261
#define IF 262
#define SEMI 263
#define ELSE 264
#define CONSTANT 265
#define OR_OP 266
#define LQ_OP 267
#define GQ_OP 268
#define EQ_OP 269
#define NQ_OP 270
#define STRING_LITERAL 271
#define SWITCH 272
#define DEFAULT 273
#define CASE 274
#define FOR 275
#define CONTINUE 276
#define BREAK 277
#define RETURN 278
#define FUNCTION 279
#define INTEGER 280
#define FLOAT_NUMBER 281
#define STRING 282
#define BOOLEAN 283
#define SET 284
#define ARRAY 285
#define MATRIZ 286
#define VOID 287
#define STRUCT 288
#define LOWER_THAN_ELSE 289

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

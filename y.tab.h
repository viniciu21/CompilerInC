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
    IF = 260,
    ELSE = 261,
    CONSTANT = 262,
    TYPE_NAME = 263,
    OR_OP = 264,
    LQ_OP = 265,
    GQ_OP = 266,
    EQ_OP = 267,
    NQ_OP = 268,
    AND_OP = 269,
    INC_OP = 270,
    DEC_OP = 271,
    MUL_ASSIGN = 272,
    DIV_ASSIGN = 273,
    MOD_ASSIGN = 274,
    ADD_ASSIGN = 275,
    SUB_ASSIGN = 276,
    STRING_LITERAL = 277,
    SWITCH = 278,
    DEFAULT = 279,
    CASE = 280,
    FOR = 281,
    CONTINUE = 282,
    BREAK = 283,
    RETURN = 284,
    FUNCTION = 285,
    INTEGER = 286,
    FLOAT_NUMBER = 287,
    STRING = 288,
    BOOLEAN = 289,
    SET = 290,
    ARRAY = 291,
    MATRIZ = 292,
    VOID = 293,
    STRUCT = 294,
    LOWER_THAN_ELSE = 295
  };
#endif
/* Tokens.  */
#define ID 258
#define WHILE 259
#define IF 260
#define ELSE 261
#define CONSTANT 262
#define TYPE_NAME 263
#define OR_OP 264
#define LQ_OP 265
#define GQ_OP 266
#define EQ_OP 267
#define NQ_OP 268
#define AND_OP 269
#define INC_OP 270
#define DEC_OP 271
#define MUL_ASSIGN 272
#define DIV_ASSIGN 273
#define MOD_ASSIGN 274
#define ADD_ASSIGN 275
#define SUB_ASSIGN 276
#define STRING_LITERAL 277
#define SWITCH 278
#define DEFAULT 279
#define CASE 280
#define FOR 281
#define CONTINUE 282
#define BREAK 283
#define RETURN 284
#define FUNCTION 285
#define INTEGER 286
#define FLOAT_NUMBER 287
#define STRING 288
#define BOOLEAN 289
#define SET 290
#define ARRAY 291
#define MATRIZ 292
#define VOID 293
#define STRUCT 294
#define LOWER_THAN_ELSE 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parser.y"

	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	

#line 144 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

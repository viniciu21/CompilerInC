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
    NUMBER = 259,
    WHILE = 260,
    BLOCK_START = 261,
    BLOCK_END = 262,
    DO = 263,
    IF = 264,
    THEN = 265,
    ELSE = 266,
    SEMI = 267,
    ASSIGN = 268,
    TYPE = 269,
    COMMA = 270,
    TYPECOMPOUSE = 271,
    CONSTANT = 272,
    STRING_LITERAL = 273,
    OR_OP = 274,
    EQ_OP = 275,
    LE_OP = 276,
    DEFAULT = 277,
    CASE = 278,
    FOR = 279,
    CONTINUE = 280,
    BREAK = 281,
    RETURN = 282,
    GE_OP = 283,
    NE_OP = 284,
    SWITCH = 285,
    TYPE_COMPOUSE = 286
  };
#endif
/* Tokens.  */
#define ID 258
#define NUMBER 259
#define WHILE 260
#define BLOCK_START 261
#define BLOCK_END 262
#define DO 263
#define IF 264
#define THEN 265
#define ELSE 266
#define SEMI 267
#define ASSIGN 268
#define TYPE 269
#define COMMA 270
#define TYPECOMPOUSE 271
#define CONSTANT 272
#define STRING_LITERAL 273
#define OR_OP 274
#define EQ_OP 275
#define LE_OP 276
#define DEFAULT 277
#define CASE 278
#define FOR 279
#define CONTINUE 280
#define BREAK 281
#define RETURN 282
#define GE_OP 283
#define NE_OP 284
#define SWITCH 285
#define TYPE_COMPOUSE 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "parser.y"

	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	

#line 126 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

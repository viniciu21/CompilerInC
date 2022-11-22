/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    NUMBER = 259,                  /* NUMBER  */
    WHILE = 260,                   /* WHILE  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    CONSTANT = 263,                /* CONSTANT  */
    TYPE_NAME = 264,               /* TYPE_NAME  */
    OR_OP = 265,                   /* OR_OP  */
    LQ_OP = 266,                   /* LQ_OP  */
    GQ_OP = 267,                   /* GQ_OP  */
    EQ_OP = 268,                   /* EQ_OP  */
    NQ_OP = 269,                   /* NQ_OP  */
    AND_OP = 270,                  /* AND_OP  */
    INC_OP = 271,                  /* INC_OP  */
    DEC_OP = 272,                  /* DEC_OP  */
    MUL_ASSIGN = 273,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 274,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 275,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 276,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 277,              /* SUB_ASSIGN  */
    STRING_LITERAL = 278,          /* STRING_LITERAL  */
    SWITCH = 279,                  /* SWITCH  */
    DEFAULT = 280,                 /* DEFAULT  */
    CASE = 281,                    /* CASE  */
    FOR = 282,                     /* FOR  */
    CONTINUE = 283,                /* CONTINUE  */
    BREAK = 284,                   /* BREAK  */
    RETURN = 285,                  /* RETURN  */
    FUNCTION = 286,                /* FUNCTION  */
    INTEGER = 287,                 /* INTEGER  */
    FLOAT_NUMBER = 288,            /* FLOAT_NUMBER  */
    STRING = 289,                  /* STRING  */
    BOOLEAN = 290,                 /* BOOLEAN  */
    SET = 291,                     /* SET  */
    ARRAY = 292,                   /* ARRAY  */
    MATRIZ = 293,                  /* MATRIZ  */
    VOID = 294,                    /* VOID  */
    STRUCT = 295,                  /* STRUCT  */
    ASSIGN = 296,                  /* ASSIGN  */
    SUB = 297,                     /* SUB  */
    ADD = 298,                     /* ADD  */
    MUL = 299,                     /* MUL  */
    DIV = 300,                     /* DIV  */
    LT = 301,                      /* LT  */
    GT = 302,                      /* GT  */
    SEMI = 303,                    /* SEMI  */
    COMMA = 304,                   /* COMMA  */
    AT = 305,                      /* AT  */
    LPAR = 306,                    /* LPAR  */
    RPAR = 307,                    /* RPAR  */
    LBRAK = 308,                   /* LBRAK  */
    RBRAK = 309,                   /* RBRAK  */
    LBRAC = 310,                   /* LBRAC  */
    RBRAC = 311,                   /* RBRAC  */
    QUEST = 312,                   /* QUEST  */
    LOWER_THAN_ELSE = 313          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ID 258
#define NUMBER 259
#define WHILE 260
#define IF 261
#define ELSE 262
#define CONSTANT 263
#define TYPE_NAME 264
#define OR_OP 265
#define LQ_OP 266
#define GQ_OP 267
#define EQ_OP 268
#define NQ_OP 269
#define AND_OP 270
#define INC_OP 271
#define DEC_OP 272
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define STRING_LITERAL 278
#define SWITCH 279
#define DEFAULT 280
#define CASE 281
#define FOR 282
#define CONTINUE 283
#define BREAK 284
#define RETURN 285
#define FUNCTION 286
#define INTEGER 287
#define FLOAT_NUMBER 288
#define STRING 289
#define BOOLEAN 290
#define SET 291
#define ARRAY 292
#define MATRIZ 293
#define VOID 294
#define STRUCT 295
#define ASSIGN 296
#define SUB 297
#define ADD 298
#define MUL 299
#define DIV 300
#define LT 301
#define GT 302
#define SEMI 303
#define COMMA 304
#define AT 305
#define LPAR 306
#define RPAR 307
#define LBRAK 308
#define RBRAK 309
#define LBRAC 310
#define RBRAC 311
#define QUEST 312
#define LOWER_THAN_ELSE 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parser.y"

	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	

#line 190 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

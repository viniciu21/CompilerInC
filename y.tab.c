/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;



#line 82 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    MIN = 297,                     /* MIN  */
    PLUS = 298,                    /* PLUS  */
    MULT = 299,                    /* MULT  */
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
#define MIN 297
#define PLUS 298
#define MULT 299
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
	

#line 258 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_NUMBER = 4,                     /* NUMBER  */
  YYSYMBOL_WHILE = 5,                      /* WHILE  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_CONSTANT = 8,                   /* CONSTANT  */
  YYSYMBOL_TYPE_NAME = 9,                  /* TYPE_NAME  */
  YYSYMBOL_OR_OP = 10,                     /* OR_OP  */
  YYSYMBOL_LQ_OP = 11,                     /* LQ_OP  */
  YYSYMBOL_GQ_OP = 12,                     /* GQ_OP  */
  YYSYMBOL_EQ_OP = 13,                     /* EQ_OP  */
  YYSYMBOL_NQ_OP = 14,                     /* NQ_OP  */
  YYSYMBOL_AND_OP = 15,                    /* AND_OP  */
  YYSYMBOL_INC_OP = 16,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 17,                    /* DEC_OP  */
  YYSYMBOL_MUL_ASSIGN = 18,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 19,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 20,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 21,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 22,                /* SUB_ASSIGN  */
  YYSYMBOL_STRING_LITERAL = 23,            /* STRING_LITERAL  */
  YYSYMBOL_SWITCH = 24,                    /* SWITCH  */
  YYSYMBOL_DEFAULT = 25,                   /* DEFAULT  */
  YYSYMBOL_CASE = 26,                      /* CASE  */
  YYSYMBOL_FOR = 27,                       /* FOR  */
  YYSYMBOL_CONTINUE = 28,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 29,                     /* BREAK  */
  YYSYMBOL_RETURN = 30,                    /* RETURN  */
  YYSYMBOL_FUNCTION = 31,                  /* FUNCTION  */
  YYSYMBOL_INTEGER = 32,                   /* INTEGER  */
  YYSYMBOL_FLOAT_NUMBER = 33,              /* FLOAT_NUMBER  */
  YYSYMBOL_STRING = 34,                    /* STRING  */
  YYSYMBOL_BOOLEAN = 35,                   /* BOOLEAN  */
  YYSYMBOL_SET = 36,                       /* SET  */
  YYSYMBOL_ARRAY = 37,                     /* ARRAY  */
  YYSYMBOL_MATRIZ = 38,                    /* MATRIZ  */
  YYSYMBOL_VOID = 39,                      /* VOID  */
  YYSYMBOL_STRUCT = 40,                    /* STRUCT  */
  YYSYMBOL_ASSIGN = 41,                    /* ASSIGN  */
  YYSYMBOL_MIN = 42,                       /* MIN  */
  YYSYMBOL_PLUS = 43,                      /* PLUS  */
  YYSYMBOL_MULT = 44,                      /* MULT  */
  YYSYMBOL_DIV = 45,                       /* DIV  */
  YYSYMBOL_LT = 46,                        /* LT  */
  YYSYMBOL_GT = 47,                        /* GT  */
  YYSYMBOL_SEMI = 48,                      /* SEMI  */
  YYSYMBOL_COMMA = 49,                     /* COMMA  */
  YYSYMBOL_AT = 50,                        /* AT  */
  YYSYMBOL_LPAR = 51,                      /* LPAR  */
  YYSYMBOL_RPAR = 52,                      /* RPAR  */
  YYSYMBOL_LBRAK = 53,                     /* LBRAK  */
  YYSYMBOL_RBRAK = 54,                     /* RBRAK  */
  YYSYMBOL_LBRAC = 55,                     /* LBRAC  */
  YYSYMBOL_RBRAC = 56,                     /* RBRAC  */
  YYSYMBOL_QUEST = 57,                     /* QUEST  */
  YYSYMBOL_LOWER_THAN_ELSE = 58,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_59_ = 59,                       /* '('  */
  YYSYMBOL_60_ = 60,                       /* ')'  */
  YYSYMBOL_61_ = 61,                       /* '['  */
  YYSYMBOL_62_ = 62,                       /* ']'  */
  YYSYMBOL_63_ = 63,                       /* '.'  */
  YYSYMBOL_64_ = 64,                       /* ','  */
  YYSYMBOL_65_ = 65,                       /* '*'  */
  YYSYMBOL_66_ = 66,                       /* '+'  */
  YYSYMBOL_67_ = 67,                       /* '-'  */
  YYSYMBOL_68_ = 68,                       /* '!'  */
  YYSYMBOL_69_ = 69,                       /* '/'  */
  YYSYMBOL_70_ = 70,                       /* '%'  */
  YYSYMBOL_71_ = 71,                       /* '<'  */
  YYSYMBOL_72_ = 72,                       /* '>'  */
  YYSYMBOL_73_ = 73,                       /* '&'  */
  YYSYMBOL_74_ = 74,                       /* '^'  */
  YYSYMBOL_75_ = 75,                       /* '|'  */
  YYSYMBOL_76_ = 76,                       /* '?'  */
  YYSYMBOL_77_ = 77,                       /* ':'  */
  YYSYMBOL_78_ = 78,                       /* '='  */
  YYSYMBOL_79_ = 79,                       /* ';'  */
  YYSYMBOL_80_ = 80,                       /* '{'  */
  YYSYMBOL_81_ = 81,                       /* '}'  */
  YYSYMBOL_82_ = 82,                       /* '@'  */
  YYSYMBOL_YYACCEPT = 83,                  /* $accept  */
  YYSYMBOL_primary_expression = 84,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 85,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 86,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 87,          /* unary_expression  */
  YYSYMBOL_unary_operator = 88,            /* unary_operator  */
  YYSYMBOL_multiplicative_expression = 89, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 90,       /* additive_expression  */
  YYSYMBOL_relational_expression = 91,     /* relational_expression  */
  YYSYMBOL_equality_expression = 92,       /* equality_expression  */
  YYSYMBOL_and_expression = 93,            /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 94,   /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 95,   /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 96,    /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 97,     /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 98,    /* conditional_expression  */
  YYSYMBOL_assignment_expression = 99,     /* assignment_expression  */
  YYSYMBOL_assignment_operator = 100,      /* assignment_operator  */
  YYSYMBOL_expression = 101,               /* expression  */
  YYSYMBOL_constant_expression = 102,      /* constant_expression  */
  YYSYMBOL_declaration = 103,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 104,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 105,     /* init_declarator_list  */
  YYSYMBOL_type_specifier = 106,           /* type_specifier  */
  YYSYMBOL_specific_type = 107,            /* specific_type  */
  YYSYMBOL_direct_declarator = 108,        /* direct_declarator  */
  YYSYMBOL_parameter_list = 109,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 110,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 111,          /* identifier_list  */
  YYSYMBOL_direct_abstract_declarator = 112, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 113,              /* initializer  */
  YYSYMBOL_initializer_list = 114,         /* initializer_list  */
  YYSYMBOL_statement = 115,                /* statement  */
  YYSYMBOL_compound_statement = 116,       /* compound_statement  */
  YYSYMBOL_declaration_list = 117,         /* declaration_list  */
  YYSYMBOL_statement_list = 118,           /* statement_list  */
  YYSYMBOL_expression_statement = 119,     /* expression_statement  */
  YYSYMBOL_selection_statement = 120,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 121,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 122,           /* jump_statement  */
  YYSYMBOL_prog = 123,                     /* prog  */
  YYSYMBOL_function_definition = 124,      /* function_definition  */
  YYSYMBOL_external_declaration = 125      /* external_declaration  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   559

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,     2,     2,    70,    73,     2,
      59,    60,    65,    66,    64,    67,    63,    69,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    79,
      71,    78,    72,    76,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,    75,    81,     2,     2,     2,     2,
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
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    40,    40,    41,    42,    43,    47,    48,    49,    50,
      51,    52,    53,    57,    58,    62,    63,    64,    65,    69,
      70,    71,    72,    81,    82,    83,    84,    88,    89,    90,
     100,   101,   102,   103,   104,   108,   109,   110,   114,   115,
     119,   120,   124,   125,   129,   130,   134,   135,   139,   140,
     144,   145,   149,   150,   151,   152,   153,   154,   158,   159,
     163,   167,   168,   172,   173,   177,   178,   188,   189,   190,
     191,   195,   196,   197,   242,   243,   244,   245,   246,   247,
     248,   257,   258,   262,   263,   264,   268,   269,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   296,   297,   298,
     302,   303,   307,   308,   309,   310,   311,   315,   316,   317,
     318,   322,   323,   327,   328,   332,   333,   337,   338,   342,
     343,   344,   348,   349,   352,   353,   356,   357,   361,   362
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "NUMBER",
  "WHILE", "IF", "ELSE", "CONSTANT", "TYPE_NAME", "OR_OP", "LQ_OP",
  "GQ_OP", "EQ_OP", "NQ_OP", "AND_OP", "INC_OP", "DEC_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "STRING_LITERAL",
  "SWITCH", "DEFAULT", "CASE", "FOR", "CONTINUE", "BREAK", "RETURN",
  "FUNCTION", "INTEGER", "FLOAT_NUMBER", "STRING", "BOOLEAN", "SET",
  "ARRAY", "MATRIZ", "VOID", "STRUCT", "ASSIGN", "MIN", "PLUS", "MULT",
  "DIV", "LT", "GT", "SEMI", "COMMA", "AT", "LPAR", "RPAR", "LBRAK",
  "RBRAK", "LBRAC", "RBRAC", "QUEST", "LOWER_THAN_ELSE", "'('", "')'",
  "'['", "']'", "'.'", "','", "'*'", "'+'", "'-'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'&'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'",
  "'}'", "'@'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "type_specifier",
  "specific_type", "direct_declarator", "parameter_list",
  "parameter_declaration", "identifier_list", "direct_abstract_declarator",
  "initializer", "initializer_list", "statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement", "prog",
  "function_definition", "external_declaration", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,    40,
      41,    91,    93,    46,    44,    42,    43,    45,    33,    47,
      37,    60,    62,    38,    94,   124,    63,    58,    61,    59,
     123,   125,    64
};
#endif

#define YYPACT_NINF (-155)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     519,  -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,   296,
     456,   -61,   504,  -155,  -155,   -41,  -155,   482,   482,  -155,
     482,  -155,  -155,  -155,  -155,   319,  -155,    99,   -10,  -155,
      -5,   143,     6,   204,   -16,    28,    35,   136,    -6,  -155,
    -155,   -31,  -155,  -155,    16,  -155,   183,   -35,   183,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,   -21,  -155,   -50,  -155,
    -155,   365,   482,   126,  -155,  -155,  -155,  -155,  -155,  -155,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   482,   482,   319,  -155,
     142,    19,   388,   114,  -155,    16,  -155,   482,    46,  -155,
    -155,    43,  -155,    70,  -155,  -155,  -155,  -155,  -155,  -155,
      -5,    -5,   143,   143,   143,   143,     6,     6,   204,   -16,
      28,    35,   136,   -37,  -155,  -155,  -155,  -155,    77,    61,
    -155,    64,  -155,  -155,   102,    95,   100,   107,   160,  -155,
    -155,   -29,  -155,  -155,  -155,   181,   227,  -155,  -155,  -155,
    -155,   -35,  -155,  -155,  -155,  -155,   482,  -155,   482,   403,
     411,    81,    84,  -155,   183,  -155,   171,  -155,   482,   482,
     342,  -155,   -23,  -155,  -155,  -155,   250,  -155,  -155,  -155,
    -155,  -155,  -155,    75,   264,  -155,   129,    14,   435,  -155,
    -155,    92,    97,   342,  -155,  -155,  -155,  -155,  -155,  -155,
     105,  -155,   134,   273,   273,   458,  -155,  -155,  -155,   192,
     273,   111,   273,  -155,   273,  -155,  -155
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    70,    68,    69,    72,    73,    67,    71,   129,     0,
      63,     0,     0,   128,   124,     2,     3,     0,     0,     4,
       0,    19,    20,    21,    22,     0,     6,    15,    23,    18,
      27,    30,    35,    38,    40,    42,    44,    46,    48,    50,
      97,     0,    65,    74,     0,    64,    63,     0,     0,     1,
     125,    61,     2,    16,    17,    58,     0,   100,     0,    11,
      12,     0,     0,     0,    53,    54,    55,    56,    57,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
       0,     0,     0,     0,   126,     0,     5,     0,     0,    98,
       8,     0,    13,     0,    10,    51,    24,    25,    26,    23,
      28,    29,    33,    34,    31,    32,    36,    37,    39,    41,
      43,    45,    47,     0,    66,    75,    86,    80,    85,     0,
      81,     0,    77,    60,     0,     0,     0,     0,     0,   115,
     107,     0,   111,   113,   102,     0,     0,   103,   104,   105,
     106,     0,    59,    99,   101,     9,     0,     7,     0,     0,
       0,    83,    84,    78,     0,    79,     0,    76,     0,     0,
       0,   122,     0,   116,   109,   112,     0,   108,   114,   127,
      14,    49,    93,     0,     0,    89,     0,     0,     0,    82,
      87,     0,     0,     0,   123,   110,    94,    88,    90,    95,
       0,    91,     0,     0,     0,     0,    96,    92,   119,   117,
       0,     0,     0,   120,     0,   118,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,  -155,  -155,    12,  -155,   149,   206,   157,   106,
     122,   123,   127,   135,  -155,   -87,    11,  -155,   -20,  -154,
     -86,    -9,  -155,    13,  -155,     5,  -143,    65,  -155,    72,
     -22,  -155,    60,   -45,  -155,    89,  -138,  -155,  -155,  -155,
    -155,  -155,   229
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    26,    27,   101,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    55,    70,   141,   134,
       8,     9,    41,    46,    11,    90,   129,   130,   131,   162,
      42,    58,   143,   144,   145,   146,   147,   148,   149,   150,
      12,    13,    14
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      56,    45,    94,    57,    86,   133,   186,   142,    64,    65,
      66,    67,    68,    10,    98,    47,   183,    76,    77,    43,
      40,    48,   126,     1,    91,    10,    92,    97,     1,    53,
      54,    99,   193,    88,   202,    97,    40,    45,    51,    96,
     158,    97,   103,    97,   200,    93,     2,     3,    89,    52,
     173,     2,     3,     6,    16,   205,   194,    82,     6,   175,
      71,    95,    17,    18,    72,    73,   124,   123,    69,    19,
      87,   181,   102,   133,   199,    44,   154,    78,    79,   127,
      43,   105,   128,   106,   107,   108,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,    40,
     151,   133,    83,   155,   109,    20,   179,   156,   152,    40,
      84,    21,    22,    23,    24,    59,    60,    52,   172,   135,
     136,   163,    16,     1,   165,   164,    25,   153,   166,   104,
      17,    18,   157,   161,    97,   196,   159,    19,   160,   164,
      91,   137,    92,   187,   138,   188,     2,     3,   191,   192,
     128,    85,   203,     6,   168,   128,    97,   204,    61,   169,
      62,    97,    63,    52,   167,   206,   170,   180,    16,   164,
     109,   214,   109,    20,   190,    97,    17,    18,   128,    21,
      22,    23,    24,    19,    52,   211,   135,   136,   118,    16,
       1,   198,     1,   139,    93,   140,   207,    17,    18,   212,
     109,    91,   125,    92,    19,   119,   178,   120,   137,    74,
      75,   138,   121,     2,     3,     2,     3,    80,    81,    20,
       6,   122,     6,   110,   111,    21,    22,    23,    24,   189,
      52,   184,   135,   136,   176,    16,   178,   116,   117,   171,
      20,    50,     0,    17,    18,     0,    21,    22,    23,    24,
      19,     0,     0,    52,   137,   135,   136,   138,    16,     0,
     139,    93,   174,   208,   209,     0,    17,    18,     0,     0,
     213,     0,   215,    19,   216,     0,    52,   137,   135,   136,
     138,    16,   112,   113,   114,   115,    20,     0,     0,    17,
      18,     0,    21,    22,    23,    24,    19,     0,     0,    15,
     137,     0,     0,   138,    16,     0,   139,    93,   177,    20,
       0,     0,    17,    18,     0,    21,    22,    23,    24,    19,
       0,     0,    52,   187,   197,   188,     0,    16,     0,   139,
      93,   195,    20,     0,     0,    17,    18,     0,    21,    22,
      23,    24,    19,     0,     0,    52,     0,     0,     0,     0,
      16,     0,   139,    93,     0,    20,     0,     0,    17,    18,
       0,    21,    22,    23,    24,    19,     0,     0,    52,     0,
       0,     0,     0,    16,     0,     0,    25,     0,    20,     0,
       0,    17,    18,     0,    21,    22,    23,    24,    19,     0,
       0,    52,     0,     0,     0,     0,    16,     0,     0,    25,
       0,    20,     0,     0,    17,    18,    43,    21,    22,    23,
      24,    19,     1,     0,    52,     0,     0,     0,     0,    16,
       0,   139,     0,     0,    20,   100,     0,    17,    18,     0,
      21,    22,    23,    24,    19,     2,     3,     0,    52,     0,
       0,     0,     6,    16,     0,     0,     0,    20,     0,     0,
     132,    17,    18,    21,    22,    23,    24,     0,    19,    43,
       0,    52,   159,   182,   160,     1,    16,     0,     0,     0,
      20,     0,     0,   185,    17,    18,    21,    22,    23,    24,
       0,    19,     0,     0,     0,    52,     0,     0,     2,     3,
      16,     0,     0,     0,    20,     6,     0,   201,    17,    18,
      21,    22,    23,    24,    49,    19,     0,     0,     0,     0,
       0,     0,     0,     1,     0,    44,     0,    20,   210,     0,
       0,     0,     0,    21,    22,    23,    24,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     0,     0,
       4,    20,     5,     6,     7,     0,     0,    21,    22,    23,
      24,     2,     3,     0,     0,     4,     0,     5,     6,     7
};

static const yytype_int16 yycheck[] =
{
      20,    10,    47,    25,    10,    92,   160,    93,    18,    19,
      20,    21,    22,     0,    64,    10,   159,    11,    12,     3,
       9,    82,     3,     9,    59,    12,    61,    64,     9,    17,
      18,    81,   170,    64,   188,    64,    25,    46,    79,    60,
      77,    64,    62,    64,   187,    80,    32,    33,    79,     3,
      79,    32,    33,    39,     8,   193,    79,    73,    39,   145,
      65,    48,    16,    17,    69,    70,    88,    87,    78,    23,
      76,   158,    61,   160,    60,    59,    98,    71,    72,    60,
       3,    70,    91,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    88,
      95,   188,    74,    60,    92,    59,   151,    64,    97,    98,
      75,    65,    66,    67,    68,    16,    17,     3,   138,     5,
       6,    60,     8,     9,    60,    64,    80,    81,    64,     3,
      16,    17,    62,   128,    64,    60,    59,    23,    61,    64,
      59,    27,    61,    59,    30,    61,    32,    33,   168,   169,
     159,    15,    60,    39,    59,   164,    64,    60,    59,    59,
      61,    64,    63,     3,    62,    60,    59,   156,     8,    64,
     158,    60,   160,    59,     3,    64,    16,    17,   187,    65,
      66,    67,    68,    23,     3,   205,     5,     6,    82,     8,
       9,    62,     9,    79,    80,    81,    62,    16,    17,     7,
     188,    59,    60,    61,    23,    83,   146,    84,    27,    66,
      67,    30,    85,    32,    33,    32,    33,    13,    14,    59,
      39,    86,    39,    74,    75,    65,    66,    67,    68,   164,
       3,   159,     5,     6,   145,     8,   176,    80,    81,    79,
      59,    12,    -1,    16,    17,    -1,    65,    66,    67,    68,
      23,    -1,    -1,     3,    27,     5,     6,    30,     8,    -1,
      79,    80,    81,   203,   204,    -1,    16,    17,    -1,    -1,
     210,    -1,   212,    23,   214,    -1,     3,    27,     5,     6,
      30,     8,    76,    77,    78,    79,    59,    -1,    -1,    16,
      17,    -1,    65,    66,    67,    68,    23,    -1,    -1,     3,
      27,    -1,    -1,    30,     8,    -1,    79,    80,    81,    59,
      -1,    -1,    16,    17,    -1,    65,    66,    67,    68,    23,
      -1,    -1,     3,    59,    60,    61,    -1,     8,    -1,    79,
      80,    81,    59,    -1,    -1,    16,    17,    -1,    65,    66,
      67,    68,    23,    -1,    -1,     3,    -1,    -1,    -1,    -1,
       8,    -1,    79,    80,    -1,    59,    -1,    -1,    16,    17,
      -1,    65,    66,    67,    68,    23,    -1,    -1,     3,    -1,
      -1,    -1,    -1,     8,    -1,    -1,    80,    -1,    59,    -1,
      -1,    16,    17,    -1,    65,    66,    67,    68,    23,    -1,
      -1,     3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    80,
      -1,    59,    -1,    -1,    16,    17,     3,    65,    66,    67,
      68,    23,     9,    -1,     3,    -1,    -1,    -1,    -1,     8,
      -1,    79,    -1,    -1,    59,    60,    -1,    16,    17,    -1,
      65,    66,    67,    68,    23,    32,    33,    -1,     3,    -1,
      -1,    -1,    39,     8,    -1,    -1,    -1,    59,    -1,    -1,
      62,    16,    17,    65,    66,    67,    68,    -1,    23,     3,
      -1,     3,    59,    60,    61,     9,     8,    -1,    -1,    -1,
      59,    -1,    -1,    62,    16,    17,    65,    66,    67,    68,
      -1,    23,    -1,    -1,    -1,     3,    -1,    -1,    32,    33,
       8,    -1,    -1,    -1,    59,    39,    -1,    62,    16,    17,
      65,    66,    67,    68,     0,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    59,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    66,    67,    68,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    -1,    -1,
      36,    59,    38,    39,    40,    -1,    -1,    65,    66,    67,
      68,    32,    33,    -1,    -1,    36,    -1,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    32,    33,    36,    38,    39,    40,   103,   104,
     106,   107,   123,   124,   125,     3,     8,    16,    17,    23,
      59,    65,    66,    67,    68,    80,    84,    85,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   105,   113,     3,    59,   104,   106,   108,    82,     0,
     125,    79,     3,    87,    87,    99,   101,   113,   114,    16,
      17,    59,    61,    63,    18,    19,    20,    21,    22,    78,
     100,    65,    69,    70,    66,    67,    11,    12,    71,    72,
      13,    14,    73,    74,    75,    15,    10,    76,    64,    79,
     108,    59,    61,    80,   116,   106,    60,    64,    64,    81,
      60,    86,    99,   101,     3,    99,    87,    87,    87,    87,
      89,    89,    90,    90,    90,    90,    91,    91,    92,    93,
      94,    95,    96,   101,   113,    60,     3,    60,   104,   109,
     110,   111,    62,    98,   102,     5,     6,    27,    30,    79,
      81,   101,   103,   115,   116,   117,   118,   119,   120,   121,
     122,   108,    99,    81,   113,    60,    64,    62,    77,    59,
      61,   108,   112,    60,    64,    60,    64,    62,    59,    59,
      59,    79,   101,    79,    81,   103,   118,    81,   115,   116,
      99,    98,    60,   109,   112,    62,   102,    59,    61,   110,
       3,   101,   101,   119,    79,    81,    60,    60,    62,    60,
     109,    62,   102,    60,    60,   119,    60,    62,   115,   115,
      60,   101,     7,   115,    60,   115,   115
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    83,    84,    84,    84,    84,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    87,    87,    87,    87,    88,
      88,    88,    88,    89,    89,    89,    89,    90,    90,    90,
      91,    91,    91,    91,    91,    92,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    97,    98,    98,
      99,    99,   100,   100,   100,   100,   100,   100,   101,   101,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   106,
     106,   107,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   109,   109,   110,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   113,   113,   113,
     114,   114,   115,   115,   115,   115,   115,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     2,     2,     1,     3,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     3,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     3,     2,     2,     1,     1,     3,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     2,     3,     3,
       4,     1,     2,     1,     2,     1,     2,     5,     7,     5,
       6,     7,     2,     3,     1,     2,     3,     5,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 63: /* declaration_specifiers: type_specifier  */
#line 172 "parser.y"
                         {printf("teste\n");}
#line 1608 "y.tab.c"
    break;

  case 68: /* type_specifier: INTEGER  */
#line 189 "parser.y"
                  {printf("inteiro\n");}
#line 1614 "y.tab.c"
    break;

  case 74: /* direct_declarator: ID  */
#line 242 "parser.y"
             {printf("TESTE\n");}
#line 1620 "y.tab.c"
    break;

  case 75: /* direct_declarator: '(' direct_declarator ')'  */
#line 243 "parser.y"
                                   {printf("ACHEI\n");}
#line 1626 "y.tab.c"
    break;

  case 76: /* direct_declarator: direct_declarator '[' constant_expression ']'  */
#line 244 "parser.y"
                                                        {printf("ACHEI\n");}
#line 1632 "y.tab.c"
    break;

  case 77: /* direct_declarator: direct_declarator '[' ']'  */
#line 245 "parser.y"
                                    {printf("ACHEI\n");}
#line 1638 "y.tab.c"
    break;

  case 78: /* direct_declarator: direct_declarator '(' parameter_list ')'  */
#line 246 "parser.y"
                                                   {printf("ACHEI\n");}
#line 1644 "y.tab.c"
    break;

  case 79: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 247 "parser.y"
                                                    {printf("ACHEI\n");}
#line 1650 "y.tab.c"
    break;

  case 80: /* direct_declarator: direct_declarator '(' ')'  */
#line 248 "parser.y"
                                    {printf("ACHEI\n");}
#line 1656 "y.tab.c"
    break;

  case 124: /* prog: external_declaration  */
#line 352 "parser.y"
                           {printf("external_declaration");}
#line 1662 "y.tab.c"
    break;

  case 125: /* prog: prog external_declaration  */
#line 353 "parser.y"
                                    {printf("external_declaration");}
#line 1668 "y.tab.c"
    break;

  case 126: /* function_definition: type_specifier direct_declarator compound_statement  */
#line 356 "parser.y"
                                                                          {printf("test");}
#line 1674 "y.tab.c"
    break;

  case 127: /* function_definition: specific_type '@' type_specifier direct_declarator compound_statement  */
#line 357 "parser.y"
                                                                                                                {printf("funcao tipo especifico \n");}
#line 1680 "y.tab.c"
    break;

  case 128: /* external_declaration: function_definition  */
#line 361 "parser.y"
                              {printf("função\n");}
#line 1686 "y.tab.c"
    break;

  case 129: /* external_declaration: declaration  */
#line 362 "parser.y"
                      {printf("declaração \n");}
#line 1692 "y.tab.c"
    break;


#line 1696 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 365 "parser.y"
 /* Fim da segunda seção */
int main (void) {
	return yyparse ( );
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}

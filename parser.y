%{
#include <stdio.h>

int yylex(void);
int yyerror(char *s);
extern int yylineno;
extern char * yytext;
%}

%union {
	int    iValue; 	/* integer value */
	char   cValue; 	/* char value */
	char * sValue;  /* string value */
	};

%token <sValue> ID
%token WHILE IF 
%token ELSE 
%token  TYPE_NAME
%token OR_OP LQ_OP GQ_OP EQ_OP NQ_OP AND_OP INC_OP DEC_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN
%token STRING_LITERAL 
%token FOR RETURN 
%token INTEGER FLOAT_NUMBER SET MATRIZ VOID STRUCT
%token ASSIGN SUB ADD MUL DIV LT GT
%token SEMI COMMA LPAR RPAR LBRAK RBRAK LBRAC RBRAC 
%token STRING BOOLEAN ARRAY AT QUEST FUNCTION NUMBER

%start prog

%% /* Inicio da segunda seção, onde colocamos as regras BNF */

type_specifier_declarator: INTEGER | FLOAT_NUMBER | STRING | BOOLEAN | specific_type ; 

specific_type: SET | MATRIZ | STRUCT; 

argument_list:  type_specifier_declarator ID | argument_list COMMA type_specifier_declarator ID

function_definition : type_specifier_declarator ID LPAR argument_list RPAR LBRAC  RBRAC {printf("funcao normal \n");}
					| type_specifier_declarator ID LPAR RPAR LBRAC  RBRAC {printf("funcao normal \n");}
					| VOID ID LPAR RPAR LBRAC  RBRAC {printf("funcao normal \n");}
					| specific_type AT type_specifier_declarator ID LPAR argument_list RPAR LBRAC RBRAC {printf("funcao tipo especifico \n");} 
					| specific_type AT type_specifier_declarator ID LPAR RPAR LBRAC RBRAC {printf("funcao tipo especifico \n");} 
					;


//value_assgn : expression | set;

//set: LPAR RPAR | LPAR expression RPAR;

//expression: 

declaration : type_specifier_declarator ID  {printf("declaration explicit \n");}
	        | type_specifier_declarator ID ASSIGN;// assgn; 
			;

alts : alt
	 | alts alt
	 ;

alt : function_definition {printf("função definicao\n");}
	| declaration SEMI {printf("declaração \n");}
	;


prog: alts;


%% /* Fim da segunda seção */

int main (void) {
	return yyparse ( );
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}

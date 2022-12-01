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
%token LQ_OP GQ_OP EQ_OP INC_OP DEC_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN
%token STRING_LITERAL 
%token FOR RETURN 
%token INTEGER FLOAT_NUMBER SET MATRIZ VOID STRUCT
%token ASSIGN SUB ADD MUL DIV LT GT
%token SEMI COMMA LPAR RPAR LBRAK RBRAK LBRAC RBRAC 
%token STRING BOOLEAN ARRAY AT QUEST FUNCTION NUMBER

%right ASSIGN
%left AND_OP OR_OP 
%left LQ_OP GQ_OP EQ_OP NQ_OP 


%start prog


%% /* Inicio da segunda seção, onde colocamos as regras BNF */

Declaration: type_specifier_declarator Assignment SEMI {printf("entrou aqui");}
	| Assignment SEMI  	
	| FunctionCall SEMI 	
	/* | ArrayUsage SEMI	 */
	/* | Type ArrayUsage SEMI    */
	/* | StructStmt SEMI	 */
	| error	
	;

/* Assignment block */
Assignment: ID ASSIGN Assignment
	| ID ASSIGN FunctionCall
	/* | ID ASSIGN ArrayUsage */
	/* | ArrayUsage ASSIGN Assignment */
	| ID COMMA Assignment
	| NUMBER COMMA Assignment
	| ID ADD Assignment
	| ID SUB Assignment
	| ID MUL Assignment
	| ID DIV Assignment	
	| NUMBER ADD Assignment
	| NUMBER SUB Assignment
	| NUMBER MUL Assignment
	| NUMBER DIV Assignment
	| DIV Assignment DIV	
	| LPAR Assignment RPAR
	| SUB LPAR Assignment RPAR
	| SUB NUMBER
	| SUB ID
	|   NUMBER
	|   ID
	;

/* Function Call Block */
FunctionCall : ID LPAR RPAR
	| ID LPAR argument_list RPAR
	;


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

/* declaration : type_specifier_declarator ID  {printf("declaration explicit \n");}
	        | type_specifier_declarator ID ASSIGN;// assgn; 
			; */

alts : alt
	 | alts alt
	 ;

alt : function_definition {printf("função definicao\n");}
	| Declaration {printf("declaração \n");}
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

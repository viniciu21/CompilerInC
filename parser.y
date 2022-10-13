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
%token <iValue> NUMBER
%token WHILE BLOCK_START BLOCK_END DO IF THEN ELSE SEMI ASSIGN TYPE COMMA TYPE_COMPOUSE

%start prog

%type <sValue> stm

%% /* Inicio da segunda seção, onde colocamos as regras BNF */

prog : functionDeclarationList stmlist 		{}
	 ;

blockType : 'FUNCTION' | 'FOR' | 'IF' | 'ELSE' | 'WHILE' | 'ELIF' ;

startBlock : BLOCK_START blockType

endBlock : BLOCK_END blockType

functionDeclarationList : startBlock TYPE ID '(' argParamList ')'  		{}
						| startBlock TYPE ID '(' ')' 					{}
						;

argParamList : argParam							  				   		{}	
			 | argParamList COMMA argParam 			   				   	{}

argParam : TYPE ID 														{}
		 | TYPE_COMPOUSE '@' TYPE ID									{}


stmlist : stm															{}
		| stmlist SEMI stm   											{}
	    ;

stm : assg SEMI
	| ;

assg : TYPE ID ASSIGN exp 												{}
	 | TYPE ID 															{}
	 | TYPE_COMPOUSE '@' TYPE ID ASSIGN exp 							{}
	 | TYPE_COMPOUSE '@' TYPE ID 										{}
	 ;

exp : ID 																{}
	| compoundOperator 													{}
	| functioCall														{}
	| LITERAL
	;
	
functioCall : ID '(' argValueList ')' 									{}
			| ID '(' ')'												{}
			;	

argValueList : argValue 												{}
		  | argValueList COMMA argValue									{}
		  ;

argValue : ID | LITERAL | exp;  										{}

compoundOperator : ; // Expressões com valores mateticos trabalhdno com operaadores ex: 1 + 1 ou 2 * x  * (1 + 1)

operator: ; 

%% /* Fim da segunda seção */

int main (void) {
	return yyparse();
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}
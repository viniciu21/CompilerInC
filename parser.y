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
%token WHILE  BLOCK_END DO IF 
%token ELSE SEMI  
%token COMMA CONSTANT 
%token OR_OP LQ_OP GQ_OP EQ_OP NQ_OP
%token STRING_LITERAL 
%token SWITCH DEFAULT CASE FOR CONTINUE BREAK RETURN FUNCTION
%token INTEGER FLOAT_NUMBER STRING BOOLEAN SET ARRAY MATRIZ VOID STRUCT

%start prog

%% /* Inicio da segunda seção, onde colocamos as regras BNF */

type : INTEGER  														{}
	 | FLOAT_NUMBER 													{}
	 | STRING 															{}
	 | BOOLEAN															{}
	 | ARRAY 															{}
	 | VOID																{}
	 ;

typeCompouse  : STRUCT '@' type 										{}
			  | MATRIZ '@' type 										{}
			  | SET '@' type 											{}									
			  ;

argParamList : argParam							  				   		{}	
			 | argParamList COMMA argParam 			   				   	{}

argParam : type ID 														{}
		 | typeCompouse '@' type ID										{}
		 ;

functionDeclaration : 	type ID '(' argParamList ')' {}
					|	type ID '(' ')' {}
					|	typeCompouse ID '(' argParamList ')' {}
					|	typeCompouse ID '(' ')' {}
					;		

statement :  compoundStatement
		  |	selectionStatement;
		  | jumpStatement;

jumpStatement
	: CONTINUE 
	| BREAK 
	| RETURN 
	| RETURN expression 
	;

selectionStatement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	;

statementList   : statement ';'
				| statementList statement ';' ;

compoundStatement 	:  	statementList  									{}
					|  	declarationList  								{}
					|  	declarationList statementList 					{}
					;

functionDefinition 	: FUNCTION functionDeclaration compoundStatement BLOCK_END FUNCTION {}	//VOLTAR AQUI 2
					;

functionDefinitionList	: functionDefinition 							{}
						| functionDefinitionList functionDefinition  	{}
						;

declarationList: ';';

alt : functionDefinitionList {}
	| declarationList 		{} 
	; //VOLTAR AQUI 
alts : alt | alts alt;
prog : alts ;

%% /* Fim da segunda seção */

int main (void) {
	return yyparse();
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}
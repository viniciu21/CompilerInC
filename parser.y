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
%token WHILE BLOCK_START BLOCK_END DO IF THEN ELSE SEMI ASSIGN TYPE COMMA TYPECOMPOUSE

%start prog

%type <sValue> stm

%% /* Inicio da segunda seção, onde colocamos as regras BNF */

prog : alts ;

alts : alt | alts alt;

alt : functionDefinitionList | declarationList;

functionDefinitionList	: functionDefinitionList 						{}
						| functionDefinition functionDefinitionList 	{}

functionDefinition 	: functionDeclaration compoundStatement	endBlock	{}
					;

compoundStatement 	:  	statementList  									{}
					|  	declarationList 								{}
					|  	declarationList statementList 					{}
					;

statementList   : statement | statementList statement ;

declarationList : declaration 			   	   {}
				| declarationList declaration  {} 
				;

declaration	: declarationSpecifiers initDeclaratorList ';';

declarationSpecifiers: typeSpecifier;

initDeclaratorList
	: initDeclarator
	| initDeclaratorList ',' initDeclarator
	;

initDeclarator : declarator
			   | declarator ASSIGN initializer

declarator	: IDS ;

constantExpression
	: conditionalExpression
	;

initializer : assgExpression
	| '{' initializerList '}'
	| '{' initializerList ',' '}'
	;

initializerList
	: initializer
	| initializerList ',' initializer
	;

assgExpression: conditionalExpression {};

primaryExpression
	: ID
	| CONSTANT
	| STRING_LITERAL
	| '(' expression ')'
	;

expression
	: assgExpression
	| expression ',' assgExpression
	;

conditionalExpression: OrExpression
	| OrExpression '?' expression ':' conditionalExpression {}
	; 

OrExpression: AndExpression
	| OrExpression OR_OP AndExpression
	;

AndExpression: EqExpression 
	| AndExpression EQ_OP EqExpression
	;

relationExpression
	: additiveExpression
	| relationExpression '<' additiveExpression
	| relationExpression '>' additiveExpression
	| relationExpression LE_OP additiveExpression
	| relationExpression GE_OP additiveExpression
	;

additiveExpression 
	: multiplicativeExpression
	| additiveExpression '+' multiplicativeExpression
	| additiveExpression '-' multiplicativeExpression
	;

multiplicativeExpression
	: multiplicativeExpression '*' primaryExpression
	| multiplicativeExpression '/' primaryExpression
	| multiplicativeExpression '%' primaryExpression
	;

EqExpression
	: relationExpression
	| EqExpression EQ_OP relationExpression
	| EqExpression NE_OP relationExpression
	;

typeSpecifier : TYPE         											{}
			  | typeCompouse 											{}
			  ;

IDS : ID {} 
	| IDS ',' ID {}
	;

statement
	: labeledStatement
	| compoundStatement
	| expressionStatement 
	| jumpStatement;

labeledStatement 
	: CASE constantExpression ':' statement
	| DEFAULT ':' statement
	;

selectionStatement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iterationStatement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expressionStatement expressionStatement ')' statement
	| FOR '(' expressionStatement expressionStatement expression ')' statement
	;

expressionStatement
	: ';'
	| expression ';'
	;

jumpStatement
	: CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

typeCompouse  : TYPECOMPOUSE '@' TYPE {}

functionDeclaration :  TYPE ID '(' argParamList ')' 					{}
					|  TYPE ID '(' ')'  								{}
					|  TYPECOMPOUSE ID '(' argParamList ')' 			{}
					|  TYPECOMPOUSE ID '(' ')'  						{}
					;

blockType : 'FUNCTION' | 'FOR' | 'IF' | 'ELSE' | 'WHILE' | 'ELIF' ;

endBlock : BLOCK_END blockType

argParamList : argParam							  				   		{}	
			 | argParamList COMMA argParam 			   				   	{}

argParam : TYPE ID 														{}
		 | TYPE_COMPOUSE '@' TYPE ID									{}
		 ;

%% /* Fim da segunda seção */

int main (void) {
	return yyparse();
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}
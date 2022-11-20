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
%token WHILE BLOCK_START BLOCK_END DO IF 
%token THEN ELSE SEMI ASSIGN TYPE 
%token COMMA TYPECOMPOUSE CONSTANT 
%token STRING_LITERAL OR_OP EQ_OP 
%token LE_OP DEFAULT CASE FOR CONTINUE BREAK RETURN GE_OP
%token NE_OP SWITCH TYPE_COMPOUSE
%token LEFT_PARENTHESIS RIGHT_PARENTHESIS AT

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

declaration	: declarationSpecifiers initDeclaratorList SEMI;

declarationSpecifiers: typeSpecifier;

initDeclaratorList
	: initDeclarator
	| initDeclaratorList ',' initDeclarator
	;

initDeclarator : declarator
			   | declarator '=' initializer

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
	| OrExpression '||' AndExpression
	;

AndExpression: EqExpression 
	| AndExpression '==' EqExpression
	;

relationExpression
	: additiveExpression
	| relationExpression '<' additiveExpression
	| relationExpression '>' additiveExpression
	| relationExpression '=>' additiveExpression
	| relationExpression '=<' additiveExpression
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
	| EqExpression '==' relationExpression
	| EqExpression '!=' relationExpression
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
	| DO statement WHILE '(' expression ')' SEMI
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

typeCompouse  : TYPECOMPOUSE AT TYPE {}

functionDeclaration :  TYPE ID '(' argParamList ')' 					{}
					|  TYPE ID '(' ')'  								{}
					|  TYPECOMPOUSE ID '(' argParamList ')' 			{}
					|  TYPECOMPOUSE ID '(' ')'  						{}
					;

blockType : FUNCTION | FOR | IF | ELSE | WHILE ;

endBlock : BLOCK_END blockType

argParamList : argParam							  				   		{}	
			 | argParamList COMMA argParam 			   				   	{}

argParam : TYPE ID 														{}
		 | TYPE_COMPOUSE AT TYPE ID										{}
		 ;

%% /* Fim da segunda seção */

int main (void) {
	return yyparse();
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}
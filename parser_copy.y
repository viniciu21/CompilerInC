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
%token SEMI ELSE 
%token CONSTANT 
%token OR_OP LQ_OP GQ_OP EQ_OP NQ_OP AND_OP
%token STRING_LITERAL 
%token SWITCH DEFAULT CASE FOR CONTINUE BREAK RETURN FUNCTION
%token INTEGER FLOAT_NUMBER STRING BOOLEAN SET ARRAY MATRIZ VOID STRUCT

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

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
			 | argParamList ',' argParam 			   				   	{}

argParam : type ID 														{}
		 | typeCompouse '@' type ID										{}
		 ;

functionDeclaration : 	type ID '(' argParamList ')' {}
					|	type ID '(' ')' {}
					|	typeCompouse ID '(' argParamList ')' {}
					|	typeCompouse ID '(' ')' {}
					;		

statement : selectionStatement {}
		  | jumpStatement {}
		  | expressionStatement {} 
		  | iterationStatement {}
		  | compoundStatement {}
		  ;

jumpStatement
	: RETURN  {}
	| RETURN expression {}
	;

conditionalExpression: OrExpression {}
	| OrExpression '?' expression ':' conditionalExpression {}
	; 

OrExpression: AndExpression {}
	| OrExpression OR_OP AndExpression {}
	;

expressionStatement
	: ';' {}
	| expression ';' {}
	;

iterationStatement
	: WHILE '(' expression ')' statement {}
	| DO statement WHILE '(' expression ')' SEMI {}
	| FOR '(' expressionStatement expressionStatement ')' statement {}
	| FOR '(' expressionStatement expressionStatement expression ')' statement {}
	;

AndExpression: EqExpression {}
	| AndExpression AND_OP EqExpression {}
	;

relationExpression
	: additiveExpression {}
	| relationExpression '<' additiveExpression {}
	| relationExpression '>' additiveExpression {}
	| relationExpression GQ_OP additiveExpression {}
	| relationExpression LQ_OP additiveExpression {}
	;

additiveExpression 
	: multiplicativeExpression {}
	| additiveExpression '+' multiplicativeExpression {}
	| additiveExpression '-' multiplicativeExpression {}
	;

primaryExpression
	: ID {}
	| CONSTANT { }
	| STRING_LITERAL {}
	| '(' expression ')' {}
	;


multiplicativeExpression 
	: /* empty */ {}
	| multiplicativeExpression '*' primaryExpression {}
	| multiplicativeExpression '/' primaryExpression {}
	| multiplicativeExpression '%' primaryExpression {}
	;

EqExpression
	: relationExpression {}
	| EqExpression EQ_OP relationExpression {}
	| EqExpression NQ_OP relationExpression {}
	;

expression
	: conditionalExpression {}
	| expression ',' conditionalExpression {}
	;

selectionStatement
	: IF '(' expression ')' statement %prec LOWER_THAN_ELSE {}
	| IF '(' expression ')' statement ELSE statement {}
	| SWITCH '(' expression ')' statement
	;

statementList   : statement ';' {}
				| statementList statement ';'  {}
				;

compoundStatement 	:  	statementList  									{}
					|  	declarationList  								{}
					|  	declarationList statementList 					{}
					;

functionDefinitionList	: FUNCTION functionDeclaration compoundStatement BLOCK_END FUNCTION 							{}
						| functionDefinitionList FUNCTION functionDeclaration compoundStatement BLOCK_END FUNCTION  	{}
						;

typeSpecifier : type         											{}
			  | typeCompouse 											{}
			  ;

Ids : ID  {}
	| Ids ',' ID {} 

initDeclarator : initializer
			   | Ids '=' initializer
			   ;

initializer : conditionalExpression {}
	| '{' initializerList '}' {}
	| '{' initializerList ',' '}' {}
	;

initializerList
	: initializer {}
	| initializerList ',' initializer {}
	;

initDeclaratorList
	: initDeclarator {}
	| initDeclaratorList ',' initDeclarator {}
	;

declarationList : typeSpecifier initDeclaratorList ';' 			   	   {}
				| declarationList typeSpecifier initDeclaratorList ';'  {} 
				;

alt : functionDefinitionList {}
	| declarationList 		{} 
	; 

alts : alt  {}
	 | alts alt {}
	 ;

prog : alts {} 
	 ;

%% /* Fim da segunda seção */

int main (void) {
	return yyparse();
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}
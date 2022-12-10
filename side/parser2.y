%token CONSTANT IDENTIFIER IF ELSE FOR WHILE GOTO RETURN VOID INT FLOAT STRING BOOL
%token OP_EQUAL_TO OP_NOT_EQUAL_TO
%start prog

%{
    extern int yyparse(void);
    extern int yylex(void);
    extern void yyerror(const char*);
    extern int yylineno;
%}

%%
/* grammar goes here */
prog : stmts ;

stmts : stmt ';'
| stmts stmt
;

stmt : function_definition
| function_call
| expression
;

function_definition : function_type IDENTIFIER '(' ')' '{' '}' ;

function_type : VOID | INT | FLOAT | STRING | BOOL ;

function_call : function_type IDENTIFIER '(' ')' ;

/* expression : equality-expression

equality-expression : additive-expression( ( 'OP_EQUAL_TO' | 'OP_NOT_EQUAL_TO' ) additive-expression ) *

additive-expression : multiplicative-expression ( ( '+' | '-' ) multiplicative-expression ) *

multiplicative-expression : primary ( ( '*' | '/' ) primary ) *

primary : '(' expression ')' | NUMBER | VARIABLE | '-' primary */



%%

#include <stdio.h>

extern char *yytext;

//***********************************************

void yyerror(const char *s) {
    printf("error: unexpected token '%s' in line %d \n", yytext, yylineno);
}

int main(int argc, char **argv) {
    return yyparse();
}
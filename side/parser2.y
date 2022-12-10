%token CONSTANT IDENTIFIER IF ELSE FOR WHILE GOTO RETURN VOID INT FLOAT STRING BOOL
%start prog

%{
    extern int yyparse(void);
    extern int yylex(void);
    extern void yyerror(const char*);
%}

%%
    /* grammar goes here */

%%

#include <stdio.h>

extern char *yytext;

//***********************************************

void yyerror(const char *s) {
    pprintf("error: unexpected token '%s'\n", yytext);
}

int main(int argc, char **argv) {
    return yyparse();
}
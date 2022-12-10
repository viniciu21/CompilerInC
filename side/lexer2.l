%{
    #include <stdio.h>
    #include "y.tab.h"
%}

D                    [0-9]
L                    [a-zA-Z_]
%%
"if"                 { return IF; }
"else"               { return ELSE; }
"for"                { return FOR; }
"while"              { return WHILE; }
"goto"               { return GOTO; }
"return"             { return RETURN; }
"void"               { return VOID; }
"int"                { return INT; }
"float"              { return FLOAT; }
"string"             { return STRING; }
"bool"               { return BOOL; }
";"                  { return ';'; }
","                  { return ','; }
"="                  { return '='; }
"*"                  { return '*'; }
"/"                  { return '/'; }
"+"                  { return '+'; }
"-"                  { return '-'; }
"("                  { return '('; }
")"                  { return ')'; }
"{"                  { return '{'; }
"}"                  { return '}'; }
"<"                  { return '<'; }
">"                  { return '>'; }
"=="                 { return OP_EQUAL_TO; }
"!="                 { return OP_NOT_EQUAL_TO}
[ \t\r]              { ; }
\n                   { yylineno++; }
{D}+                 { return CONSTANT; }
{L}({L}|{D})*        { return IDENTIFIER; }
.                    { printf("error: bad token '%s'\n", yytext); return 0; }
<<EOF>>              { return 0; }
%%

int yywrap(void) {
    return 1;
}

/* uncomment before running lexer2 without parser2 */
/* int main(int argc, char **argv) {
    while (yylex());
    return 0;
} */
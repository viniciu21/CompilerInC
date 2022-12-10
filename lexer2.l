%{
    #include <stdio.h>
%}

D                    [0-9]
L                    [a-zA-Z_]
%%
"if"                 { return 1; }
"else"               { return 1; }
"for"                { return 1; }
"while"              { return 1; }
"goto"               { return 1; }
"return"             { return 1; }
"void"               { return 1; }
"int"                { return 1; }
"float"              { return 1; }
"sting"              { return 1; }
"bool"               { return 1; }
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
[ \t\r]              { ; }
\n                   { yylineno++; }
{D}+                 { return 1; }
{L}({L}|{D})*        { return 1; }
.                    { printf("error: bad token '%s'\n", yytext); return 0; }
<<EOF>>              { return 0; }
%%

int yywrap(void) {
    return 1;
}

int main(int argc, char **argv) {
    while (yylex());
    return 0;
}
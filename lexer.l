%{
  #include <stdio.h>  
%}

%%


"do"      				    {printf("DO\n");}
"int"                 {printf("INTEGER\n");}
"float"               {printf("FLOAT NUMBER\n");}
"string"              {printf("STRING\n");}
"bool"                {printf("BOOLEAN\n");}
"set"                 {printf("SET\n");}
"array"               {printf("ARRAY\n");}
"matriz"              {printf("MATRIZ\n");}
"void"                {printf("VOID\n");}
"struct"              {printf("STRUCT\n");}
";"      				      {printf(";\n");}
"="					          {printf("=\n");}
","                   {printf(",\n");}
"@"                   {printf("@");}
"("			              { printf("("); }
")"			              { printf(")\n"); }
"["			              { printf("]\n"); }
"]"			              { printf("]\n"); }
"-"			              { printf("MINUS\n"); }
"+"			              { printf("PLUS\n"); }
"*"			              { printf("MULT\n"); }
"/"			              { printf("DIV\n"); }
"<"		              	{ printf("GREATER THAN\n"); }
">"			              { printf("LOWER THAN\n"); }
"?"			              { printf("TERNARY OPERATOR\n"); }
"&&"                  { printf("And Expression\n");}
"||"                  { printf("Or Expression\n");}
"<="			            { printf("lower of equal than\n"); }
">="			            { printf("greater of equal than\n"); }
"=="			            { printf("equal \n"); }
"!="			            { printf("not equal\n"); }
[ \n\t\r]+            {}
[0-9]+           	    { printf("NUMBER(%s)\n",yytext);}
(\/\*([^*]|[\r\n]|(\*+([^*\/]|[\r\n])))*\*+\/)|(\/\/.*) {printf("Comment: %s.\n", yytext);}
[for|FOR]*            {printf("FOR\n");}
[while|WHILE]*      	{printf("WHILE\n");}
[end|END]*      		  {printf("BLOCK_END\n");}
[if|IF]*              {printf("IF\n");}
[function|FUNCTION]*  {printf("FUNCTION\n");}
[else|ELSE]*      	  {printf("ELSE\n");}
L?\"(\\.|[^\\"])*\"	  { printf("STRING_LITERAL\n"); }
([a-zA-Z]+(?:_[a-zA-Z]+)*)	{printf("ID(%s)\n",yytext);}
.                     {printf("invalid character (%s) \n", yytext);}

%%

#ifndef yywrap
   int yywrap (void) {return 1;}
#endif

int main(void)
{
  yylex();  
  return 0;
}
%{
  #include <stdio.h>  
%}

%%


"do"      				    {return DO;}
"int"                 {return INTEGER;}
"float"               {return FLOAT NUMBER;}
"string"              {return STRING;}
"bool"                {return BOOLEAN;}
"set"                 {return SET;}
"array"               {return ARRAY;}
"matriz"              {return MATRIZ;}
"void"                {return VOID;}
"struct"              {return STRUCT;}
";"      				      {return ";";}
"="					          {return "=";}
","                   {return ",";}
"@"                   {return "@";}
"("			              { return "("; }
")"			              { return ")"; }
"["			              { return "]"; }
"]"			              { return "]"; }
"-"			              { return "-"; }
"+"			              { return "+"; }
"*"			              { return "*"; }
"/"			              { return "/"; }
"<"		              	{ return "<"; }
">"			              { return ">"; }
"?"			              { return "?"; }
"&&"                  { return "&&";}
"||"                  { return "||";}
"<="			            { return "<="; }
">="			            { return ">="; }
"=="			            { return "==" ; }
"!="			            { return "!="; }
[ \n\t\r]+            {}
[0-9]+           	    { return NUMBER(%s)\n",yytext);}
(\/\*([^*]|[\r\n]|(\*+([^*\/]|[\r\n])))*\*+\/)|(\/\/.*) {return Comment: %s.\n", yytext);}
"for"                 {return FOR;}
"while"      	        {return WHILE;}
"end"      		        {return BLOCK_END;}
"if"                  {return IF;}
"funtion"             {return FUNCTION;}
"else"      	        {return ELSE;}
L?\"(\\.|[^\\"])*\"	  {return STRING_LITERAL; }
([a-zA-Z]+(?:_[a-zA-Z]+)*)	{return ID;}
.                     {return invalid character (%s) \n", yytext);}

%%

#ifndef yywrap
   int yywrap (void) {return 1;}
#endif

int main(void)
{
  yylex();  
  return 0;
}
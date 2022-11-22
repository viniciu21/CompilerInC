%{
  #include <stdio.h>  
  #include "y.tab.h"
  
  extern int yyerror (char *msg); 
%}

%%


"do"      				    {return DO;}
"int"                 {return INTEGER;}
"float"               {return FLOAT_NUMBER;}
"string"              {return STRING;}
"bool"                {return BOOLEAN;}
"set"                 {return SET;}
"array"               {return ARRAY;}
"matriz"              {return MATRIZ;}
"void"                {return VOID;}
"struct"              {return STRUCT;}
";"      				      {return SEMI;}
"="					          {return ASSIGN;}
","                   {return COMMA;}
"@"                   {return AT;}
"("			              { return LPAR; }
")"			              { return RPAR; }
"["			              { return LBRA; }
"]"			              { return RBRA; }
"-"			              { return MIN; }
"+"			              { return PLUS; }
"*"			              { return MULT; }
"/"			              { return DIV; }
"<"		              	{ return LT; }
">"			              { return GT; }
"?"			              { return QUEST; }
"&&"                  { return AND_OP;}
"||"                  { return OR_OP;}
"<="			            { return LQ_OP; }
">="			            { return GQ_OP; }
"=="			            { return EQ_OP ; }
"!="			            { return NQ_OP; }
[ \n\t\r]+            {}
[0-9]+           	    { return NUMBER;}
(\/\*([^*]|[\r\n]|(\*+([^*\/]|[\r\n])))*\*+\/)|(\/\/.*) {print("Comment: %s.\n", yytext);}
"for"                 {return FOR;}
"while"      	        {return WHILE;}
"end"      		        {return BLOCK_END;}
"if"                  {return IF;}
"funtion"             {return FUNCTION;}
"else"      	        {return ELSE;}
L?\"(\\.|[^\\"])*\"	  {return STRING_LITERAL; }
([a-zA-Z]+(?:_[a-zA-Z]+)*)	{return ID;}
.                     {yyerror("invalid character");}

%%

#ifndef yywrap
   int yywrap (void) {return 1;}
#endif

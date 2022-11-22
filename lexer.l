D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
  #include <stdio.h>
  #include "y.tab.h"

  void count();
  
%}

%%

"int"                 { count(); return (INTEGER); }
"float"               { count(); return (FLOAT_NUMBER); }
"string"              { count(); return (STRING); }
"bool"                { count(); return (BOOLEAN); }
"set"                 { count(); return (SET); }
"array"               { count(); return (ARRAY); }
"matriz"              { count(); return (MATRIZ); }
"void"                { count(); return (VOID); }
"struct"              { count(); return (STRUCT); }
";"      				      { count(); return (SEMI); }
"="					          { count(); return (ASSIGN); }
","                   { count(); return (COMMA); }
"@"                   { count(); return (AT); }
"("			              { count(); return (LPAR); }
")"			              { count(); return (RPAR); }
("["|"<:")		        { count(); return (LBRAK); }
("]"|":>")		        { count(); return (RBRAK); }
("{"|"<%")		        { count(); return (LBRAC); }
("}"|"%>")		        { count(); return (RBRAC); }
"-"			              { count(); return (SUB); }
"+"			              { count(); return (ADD); }
"*"			              { count(); return (MUL); }
"/"			              { count(); return (DIV); }
"<"		              	{ count(); return (LT); }
">"			              { count(); return (GT); }
"?"			              { count(); return (QUEST); }
"+="			            { count(); return (ADD_ASSIGN); }
"-="			            { count(); return (SUB_ASSIGN); }
"*="			            { count(); return (MUL_ASSIGN); }
"/="			            { count(); return (DIV_ASSIGN); }
"%="			            { count(); return (MOD_ASSIGN); }
"&&"                  { count(); return (AND_OP); }
"||"                  { count(); return (OR_OP); }
"<="			            { count(); return (LQ_OP); }
">="			            { count(); return (GQ_OP); }
"=="			            { count(); return (EQ_OP) ; }
"!="			            { count(); return (NQ_OP); }
[ \n\t\r]+            {}
"/*"			            { comment(); }
"for"                 { count(); return FOR; }
"while"      	        { count(); return WHILE; }
"if"                  { count();return IF; }
"funtion"             { count();return FUNCTION; }
"else"      	        { count();return ELSE; }
{L}({L}|{D})*		      { count(); return(check_type()); }
L?\"(\\.|[^\\"])*\"	  { count(); return STRING_LITERAL; }
0[xX]{H}+{IS}?		      { count(); return(ID); }
0{D}+{IS}?		          { count(); return(ID); }
{D}+{IS}?		            { count(); return(ID); }
L?'(\\.|[^\\'])+'	      { count(); return(ID); }
{D}+{E}{FS}?		        { count(); return(ID); }
{D}*"."{D}+({E})?{FS}?	{ count(); return(ID); }
{D}+"."{D}*({E})?{FS}?	{ count(); return(ID); }
.                        {}

%%
yywrap()
{
	return(1);
}

comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}


int check_type()
{
/*
* pseudo code --- this is what it should check
*
*	if (yytext == type_name)
*		return(TYPE_NAME);
*
*	return(IDENTIFIER);
*/

/*
*	it actually will only return IDENTIFIER
*/

	return(ID);
}
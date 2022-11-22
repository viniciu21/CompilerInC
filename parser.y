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
%token WHILE IF 
%token ELSE 
%token CONSTANT TYPE_NAME
%token OR_OP LQ_OP GQ_OP EQ_OP NQ_OP AND_OP INC_OP DEC_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN
%token STRING_LITERAL 
%token SWITCH DEFAULT CASE FOR CONTINUE BREAK RETURN FUNCTION
%token INTEGER FLOAT_NUMBER STRING BOOLEAN SET ARRAY MATRIZ VOID STRUCT
%token ASSIGN SUB ADD MUL DIV LT GT
%token SEMI COMMA AT LPAR RPAR LBRAK RBRAK LBRAC RBRAC QUEST

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%start prog

//%type <sValue> stm

%% /* Inicio da segunda seção, onde colocamos as regras BNF */

primary_expression
	: ID
	| CONSTANT
	| STRING_LITERAL
	| '(' expression ')'
	;

postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' ID
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator 
	;

unary_operator
	: '*'
	| '+'
	| '-'
	| '!'
	;

/*cast_expression
	: unary_expression
	| '(' type_name ')' cast_expression
	;*/

multiplicative_expression
	: unary_expression
	| multiplicative_expression '*' unary_expression
	| multiplicative_expression '/' unary_expression
	| multiplicative_expression '%' unary_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;

/*shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;*/

relational_expression
	: additive_expression
	| relational_expression '<' additive_expression
	| relational_expression '>' additive_expression
	| relational_expression LQ_OP additive_expression
	| relational_expression GQ_OP additive_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NQ_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '=' 
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ID ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: type_specifier {printf("teste\n");}
	| type_specifier declaration_specifiers
	;

init_declarator_list
	: initializer
	| init_declarator_list ',' initializer
	;

/*
init_declarator
	: declarator
	| declarator '=' initializer
	; */	

type_specifier
	: VOID
	| INTEGER {printf("inteiro\n");}
	| FLOAT_NUMBER
	| TYPE_NAME
	;

specific_type
	: STRUCT
	| SET
	| MATRIZ
	;

/*struct_or_union_specifier
	: struct_or_union ID '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union ID
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	;

struct_declarator_list
	: ':' constant_expression
	| struct_declarator_list ',' ':' constant_expression
	; */

/*struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	; */

/*declarator
	: pointer direct_declarator
	| direct_declarator
	;*/

direct_declarator
	: ID {printf("TESTE\n");}
	| '(' direct_declarator ')'{printf("ACHEI\n");}
	| direct_declarator '[' constant_expression ']' {printf("ACHEI\n");}
	| direct_declarator '[' ']' {printf("ACHEI\n");}
	| direct_declarator '(' parameter_list ')' {printf("ACHEI\n");}
	| direct_declarator '(' identifier_list ')' {printf("ACHEI\n");}
	| direct_declarator '(' ')' {printf("ACHEI\n");}
	;

/*pointer
	: '*'
	| '*' pointer
	;*/

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers direct_declarator
	| declaration_specifiers direct_abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: ID
	| identifier_list ',' ID
	;

/*type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	; */

/*abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	; */

direct_abstract_declarator
	: '(' direct_abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: compound_statement
	| expression_statement
	| selection_statement  
	| iteration_statement
	| jump_statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement 
	| IF '(' expression ')' statement ELSE statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: RETURN ';'
	| RETURN expression ';'
	;

prog: external_declaration {printf("external_declaration");}
	| prog external_declaration {printf("external_declaration");}
	;

function_definition : type_specifier direct_declarator compound_statement {printf("test");}
					| specific_type '@' type_specifier direct_declarator compound_statement {printf("funcao tipo especifico \n");}
					;

external_declaration
	: function_definition {printf("função\n");}
	| declaration {printf("declaração \n");}
	;

%% /* Fim da segunda seção */
int main (void) {
	return yyparse ( );
}

int yyerror (char *msg) {
	fprintf (stderr, "%d: %s at '%s'\n", yylineno, msg, yytext);
	return 0;
}

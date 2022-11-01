# Compiler in C

Linguagem feita em C para a disciplina de Engenharia de Linguagens.

Autores:

Herbet Pessoa Da Silva Filho

Italo Bruno Brand Nardy

Marcos Martins Nóbrega

Pedro Victor Barbosa Araujo

Vinicius Oliveira Da Silva

Passando pelo analisador léxico da nossa linguagem o código ira gerar uma saida com os devidos tokens e lexemas

Para rodar o analisador lexico siga os seguintes passos:

$ lex lexer.l

$ yacc parser.y -d

$ gcc lex.yy.c -o parser

$ ./parser < mergeSort.txt

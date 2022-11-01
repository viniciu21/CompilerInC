# Compiler in C

##### Linguagem feita em C para a disciplina de Engenharia de Linguagens.

Nessa disciplina, devemos desenvolver uma nova linguagem, usando C, yacc e lex até o presente momento.

## Autores

Herbet Pessoa Da Silva Filho

Italo Bruno Brand Nardy

Marcos Martins Nóbrega

Pedro Victor Barbosa Araujo

Vinicius Oliveira Da Silva

## Introdução

Passando pelo analisador léxico da nossa linguagem o código ira gerar uma saida com os devidos tokens e lexemas

## Execução

Para rodar o analisador lexico da linguagem siga os seguintes passos:

Carregar o lex

```
$ flex lexer.l
```

Gerar o analisador da linguagem

```
$ gcc lex.yy.c -o parser
```

Rodar o analisador no mergeSort de exemplo

```
$ ./parser < mergeSort.txt
```

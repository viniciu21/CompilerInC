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

Passando pelo analisador léxico da nossa linguagem o código ira gerar uma saida com os devidos tokens e lexemas, que depois vai ser validada pelo analisador sintatico com o intuito de procurar erros em construções sintaticas.

## Execução

Para rodar o analisador lexico da linguagem siga os seguintes passos:

Carregar o lex

```
$ flex lexer.l
```

Carregar o yacc

```
$ yacc parser.y
```

Gerar o analisador da linguagem

```
$ gcc lex.yy.c -o parser
```

Rodar o analisador no mergeSort de exemplo

```
$ ./parser < mergeSort.txt
```

## Resultados

Os arquivos gerados automaticamente pelos comandos são o y.tab.c e o seu header y.tab.h, e também o lex.yy.c

Para exemplificar o funcionamento da nossa linguagem e dos nossos analisadores:

Condicional na linguagem Python

```
if x < y:
    x = y
```

Condicional na nossa linguagem

```
IF (x < y) 
    x = y;
END IF
```

Depois de ser analisado

```
IF LPAR ID LT ID RPAR
    ID ASSIGN ID SEMI
END IF
```

Como estrutura sintatica esse exemplo é visto como

```
selection_statement conditional_expression
    assignment_expression
END IF
```
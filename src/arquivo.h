#ifndef ARQUIVO_H
#define ARQUIVO_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "b_tree.h"

#define subArquivos "src/files/clientes/"

#define TRUE 1
#define FALSE 0

void leArquivo();
void leArquivo_tokenizado_nomes();
void leArquivo_tokenizado_cpfs();
void insereArvore(Pagina **btree);
void insere_na_mao(Pagina **btree);
void pesquisa_arvore(Pagina *btree);
void imprime_arvore(Pagina *btree);
void tokenizar_nomes(char *str);
void excluir(Pagina *btree);
void gera_mil_aleatorios();

#endif
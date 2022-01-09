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
void insereArvore();
void pesquisa_arvore();
void imprime_arvore();

#endif
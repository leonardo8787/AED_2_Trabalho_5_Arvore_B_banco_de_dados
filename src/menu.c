#include "b_tree.h"
#include "arquivo.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void menu(){

	system("clear");
	
	Record r;
  	Pagina *btree = CreateBTree();
  	int ordem = 2;
    int op;

  	printf("\nBanco de Dados\n");

    do{
        printf("\n------MENU------\n\n");
        printf("\nMenu: \n");
        printf("0 - sair\n");
        printf("1 - printar árvore\n");
        printf("2 - ler arquivo\n");
        printf("3 - Pesquisar\n");
        printf("4 - limpar tela\n");
        printf("5 - inserir elementos\n");
        scanf("%d", &op);
        switch(op){
            case 0:
                printf("Saindo...\n");
                break;
            case 1:
                printf("Printando árvore\n");
                imprime_arvore();
                break;
            case 2:
                printf("lendo arquivo\n");
                leArquivo();
                break;
            case 3:
                printf("Pesquisar\n");
                pesquisa_arvore();
                break;
            case 4:
                printf("limpando telaz\n");
                system("cls");
                break;
            case 5:
            	printf("Inserindo elementos na árvore\n");
            	insereArvore();
            	break;
            default:
                printf("Escolha uma opção válida!\n");
        }
    }while(op != 0);
}

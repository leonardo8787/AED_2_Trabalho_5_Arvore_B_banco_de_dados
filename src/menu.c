#include "b_tree.h"
#include "arquivo.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void menu(Pagina *btree){

	system("clear");
	
	Record r;

  	int ordem = 2;
    int op;

  	printf("\nBanco de Dados\n");

    do{
        printf("\n------MENU------\n\n");
        printf("\nMenu: \n");
        printf("0 - sair\n");
        printf("1 - Ler arquivo todo\n");
        printf("2 - Ler só nomes\n");
        printf("3 - Ler só CPF\n");
        printf("4 - inserir elementos do arquivo na árvore\n");
        printf("5 - inserir elementos na mão na árvore\n");
        printf("6 - Pesquisar elementos pré-definidos na árvore\n");
        printf("7 - Pesquisar elementos aleatórios na árvore\n");
        printf("8 - Imprimir árvore\n");
        printf("9 - Remover informação da árvore\n");
        printf("10 - Limpar tela\n");
        printf("11 - gera valores aleatórios\n");
        scanf("%d", &op);
        switch(op){
            case 0:
                printf("Saindo...\n");
                break;
            case 1:
                printf("Ler arquivo todo\n");
                leArquivo();
                break;
            case 2:
                printf("Ler só nomes\n");
                leArquivo_tokenizado_nomes();
                break;
            case 3:
                printf("Ler só CPF\n");
                leArquivo_tokenizado_cpfs();
                break;
            case 4:
                printf("inserir elementos do arquivo na árvore\n");
                insereArvore(&btree);
                if (btree == NULL) printf("\nponteiro nulo\n");
                break;
            case 5:
                printf("inserir elementos aleatórios na árvore\n");
                insere_na_mao(&btree);
                break;
            case 6:
                printf("Pesquisar elementos pré-definidos na árvore\n");
                pesquisa_arvore(btree);
                break;
            case 7:
                printf("Pesquisar elementos aleatórios na árvore\n");
                pesquisa_arvore(btree);
                break;
            case 8:
                printf("Imprimir árvore\n");
                imprime_arvore(btree);
                break;
            case 9:
                printf("Exclusão...");
                excluir(btree);
                break;
            case 10:
                printf("Limpar tela\n");
                system("cls");
                break;
            case 11:
                gera_mil_aleatorios();
                break;
            default:
                printf("Digite uma opção válida!\n");
        }
    }while(op != 0);
}

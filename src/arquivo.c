#include "arquivo.h"

void leArquivo(){

  FILE *arq1, *arq2;
  char Linha[1000];
  char *result;
  int i;

  arq1 = fopen("src/arquivos/clientes_1.txt", "r");
  arq2 = fopen("src/arquivos/clientes_2.txt", "r");

  printf("\narquivo_1\n");
  if (arq1 == NULL)  {
    printf("Problemas na abertura do arquivo\n");
    return;
  } else {
	  i = 1;
	  while (!feof(arq1)){
	    result = fgets(Linha, 1000, arq1);
	    if (result)
		printf("Linha %d : %s",i,Linha);
	    i++;
	  }
  }

  printf("\narquivo_2\n");
  if (arq2 == NULL)  {
    printf("Problemas na abertura do arquivo\n");
    return;
  } else {
	  i = 1;
	  while (!feof(arq2)){
	    result = fgets(Linha, 1000, arq2);
	    if (result)
		printf("Linha %d : %s",i,Linha);
	    i++;
	  }
  }

  fclose(arq1);
  fclose(arq2);
}

void insereArvore(){

	FILE *arq;
	arq = fopen("src/arquivos/clientes_2.txt", "r");
	
	Record r;
  	Pagina *btree = CreateBTree();

  	int ordem = 2;
    char Linha[1000];
    char *result;

	if(arq == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq)) {
			result = fgets(Linha, 50, arq);
		 	if(result){
			    r.key = atof(Linha);
				Insere(&btree, r);
		 	}
		}
	}
	fclose(arq);
}

void pesquisa_arvore(){
	FILE *arq;
	arq = fopen("src/arquivos/clientes_2.txt", "r");
	
	Record r;
  	Pagina *btree = CreateBTree();

  	int ordem = 2;
    char Linha[1000];
    char *result;

	if(arq == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq)) {
			result = fgets(Linha, 50, arq);
		 	if(result){
			    r.key = atof(Linha);
				Pesquisa(btree, &r);
		 	}
		}
	}
	fclose(arq);
}

void imprime_arvore(){
	Record r;
  	Pagina *btree = CreateBTree();
    Imprime(&btree, 0);
}
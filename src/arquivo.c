#include "arquivo.h"

void leArquivo1(){

  FILE *arq;
  char Linha[1000];
  char *result;
  int i;

  arq = fopen("clientes.txt", "r");

  if (arq == NULL)  {
    printf("Problemas na abertura do arquivo\n");
    return;
  }

  i = 1;
  while (!feof(arq)){
    result = fgets(Linha, 1000, arq);
    if (result)
	printf("Linha %d : %s",i,Linha);
    i++;
  }
  fclose(arq);
}

void insereArvore(){

	FILE *arq;
	arq = fopen("clientes.txt", "r");
	
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

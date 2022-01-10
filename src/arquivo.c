#include "arquivo.h"

void leArquivo(){

  FILE *arq1;
  char Linha[1000];
  char *result;
  int i;

  arq1 = fopen("src/arquivos/clientes_1.txt", "r");

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

  fclose(arq1);
}

void leArquivo_tokenizado_nomes(){

  FILE *arq1;
  char Linha[1000];
  char *result;
  int i;

  arq1 = fopen("src/arquivos/clientes_1.txt", "r");

  printf("\narquivo_1\n");
  if (arq1 == NULL)  {
    printf("Problemas na abertura do arquivo\n");
    return;
  } else {
	  i = 1;
	  while (!feof(arq1)){
	    result = fgets(Linha, 1000, arq1);
	    if (result)
	    	tokenizar_nomes(Linha);
				printf("Linha %d : %s",i,Linha);
			  i++;
			  printf("\n");
	  }
  }

  fclose(arq1);
}

void leArquivo_tokenizado_cpfs(){

  FILE *arq1;
  char Linha[1000];
  char *result;
  int i;

  arq1 = fopen("src/arquivos/clientes_1.txt", "r");

  printf("\narquivo_1\n");
  if (arq1 == NULL)  {
    printf("Problemas na abertura do arquivo\n");
    return;
  } else {
	  i = 1;
	  while (!feof(arq1)){
	    result = fgets(Linha, 1000, arq1);
	    if (result)
	    	//atoi(Linha);
				printf("Linha %d : %d",i,atoi(Linha));
			  i++;
			  printf("\n");
	  }
  }

  fclose(arq1);
}

void insereArvore(Pagina *btree){

	FILE *arq;
	arq = fopen("src/arquivos/clientes_1.txt", "r");

	Record r;

  int ordem = 2;
  char Linha[1000];
  char *result;

	if(arq == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq)) {
			result = fgets(Linha, 50, arq);
		 	if(result){
			  r.key = atoi(Linha);
				Insere(&btree, r);
		 	}
		}
	}
	imprime_arvore(btree);
	fclose(arq);
}

void insere_na_mao(Pagina *btree){

	FILE *arq;
	arq = fopen("src/arquivos/subArquivos/arquivo1.txt", "wr");

	Record r;
  int ordem = 2;
  char Linha[100];
  char *result;
  char *palavra;

  printf("Digite o cpf seguido do nome e por fim a idade do indivíduo!\n");
  scanf("%s", palavra);
  fputs(palavra, arq);

  if(arq != NULL){
  	printf("arquivo escrito com sucesso!");
  }

	if(arq == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq)) {
			result = fgets(Linha, 50, arq);
		 	if(result){
			  r.key = atoi(Linha);
				Insere(&btree, r);
		 	}
		}
	}
	imprime_arvore(btree);

	fclose(arq);
}

// void insere_na_mao_2(Pagina *btree){
// 	FILE *arq;
// 	arq = fopen("src/arquivos/subArquivos/arquivo1.txt", "r");

// 	Record r;

//   int ordem = 2;
//   char Linha[100];
//   char *result;

// 	if(arq == NULL)
// 		printf("Erro ao abrir\n");
// 	else {
// 		while(!feof(arq)) {
// 			result = fgets(Linha, 50, arq);
// 		 	if(result){
// 			  r.key = atoi(Linha);
// 				Insere(&btree, r);
// 		 	}
// 		}
// 	}
// 	imprime_arvore(btree);

// 	fclose(arq);
// }

void pesquisa_arvore(Pagina *btree){
	FILE *arq;
	arq = fopen("src/arquivos/clientes_2.txt", "r");

	Record r;

  int ordem = 2;
  char Linha[1000];
  char *result;

	if(arq == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq)) {
			result = fgets(Linha, 50, arq);
		 	if(result){
			  r.key = atoi(Linha);
				Pesquisa(btree, &r);
		 	}
		}
	}
	fclose(arq);
}

void imprime_arvore(Pagina *btree){
  Imprime(&btree, 0);
}

void tokenizar_nomes(char *str) {
	const char sep[] = "<> , ' '";
	char *tokens;
	int aux = 0;
	
	tokens = strtok(str, sep);
	
	while(tokens != NULL) {
		if(aux == 1) {
			strcpy(str, tokens);
			return;
		}
    aux = 1;
		tokens = strtok(NULL, sep);
	}
}

void excluir(Pagina *btree){
	int cpf;
	int ordem = 2;
	printf("Digite o cpf do usuário a ser retirado: \n");
	scanf("%d", &cpf);
	Remove(&btree, cpf, &ordem);
	printf("\ncomo ficou: \n");
	imprime_arvore(btree);
}
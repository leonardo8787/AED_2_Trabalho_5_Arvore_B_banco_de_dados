#include "arquivo.h"

void leArquivo(){

  FILE *arq1;
  char Linha[1000];
  char *result;
  int i;

  arq1 = fopen("src/arquivos/arquivo1.txt", "r");
  //arq1 = fopen("src/arquivos/cem_arquivos", "r");

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

  arq1 = fopen("src/arquivos/arquivo1.txt", "r");

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

  arq1 = fopen("src/arquivos/arquivo.txt", "r");

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

void insereArvore(Pagina **btree){

	FILE *arq1;
	// FILE *arq2;
	arq1 = fopen("src/arquivos/arquivo.txt", "r");
	// arq2 = fopen("src/arquivos/subArquivos/112964288-203548224.txt", "r");
	Record r;

  int ordem = 2;
  char Linha[1000];
  char *result;

	if(arq1 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq1)) {
			result = fgets(Linha, 50, arq1);
		 	if(result){
			  r.key = atoi(Linha);
				Insere(btree, r);
		 	}
		}
	}

	fclose(arq1);
}

void insere_na_mao(Pagina **btree){

	Record r;
  int cpf;

  printf("Digite o cpf seguido do nome e por fim a idade do indivíduo!\n");
  scanf("%d", &cpf);
	r.key = cpf;
	Insere(btree, r);
}

void pesquisa_arvore(Pagina *btree){
	// FILE *arq1, arq2;
	// arq1 = fopen(".src/arquivos/cem_arquivos/");

	Record r;
	int cpf;

	printf("Digite o cpf a ser procurado: \n");
	scanf("%d", &cpf);
	r.key = cpf;
	Pesquisa(btree, &r);


	// while(fgets(arqu1)){
	// 	if (arq1 == Pesquisa(btree, &r))
	// 		printf("\nteste!\n");
	// }
	// fclose(arq1);
	// fclose(arq2);

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

void gera_mil_aleatorios(){

	int arq_1[1000];
	char array_1[1000];
	FILE *file1;
	file1 = fopen("src/arquivos/arquivo1.txt", "w");


	printf("\nPreenchendo arquivo MIL...\n");
	for(int i=0; i<1000 ; i++){
		arq_1[i] = 1 + (float)rand() / (float)RAND_MAX *1000000000;
	    sprintf(array_1, "%.9d", arq_1[i]);
	    strcat(array_1, ",leonardo,20\n");
	    fputs(array_1, file1);
	}
	fclose(file1);
}

void coloca_nomes(){
  // DIR *d;
  // struct dirent *dir;
  // d = opendir(".");
  // if (d) {
  //   while ((dir = readdir(d)) != NULL) {
  //     printf("%s\n", dir->d_name);
  //   }
  //   closedir(d);
  // }
}
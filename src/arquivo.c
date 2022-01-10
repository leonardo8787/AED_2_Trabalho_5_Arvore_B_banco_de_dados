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

void insereArvore(Pagina **btree){

	FILE *arq;
	FILE *arq1, *arq2, *arq3, *arq4, *arq5, *arq6, *arq7, *arq8, *arq9, *arq10;
	arq1 = fopen("src/arquivos/subArquivos/1125480-112647944.txt", "r");
	arq2 = fopen("src/arquivos/subArquivos/112964288-203548224.txt", "r");
	arq3 = fopen("src/arquivos/subArquivos/204328608-304295168.txt", "r");
	arq4 = fopen("src/arquivos/subArquivos/304955680-412482592.txt", "r");
	arq5 = fopen("src/arquivos/subArquivos/413077824-525747136.txt", "r");
	arq6 = fopen("src/arquivos/subArquivos/525995360-621822848.txt", "r");
	arq7 = fopen("src/arquivos/subArquivos/622095488-699075392.txt", "r");
	arq8 = fopen("src/arquivos/subArquivos/699787136-799645696.txt", "r");
	arq9 = fopen("src/arquivos/subArquivos/801896704-891529472.txt", "r");
	arq10 = fopen("src/arquivos/subArquivos/892323776-999993536.txt", "r");

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

	if(arq2 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq2)) {
			result = fgets(Linha, 50, arq2);
		 	if(result){
			  r.key = atoi(Linha);
				Insere(btree, r);
		 	}
		}
	}

	if(arq3 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq3)) {
			result = fgets(Linha, 50, arq3);
		 	if(result){
			  r.key = atoi(Linha);
				Insere(btree, r);
		 	}
		}
	}

	if(arq4 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq4)) {
			result = fgets(Linha, 50, arq4);
		 	if(result){
			  r.key = atoi(Linha);
				Insere(btree, r);
		 	}
		}
	}

	if(arq5 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq5)) {
			result = fgets(Linha, 50, arq5);
		 	if(result){
			  r.key = atoi(Linha);
				Insere(btree, r);
		 	}
		}
	}

	if(arq6 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq6)) {
			result = fgets(Linha, 50, arq6);
		 	if(result){
			  r.key = atoi(Linha);
				Insere(btree, r);
		 	}
		}
	}

	if(arq7 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq7)) {
			result = fgets(Linha, 50, arq7);
		 	if(result){
			  r.key = atoi(Linha);
				Insere(btree, r);
		 	}
		}
	}

	if(arq8 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq8)) {
			result = fgets(Linha, 50, arq8);
		 	if(result){
			  r.key = atoi(Linha);
				Insere(btree, r);
		 	}
		}
	}

	if(arq9 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq9)) {
			result = fgets(Linha, 50, arq9);
		 	if(result){
			  r.key = atoi(Linha);
				Insere(btree, r);
		 	}
		}
	}

	if(arq10 == NULL)
		printf("Erro ao abrir\n");
	else {
		while(!feof(arq10)) {
			result = fgets(Linha, 50, arq10);
		 	if(result){
			  r.key = atoi(Linha);
				Insere(btree, r);
		 	}
		}
	}

	fclose(arq1);
	fclose(arq2);
	fclose(arq3);
	fclose(arq4);
	fclose(arq5);
	fclose(arq6);
	fclose(arq7);
	fclose(arq8);
	fclose(arq9);
	fclose(arq10);
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
	Record r;
	int cpf;

	printf("Digite o cpf a ser procurado: \n");
	scanf("%d", &cpf);
	r.key = cpf;
	Pesquisa(btree, &r);
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

// void divisor(){

// 	FILE *arquivo;
// 	arquivo = fopen("src/arquivos/subArquivos/arquivo1.txt", "r");
// 	int cont=0;
// 	char *nome[] = "arquivo1";
// 	char *txt[] = ".txt";
// 	int teste = 2;


// 	if(arq == NULL)
// 		printf("Erro ao abrir\n");
// 	else {
// 		while(!feof(arq)) {
// 			result = fgets(Linha, 50, arq);
// 		 	if(result){
// 			  r.key = atoi(Linha);
// 				Pesquisa(btree, &r);
// 		 	}
// 		}
// 	}


//     ifstream is;
//     is.open("database.txt");
//     string line;
//     int cont=0;
//     string arquivo = "arquivo";
//     string txt = ".txt";
//     int teste = 1;
//     ofstream myfile(arquivo+to_string(teste)+txt);
//     myfile.is_open();
//     while(!is.eof()){
//         if(cont==100 && teste <10){
//             cont=0;
//             teste+=1;
//             myfile.close();
//             myfile.open(arquivo+to_string(teste)+txt);
//         }
//         getline(is,line);
//         cout << line << endl;
//         myfile << line << "\n";
//         cont+=1;
//     }
//     is.close();
// }
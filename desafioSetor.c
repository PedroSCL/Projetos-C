#include <stdio.h>
#include <locale.h>

char nome[50], setor[50];

main(void){
	setlocale(LC_ALL, "");
	//CADASTRO
	printf("Digite seu nome completo: ");
	fgets(nome, 50, stdin);
	printf("Digite o seu setor: ");
	fflush(stdin);
	gets(setor);

	system("cls");

	//SETOR E IMPRESSÃO
	if((strcmp(setor, "A")==0) || (strcmp(setor, "a")==0) || (strcmp(setor, "111")==0) || (strcmp(setor, "tec")==0) || (strcmp(setor, "TEC")==0)) {
		printf("Nome: %s \n", nome);
		printf("Setor: Técnico \n \n");
	} else if((strcmp(setor, "B")==0) ||(strcmp(setor, "b")==0) || (strcmp(setor, "112")==0) || (strcmp(setor, "an")==0) || (strcmp(setor, "AN")==0)){
		printf("Nome: %s \n", nome);
		printf("Setor: Analista \n \n");
	}else if((strcmp(setor, "C")==0) ||(strcmp(setor, "c")==0) || (strcmp(setor, "122")==0) || (strcmp(setor, "ger")==0) || (strcmp(setor, "GER")==0)){
		printf("Nome: %s \n", nome);
		printf("Setor: Gerente \n \n");
	}else if((strcmp(setor, "D")==0) || (strcmp(setor, "d")==0) || (strcmp(setor, "233")==0) || (strcmp(setor, "dir")==0) || (strcmp(setor, "DIR")==0)){
		printf("Nome: %s \n", nome);
		printf("Setor: Diretor \n \n");
	} else {
		printf("Digite um setor válido! \n \n");
	}
	
	system("pause");
	return 0;
}

#include <stdio.h>
#include <locale.h>

char nome[50], opcao='S';

main(void){
	setlocale(LC_ALL, "");
	while(opcao=='S'){
		printf("%s", &nome);
		gets(nome);
		system("cls");
		//IMPRESSÕES
		printf("CADASTRADO(A)\n");
		printf("Nome: %s\n", nome);
		printf("Cadastrar novamente? (S)\n");
		fflush(stdin);
		scanf("%c", &opcao);
	}
}

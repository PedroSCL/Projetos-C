#include <stdio.h>
#include <locale.h>

char nome[50];
int i;

main(void){
	setlocale(LC_ALL, "");
	
	for (i = 1; i <= 3; i++){
		printf("Digite um nome completo de uma série: ");
		fgets(nome, 50, stdin);
		system("cls");
		printf("Série: %s", nome);
	}
}

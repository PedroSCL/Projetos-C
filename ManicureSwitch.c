#include <stdio.h>
#include <locale.h>
char opcao;
main(void){
	setlocale(LC_ALL, "");
	printf("Escolha o seu serviço de manicure: \nA - Pintar unhas \nB - Tirar cutícula \nC - Alongamento de unhas \n");
	printf("Opcão: ");
	scanf("%c", &opcao);
	switch(opcao){
		case 'A':
		case 'a':
			printf("Você escolheu Pintar unhas");
			break;
		case 'B':
		case 'b':
			printf("Você escolheu Tirar cutícula");
			break;
		case 'C':
		case 'c':
			printf("Você escolheu Alongamento de unhas");
			break;
		default:
			printf("erro");
	}
}

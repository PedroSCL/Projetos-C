#include <stdio.h>
#include <locale.h>
char opcao;
main(void){
	setlocale(LC_ALL, "");
	printf("Escolha o seu servi�o de manicure: \nA - Pintar unhas \nB - Tirar cut�cula \nC - Alongamento de unhas \n");
	printf("Opc�o: ");
	scanf("%c", &opcao);
	switch(opcao){
		case 'A':
		case 'a':
			printf("Voc� escolheu Pintar unhas");
			break;
		case 'B':
		case 'b':
			printf("Voc� escolheu Tirar cut�cula");
			break;
		case 'C':
		case 'c':
			printf("Voc� escolheu Alongamento de unhas");
			break;
		default:
			printf("erro");
	}
}

#include <stdio.h>
#include <locale.h>
int opcao;
main(void){
	setlocale(LC_ALL, "");
	printf("PASSEIO");
	printf("Informe para onde gostaria de ir hoje:\n");
	printf("1 - Parque \n2 - Cinema \n3 - Sorveteria \n");
	printf("Opção: ");
	scanf("%i", &opcao);
	
	system("cls");
	
	switch (opcao){
		case 1:
			printf("Você escolheu o Parque");
			break;
		case 2:
			printf("Você escolheu o Cinema");
			break;
		case 3:
			printf("Você escolheu a Sorveteria");
			break;
		default:
			printf("Opção inválida!");	
	}
}


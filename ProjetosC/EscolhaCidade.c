#include <stdio.h>
#include <locale.h>

int opcao;
main(void){
	setlocale(LC_ALL, "");
	printf("VIAGEM \n");
	printf("1 - Salvador \n2 - Rio de Janeiro \n3 - Fortaleza \n4 - Porto alegre \n");
	printf("Opção: ");
	scanf("%i", &opcao);
	
	system("cls");
	
	switch(opcao){
		case 1:{
			printf("Você escolheu Salvador \n");
			printf("Boa viagem! \n");	
			break;
		}
		case 2:
			printf("Você escolheu Rio de Janeiro \n");
			printf("Boa viagem! \n");	
			break;
		case 3:
			printf("Você escolheu Fortaleza \n");
			printf("Boa viagem! \n");	
			break;
		case 4:
			printf("Você escolheu Porto alegre \n");
			printf("Boa viagem! \n");	
			break;
		default:
			printf("Opção inválida, tente novamente! \n");
	}
	system("pause");
	return 0;
}

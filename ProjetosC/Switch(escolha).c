#include <stdio.h>
#include <locale.h>
int opcao;
main(void){
	setlocale(LC_ALL, "");
	printf("PASSEIO");
	printf("Informe para onde gostaria de ir hoje:\n");
	printf("1 - Parque \n2 - Cinema \n3 - Sorveteria \n");
	printf("Op��o: ");
	scanf("%i", &opcao);
	
	system("cls");
	
	switch (opcao){
		case 1:
			printf("Voc� escolheu o Parque");
			break;
		case 2:
			printf("Voc� escolheu o Cinema");
			break;
		case 3:
			printf("Voc� escolheu a Sorveteria");
			break;
		default:
			printf("Op��o inv�lida!");	
	}
}


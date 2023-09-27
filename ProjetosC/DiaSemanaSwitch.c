#include <stdio.h>
#include <locale.h>
enum Semana {segunda, terca, quarta};
int dia;
main(void){
	setlocale(LC_ALL, "");
	enum Semana dia;
	printf("Escolha um dia da semana \n1 - Segunda \n2 - Terça \n3 - Quarta \n");
	printf("Opção: ");
	scanf("%i", &dia);
	
	dia = dia - 1;
	
	system("cls");
	
	switch (dia){
		case segunda:{
			printf("Segunda-feira \n");
			break;
		}
		case terca:{
			printf("Terça-feira \n");
			break;
		}
		case quarta:{
			printf("Quarta-feira \n");
			break;
		}
		default:
			printf("Opção inválida!");	
	}
	system("pause");
	return 0;
}


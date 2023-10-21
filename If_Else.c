#include <stdio.h>
#include <locale.h>

int idade1, idade2;

main(void){
	setlocale(LC_ALL, "");
	printf("Digite a 1º idade: ");
	scanf("%i", &idade1);
	printf("Digite a 2º idade: ");
	scanf("%i", &idade2);
	
	if(idade1 == idade2){
		system("cls");
		printf("As idades são iguais \n \n");
	}else{
		if(idade1 > idade2){
		system("cls");
		printf("1º idade maior que a 2º idade \n \n");
	}else{
		system("cls");
		printf("2º idade maior que a 1º idade \n \n");
	}
	}
	
	system("pause");
	return 0;
}

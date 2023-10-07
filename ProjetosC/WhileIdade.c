#include <stdio.h>
#include <locale.h>

int i = 1, idade;

main(void){
	setlocale(LC_ALL, "");
	while(i <= 5){
		i++;
		printf("Digite a idade: ");
		scanf("%i", &idade);
		system("cls");
		printf("Idade: %i\n \n", idade);
	}
	system("pause");
	return 0;
}

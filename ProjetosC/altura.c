#include <stdio.h>
#include <locale.h>

float altura;

main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	printf("\n \nSua Altura : %f", altura);
}


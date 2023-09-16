#include <stdio.h>
#include <string.h>
char nome[50];

main(void){
	printf("Digite seu nome: ");
	scanf("%s", &nome);	
	printf("Cadastrado(a): %s", nome);
} 


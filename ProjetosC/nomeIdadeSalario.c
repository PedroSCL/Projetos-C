#include <stdio.h>
#include <string.h>
char nome[50];
int idade;
double salario;

main(void){
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite sua idade ");
	scanf("%i", &idade);
	printf("Digite o salário: ");
	scanf("%d", &salario);
	printf("Informações:");
	printf("Nome: %s Cadastrado\n", nome);
	printf("Idade: %i Anos\n", idade);
	printf("Salário %d Reais\n", salario); 
}


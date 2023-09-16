#include <stdio.h>
#include <locale.h>
char nome[50];
char matricula[10];
float n1, n2, n3;

main(void){
	//Definindo localização
	setlocale(LC_ALL, "Portuguese");
	
	//Cadastro
	printf("Digite o nome: ");
	scanf("%s", &nome);
	printf("Digite a matrícula: ");
	scanf("%s", &matricula);
	printf("Digite a 1º nota: ");
	scanf("%f", &n1);
	printf("Digite a 2º nota: ");
	scanf("%f", &n2);
	printf("Digite a 3º nota: ");
	scanf("%f", &n3);
	system("cls");
	
	//impressão
	printf("Nome: %s \n", nome);
	printf("Matrícula: %s\n", matricula);
	printf("Notas %.2f\n %.2f\n %.2f\n", n1, n2, n3);
	return 0;
}


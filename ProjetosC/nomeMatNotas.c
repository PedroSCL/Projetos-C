#include <stdio.h>
#include <locale.h>
char nome[50];
char matricula[10];
float n1, n2, n3;

main(void){
	//Definindo localiza��o
	setlocale(LC_ALL, "Portuguese");
	
	//Cadastro
	printf("Digite o nome: ");
	scanf("%s", &nome);
	printf("Digite a matr�cula: ");
	scanf("%s", &matricula);
	printf("Digite a 1� nota: ");
	scanf("%f", &n1);
	printf("Digite a 2� nota: ");
	scanf("%f", &n2);
	printf("Digite a 3� nota: ");
	scanf("%f", &n3);
	system("cls");
	
	//impress�o
	printf("Nome: %s \n", nome);
	printf("Matr�cula: %s\n", matricula);
	printf("Notas %.2f\n %.2f\n %.2f\n", n1, n2, n3);
	return 0;
}


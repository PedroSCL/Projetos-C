#include <stdio.h>
#include <locale.h>

int i = 1;
float nota1, nota2, media;
char nome[50];

main(void){
	setlocale(LC_ALL, "");
	do {
		printf("===============Cadastro de NOTAS================ \n \n \n");
		i++;
		printf("Digite o nome do aluno: ");
		fgets(nome, 50, stdin);
		printf("Digite a primeira nota: ");
		fflush(stdin);
		scanf("%f", &nota1);
		printf("Digite a segunda nota: ");
		scanf("%f", &nota2);
		media = (nota1 + nota2)/2;
		
	} while (i <= 2);
	system("cls");
	i=0;
	do {
		printf("Digite a primeira nota: %f\n", nota1);
		printf("Digite a segunda nota: %f\n");
		printf("MÉDIA: %.2f \n \n \n", media);
		i++;
		
	} while (i <= 2);
	return 0;
}

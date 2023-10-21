#include <stdio.h>
#include <locale.h>

char nome[4][50], situacao[4][50];
int i, opcao;
float nota1[4], nota2[4], media[4];

main(void){
		setlocale(LC_ALL,"");
		while(i <= 4){
			printf("==============CADASTRO DE ALUNO============== \n \n");
		printf("Digite o nome do aluno: ");
		fflush(stdin);
		scanf("%s", &nome[i]);
		printf("Digite a 1º nota: ");
		fflush(stdin);
		scanf("%f", &nota1[i]);
		printf("Digite a 2º nota: ");
		fflush(stdin);
		scanf("%f", &nota2[i]);
		media[i] = (nota1[i] + nota2[i]) / 2;
		system("cls");
		printf("-----------------Média e Situação-----------------\n");
		
		if ((media[i] < 0) || (media[i] > 10)){
			printf("Nota inválida \n \n \n \n");
		} else if((media[i] >= 9) && (media[i] <= 10)){
			printf("Média: %.2f\n", media[i]);
			printf("Parabéns pela aprovação, você merece um premio! \n");
			printf("1 - Doces\n2 - Coxinha\n3 - Lasanha\n");
			printf("Digite sua opção: ");
			scanf("%i", &opcao);
			switch(opcao){
				case 1:
					printf("Você escolheu Doces!\n \n \n \n");
					break;
				case 2:
					printf("Você escolheu Coxinha!\n \n \n \n");
					break;
				case 3:
					printf("Você escolheu Lasanha! \n \n \n \n");
			}
		} else if (media[i] >= 5){
			printf("Você foi aprovado! \n");
			printf("Média: %.2f \n \n \n \n", media[i]);
		} else{
			printf("Média: %.2f\n", media[i]);
			printf("Reprovado \n \n \n \n");
		}
		i++;
		}
}

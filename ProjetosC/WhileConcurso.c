#include <stdio.h>
#include <locale.h>

int i = 0;
float pe, pp, total;
char nome[50], cpf[50];

main(void){
	setlocale(LC_ALL, "");
	while(i <= 2){
		//CADASTRO
		printf("======================CADASTRO==========================\n\n");
		printf("Cadastro N� %i \n \n", i);
		printf("Digite o nome completo: ");
		fflush(stdin);
		fgets(nome, 50, stdin);
		printf("Digite o CPF: ");
		fflush(stdin);
		fgets(cpf, 15, stdin);
		printf("Digite a nota da PE: ");
		scanf("%f", &pe);
		if(pe < 0 || pe > 100){
			printf("Nota inv�lida\n\n");
			i = i - 1;
		} else{
			printf("Digite a nota da PP: ");
			scanf("%f", &pp);
			if(pp < 0 || pp > 100){
				printf("Nota inv�lida\n\n");
				i = i - 1;
			} else{
				total = pp + pe;
				system("cls");
				printf("Nome: %s", nome);
				printf("CPF: %s", cpf);
				printf("Nota PE: %.2f\n", pe);
				printf("Nota PP: %.2f\n", pp);
				printf("Nota total: %.2f\n\n", total);
				if (total < 160){
				printf("Situa��o: Reprovado(a)\n\n");
				} else if(total < 200){
					printf("Situa��o: Aprovado(a)\n\n");
				} else{
					printf("Notas Inv�lidas\n\n");
				}
					i++;
			}
		}
	}
	system("pause");
	return 0;
}

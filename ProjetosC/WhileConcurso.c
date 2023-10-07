#include <stdio.h>
#include <locale.h>

int i = 0;
float pe, pp, total;
char nome[50], cpf[50
];

main(void){
	setlocale(LC_ALL, "");
	while(i <= 2){
		//CADASTRO
		printf("======================CADASTRO==========================\n\n");
		printf("Digite o nome completo: ");
		fflush(stdin);
		fgets(nome, 50, stdin);
		printf("Digite o CPF: ");
		fflush(stdin);
		fgets(cpf, 14, stdin);
		printf("Digite a nota da PE: ");
		scanf("%f", &pe);
		printf("Digite a nota da PP: ");
		scanf("%f", &pp);
		total = pp + pe;
		system("cls");
		
		//IMPRESSÃO
		printf("Nome: %s", nome);
		printf("CPF: %s", cpf);
		printf("Nota PE: %.2f\n", pe);
		printf("Nota PP: %.2f\n", pp);
		printf("Nota total: %.2f\n\n", total);
		i++;
	}
	system("pause");
	return 0;
}

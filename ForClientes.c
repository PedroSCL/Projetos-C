#include <stdio.h>
#include <locale.h>

int i;
float valor, total;
char nome[50], banco[50], cpf[50], tel[50], produto[50];
main(void){
	setlocale(LC_ALL, "");
	
	for (i = 1; i <= 3; i++){
		printf("Digite o nome: ");
		fflush(stdin);
		fgets(nome, 50, stdin);
		printf("Digite o banco: ");
		fgets(banco, 50, stdin);
		printf("Digite o CPF: ");
		fgets(cpf, 50, stdin);
		printf("Digite o telefone ");
		fgets(tel, 50, stdin);
		printf("Digite o produto: ");
		fgets(produto, 50, stdin);
		printf("Digite o valor: ");
		fflush(stdin);
		scanf("%f", &valor);
		system("cls");
		
		printf("INFORMAÇÕES \n \n");
		printf("Nome: %s", nome);
		printf("Banco: %s", banco);
		printf("CPF: %s", cpf);
		printf("Telefone: %s", tel);
		printf("Produto: %s", produto);
		printf("Valor: %.2f\n", valor);
				
		if(valor > 300){
			total = valor - (valor * 4 / 100);
			printf("Valor com desconto: %.2f\n", total);
		}
		printf("============================================\n \n \n");
	}
}

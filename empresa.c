#include <stdio.h>
#include <locale.h>

char cod_setor, nome_setor[50], beneficio1[30], beneficio2[30];
float valor_benefi1, valor_benefi2, total;
int tempo;

main (void){
	setlocale(LC_ALL, "");
	printf("Informe o código do setor: ");
	scanf("%c", &cod_setor);
	printf("Digite o nome completo do setor: ");
	fflush(stdin);
	fgets(nome_setor, 50, stdin);
	
	printf("Digite o tempo de empresa em anos: ");
	scanf("%i", &tempo);
	
	printf("Digite o nome do 1º benefício: ");
	scanf("%s", &beneficio1);
	printf("Digite o valor desse benefício R$: ");
	scanf("%f", &valor_benefi1);
	
	printf("Digite o nome do 2º benefício: ");
	scanf("%s", &beneficio2);
	printf("Digite o valor do 2º benefício R$: ");
	fflush(stdin);
	scanf("%f", &valor_benefi2);
	
	total = (valor_benefi1 + valor_benefi2);
	
	system("cls");
	
	printf("INFORMAÇÕES:\narea do setor: %s\n", nome_setor);
	printf("Tempo de empresa: %.2i anos\n", tempo);
	printf("Benefício1: %s \nValor: R$%.2f \n", beneficio1, valor_benefi1);
	printf("Benefício2: %s \nValor: R$%.2f \n", beneficio2, valor_benefi2);
	printf("Valor total de benefícios: R$%.2f", total);
	return 0;
}

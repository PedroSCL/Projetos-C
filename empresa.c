#include <stdio.h>
#include <locale.h>

char cod_setor, nome_setor[50], beneficio1[30], beneficio2[30];
float valor_benefi1, valor_benefi2, total;
int tempo;

main (void){
	setlocale(LC_ALL, "");
	printf("Informe o c�digo do setor: ");
	scanf("%c", &cod_setor);
	printf("Digite o nome completo do setor: ");
	fflush(stdin);
	fgets(nome_setor, 50, stdin);
	
	printf("Digite o tempo de empresa em anos: ");
	scanf("%i", &tempo);
	
	printf("Digite o nome do 1� benef�cio: ");
	scanf("%s", &beneficio1);
	printf("Digite o valor desse benef�cio R$: ");
	scanf("%f", &valor_benefi1);
	
	printf("Digite o nome do 2� benef�cio: ");
	scanf("%s", &beneficio2);
	printf("Digite o valor do 2� benef�cio R$: ");
	fflush(stdin);
	scanf("%f", &valor_benefi2);
	
	total = (valor_benefi1 + valor_benefi2);
	
	system("cls");
	
	printf("INFORMA��ES:\narea do setor: %s\n", nome_setor);
	printf("Tempo de empresa: %.2i anos\n", tempo);
	printf("Benef�cio1: %s \nValor: R$%.2f \n", beneficio1, valor_benefi1);
	printf("Benef�cio2: %s \nValor: R$%.2f \n", beneficio2, valor_benefi2);
	printf("Valor total de benef�cios: R$%.2f", total);
	return 0;
}

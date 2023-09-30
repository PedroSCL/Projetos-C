#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

char nome[50], endereco[50], telefone[50], ponto_referencia[50];
int i;

main(void){
	setlocale(LC_ALL, "");
	
	for (i = 1; i <= 5; i++){
		printf("Digite o nome do fornecedor: ");
		fgets(nome, 50, stdin);
		printf("Digite o endereço: ");
		fgets(endereco, 50, stdin);	
		printf("Digite o telefone: ");
		fgets(telefone, 50, stdin);
		printf("Digite um ponto de referência: ");
		fgets(ponto_referencia, 50, stdin);
		system("cls");
		
		printf("INFORMAÇÕES:\n\nFornecedor: %sEndereço: %sTelefone: %sPonto de referência: %s\n", nome, endereco, telefone, ponto_referencia);	
		printf("==========================================================\n");
	} 
}

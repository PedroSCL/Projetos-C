#include <stdio.h>
#include <locale.h>
#include <ctype.h>

char cidade1[50], cidade2[50], cidade3[50];
int num_cid1, num_cid2, num_cid3;

int main(){
	setlocale(LC_ALL, "");
	
	printf("Digite a 1º cidade: ");
	fgets(cidade1, 50, stdin);
	printf("Digite a 2º cidade: ");
	fgets(cidade2, 50, stdin);
	printf("Digite a 3º cidade: ");
	fgets(cidade3, 50, stdin);
	
	num_cid1 = (strlen(cidade1) - 1);
	num_cid2 = (strlen(cidade2) - 1);
	num_cid3 = (strlen(cidade3) - 1);

	system("cls");
	printf("Cidade 1: %i\n", num_cid1);
	printf("Cidade 2: %i\n", num_cid2);
	printf("Cidade 3: %i\n", num_cid3);
}

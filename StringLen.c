#include <stdio.h>
#include <string.h>
#include <locale.h>

char profissao1[100], profissao2[50], profissao3[50];
int num_profissao1, num_profissao2, num_profissao3;

int main(){
	setlocale(LC_ALL, "");
	printf("Informe a 1� profiss�o: ");
	fgets(profissao1, 100, stdin);
	printf("Informe a 2� profiss�o: ");
	fgets(profissao2, 100, stdin);
	printf("Informe a 3� profiss�o: ");
	fgets(profissao3, 100, stdin);
	//CONTA AS LETRAS
	
	num_profissao1 = strlen(profissao1) - 1;
	num_profissao2 = strlen(profissao2) -1;
	num_profissao3 = strlen(profissao3) - 1;
	printf("N�mero de letras: %i\n", num_profissao1);
	printf("N�mero de letras: %i\n", num_profissao2);
	printf("N�mero de letras: %i\n", num_profissao3);
	
	return 0;
	
}

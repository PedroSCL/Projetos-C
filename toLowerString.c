#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>

char nome[100];
int i;

int main(){
	setlocale(LC_ALL, "");
	printf("Digite um nome: ");
	gets(nome);
	
	for (i = 0; nome[i]; i++){
		nome[i] = toupper(nome[i]);
	}
	printf("O nome em minúsculo é: %s\n", nome);
	getch();
	return 0;
}

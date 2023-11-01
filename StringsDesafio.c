#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <string.h>

char nome[50], endereco[100], idade[4];
int i;

int main(){
	setlocale(LC_ALL, "");
	printf("Digite o nome do paciente: ");
	fflush(stdin);
	gets(nome);

	printf("Digite a idade: ");
	fflush(stdin);
	gets(idade);
	
	printf("Digite o endereço: ");
	gets(endereco);
	
	for(i = 0;nome[i]; i++){
		nome[i] = toupper(nome[i]);
	}
	
	for(i = 0;endereco[i]; i++){
		endereco[i] = toupper(endereco[i]);
	}
	
	system("cls");
	printf("O(A) estudante %s residente no \nEnd: %s compareceu \nna UPA 02, para uma consulta de rotina \nEstudante possui %s anos.\n\n\n\n", nome, endereco, idade);
	printf("              _________________________________\n");
	printf("                 Dr.Ryan Rodrigues");
}

#include <stdio.h>
#include <locale.h>
#include <string.h>

char senha_correta[] = "patinha", senha_digitada[20];
int opcao_menu;

void imprimirNomePetshop() {
	printf("Super_Petshop_seunome_sigladocurso\n\n\n");
}

void menu() {
	printf("MENU \n\n1 – CADASTRAR CLIENTE \n");
	printf("2 – AGENDAR BANHO OU TOSA \n");
	printf("3 – CONSULTA \n");
	printf("4 – IMPRIMIR RELATÓRIO GERAL \n");
	printf("5 - SAIR DO PROGRAMA \n");
	printf("Digite a opção desejada: ");
	scanf("%i", &opcao_menu);
}

void pedro() {

}

int main() {
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a senha: ");
	scanf("%s", senha_digitada);

	while (strcmp(senha_digitada, senha_correta) != 0) {
		printf("ERRO DE SENHA\n");
		printf("Digite a senha novamente: ");
		scanf("%s", senha_digitada);
	}
	while (opcao_menu != 5) {
		menu();
		switch(opcao_menu) {
			case 1:
				pedro();
		}
	}
}

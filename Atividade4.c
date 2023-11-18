#include <stdio.h>
#include <locale.h>
#include <string.h>

char senha_correta[] = "patinha", senha_digitada[20];
int opcao_menu,opcao_doutor,i, numeroClientes = 0, opcao_serv[10], opcao_dia[10],numeroDia = 0, numeroConsulta = 0,i = 0,opcao_cliente[10], numeroPets = 0, numero_Serv = 0;
char nomesClientes[10][50], diaEscolhido[10][50], nomesPets[10][50], tel[10][12], clienteConsulta[50],nomeDoutor[10][50];
char opcao_menu2[10][20];

void limparTela() {
	system("cls");
}

void tempo() {
	sleep(2);
}

void imprimirNomePetshop() {
	printf("\n\n	Super_Petshop_Pedro_CC		\n\n");
}

void banho_tosa() {
	imprimirNomePetshop();
	if (numeroPets >= 10) {
		printf("Número máximo de agendamentos atingido!\n");
	} else {
		printf("AGENDAR BANHO OU TOSA\n\n");
		printf("Digite o nome do pet: ");
		fflush(stdin);
		scanf("%s", nomesPets[numeroPets]);

		printf("Escolha uma opção para o serviço:\n");
		printf("1 - Banho\n");
		printf("2 - Tosa\n");
		printf("3 - Banho e Tosa\n");
		printf("Digite a opção desejada: ");
		fflush(stdin);
		scanf("%i", &opcao_serv[numeroPets]);

		switch (opcao_serv[numeroPets]) {
			case 1:
				printf("\n\nOPÇÃO BANHO SELECIONADA COM SUCESSO!\n");
				strcpy(opcao_menu2[numeroPets], "Banho");
				break;
			case 2:
				printf("\n\nOPÇÃO TOSA SELECIONADA COM SUCESSO!\n");
				strcpy(opcao_menu2[numeroPets], "Tosa");
				break;
			case 3:
				printf("\n\nOPÇÃO BANHO E TOSA SELECIONADA COM SUCESSO!\n");
				strcpy(opcao_menu2[numeroPets], "Banho e Tosa");
				break;
			default:
				printf("\n\nOpção inválida, tente novamente!\n\n");
				tempo();
				limparTela();
				return;
		}

		numeroPets++;
	}
	tempo();
	limparTela();
}

void consultas() {
	if (numeroConsulta < 10 && numeroClientes > 0) {
		imprimirNomePetshop();
		printf("CONSULTAS \n\n");
		printf("Datas: \n");
		printf("1 - Quarta-feira \n2 - Sábado\n");
		printf("Digite a opção desejada: ");
		scanf("%i", &opcao_dia[numeroConsulta]);

		switch (opcao_dia[numeroConsulta]) {
			case 1:
				strcpy(diaEscolhido[numeroConsulta], "Quarta-feira");
				break;
			case 2:
				strcpy(diaEscolhido[numeroConsulta], "Sábado");
				break;
			default:
				printf("Opção inválida!\n");
				return;
		}

		printf("\nClientes Cadastrados:\n");
		for (i = 0; i < numeroClientes; i++) {
			printf("%d - %s\n", i + 1, nomesClientes[i]);
		}

		printf("\nPara qual cliente você deseja marcar a consulta? ");
		printf("Digite o número do cliente (1 a %d): ", numeroClientes);
		scanf("%i", &opcao_cliente[numeroConsulta]);
		opcao_cliente[numeroConsulta]--;  // Ajuste para base 0

		if (opcao_cliente[numeroConsulta] < 0 || opcao_cliente[numeroConsulta] >= numeroClientes) {
			printf("Opção inválida, tente novamente\n");
			return;
		}

		printf("\nDoutor/Doutora:\n");
		printf("1 - Pedro Henrique\n");
		printf("2 - Fabiano\n");
		printf("Digite a opção desejada: ");
		scanf("%i", &opcao_doutor);

		switch (opcao_doutor) {
			case 1:
				strcpy(nomeDoutor[numeroConsulta], "Pedro Henrique");
				break;
			case 2:
				strcpy(nomeDoutor[numeroConsulta], "Fabiano");
				break;
			default:
				printf("Opção inválida, Dr./Drª não selecionado.\n");
				return;
		}

		numeroConsulta++;
		printf("\nConsulta marcada com sucesso!\n");
		tempo();
		limparTela();
	} else {
		printf("Número máximo de consultas atingido ou nenhum cliente cadastrado!\n");
	}
}

void imprimirInformacoes() {
	imprimirNomePetshop();

	printf("INFORMAÇÕES DE CLIENTES CADASTRADOS:\n\n");
	for (i = 0; i < numeroClientes; i++) {
		printf("%d - Nome: %s, Pet: %s, Telefone: %s\n", i + 1, nomesClientes[i], nomesPets[i], tel[i]);
	}

	printf("\nINFORMAÇÕES DE AGENDAMENTOS DE BANHO/TOSA:\n\n");
	for (i = 0; i < numeroPets; i++) {
		printf("%d - Nome do Pet: %s, Serviço: %s\n", i + 1, nomesPets[i], opcao_menu2[i]);
	}

	printf("\nINFORMAÇÕES DE CONSULTAS AGENDADAS:\n\n");
	for (i = 0; i < numeroConsulta; i++) {
		printf("%d - Data: %s, Cliente: %s, Doutor/Doutora: %s\n", i + 1, diaEscolhido[i], nomesClientes[opcao_cliente[i]], nomeDoutor[i]);
	}

	printf("\nPressione Enter para continuar...");
	system("pause");
	limparTela();
}

void pedro() {
	imprimirNomePetshop();
	if (numeroClientes < 10) {
		printf("CADASTRO\n");

		printf("Digite o nome do cliente: ");

		scanf("%s", nomesClientes[numeroClientes]);

		printf("Digite o nome do pet: ");
		fflush(stdin);
		scanf("%s", nomesPets[numeroClientes]);

		printf("Digite o telefone: ");
		fflush(stdin);
		scanf("%s", tel[numeroClientes]);
		printf("\nCADASTRO REALIZADO!\n\n");

		numeroClientes++;
	} else {
		printf("Número máximo de cadastros atingido!\n");
	}
	tempo();
	limparTela();
}

void menu() {
	do {
		imprimirNomePetshop();
		printf("\nMENU \n\n1 – CADASTRAR CLIENTE \n");
		printf("2 – AGENDAR BANHO OU TOSA \n");
		printf("3 – CONSULTA \n");
		printf("4 – IMPRIMIR RELATÓRIO GERAL \n");
		printf("5 - SAIR DO PROGRAMA \n");
		printf("Digite a opção desejada: ");
		fflush(stdin);
		scanf("%i", &opcao_menu);

		switch (opcao_menu) {
			case 1:
				pedro();
				break;
			case 2:
				banho_tosa();
				break;
			case 3:
				consultas();
				break;
			case 4:
				imprimirInformacoes();
				break;
			case 5:
				printf("\n\nVolte sempre ao Super_Petshop_PedroHenrique_CC\n\n");
				break;
			default:
				printf("\n\nOpção inválida, tente novamente!\n\n");
				break;
		}

	} while (opcao_menu != 5);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	imprimirNomePetshop();
	printf("Digite a senha para entrar: ");
	scanf("%s", senha_digitada);

	while (strcmp(senha_digitada, senha_correta) != 0) {
		printf("ERRO DE SENHA\n");
		printf("Digite a senha novamente: ");
		scanf("%s", senha_digitada);
	}

	do {
		menu();
	} while (opcao_menu != 5);

	return 0;
}


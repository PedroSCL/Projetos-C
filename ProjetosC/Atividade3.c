#include <stdio.h>
#include <locale.h>

char senha_correta[] = "123", senha_inserida[20], nome_cliente[50], telefone[12], endereco[100], cor_carro[50];
int opcao, opcao_carro, forma_pag, opcao_acessorio;

main(void) {
	setlocale(LC_ALL, "");

	printf("Digite a senha: ");
	scanf("%s", senha_inserida);

	while (strcmp(senha_inserida, senha_correta) != 0) {
		printf("ERRO DE SENHA\n");
		printf("Digite a senha novamente: ");
		scanf("%s", senha_inserida);
	}
	printf("SENHA CORRETA\n \n");


	printf("			SERVIÇOS			\n");
	printf("1 - Cadastro de clientes \n");
	printf("2 - Compra de carro \n");
	printf("3 - Compra de acessório \n\n");
	printf("Digite a opção desejada: ");
	scanf("%i", &opcao);

	switch(opcao) {
		case 1:
			printf("Digite o nome do cliente: ");
			fflush(stdin);
			fgets(nome_cliente, 50, stdin);
			printf("Digite o telefone do cliente: ");
			fgets(telefone, 50, stdin);
			printf("Digite o endereço do cliente: ");
			fflush(stdin);
			fgets(endereco, 100, stdin);
			break;
		case 2:
			printf("Carros disponíveis: \n");
			printf("1 - Fiat Argo \n");
			printf("2 - Fiat Cronos \n");
			printf("3 - Fiat Mobi \n");
			printf("4 - Sair do Programa \n\n");
			printf("Digite a opção que deseja: ");
			scanf("%i", &opcao_carro);
			switch(opcao_carro) {
				case 1:
					printf("Carro escolhido: Fiat Argo \n");
					break;
				case 2:
					printf("Carro escolhido: Fiat Cronos \n");
					break;
				case 3:
					printf("Carro escolhido: Fiat Mobi \n");
					break;
			}

			if ((opcao_carro > 0) && (opcao_carro <= 3)) {
				printf("Digite a cor desejada: ");
				fflush(stdin);
				fgets(cor_carro, 50, stdin);
				printf("Formas de pagamento: \n1 - A vista \n2 - Financiamento \n");
				printf("Digite a forma de pagamento: ");
				fflush(stdin);
				scanf("%i", &forma_pag);
				switch(forma_pag) {
					case 1:
						printf("Forma de pagamento: A vista \n");
						break;
					case 2:
						printf("Forma de pagamento: Financiamento \n");
						break;
					default:
						printf("Valor inválido!");
						break;
				}
			} else {
				printf("Valor inválido!");
			}
			break;

		case 3:
			printf("Acessórios");
			printf("1 - Travas elétricas \n2 - Vidros elétricos \n3 - Películas");
			printf("Digite sua opcao: ");
			scanf("%i", opcao_acessorio);



	}
}



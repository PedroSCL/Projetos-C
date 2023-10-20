#include <stdio.h>
#include <locale.h>
#include <string.h>

char senha_correta[] = "123", senha_digitada[20], nome_cliente[50], telefone[12], endereco[100], cor_carro[50];
int opcao, opcao_carro, forma_pag, opcao_acessorio, qntd_acessorios;

main(void) {
	setlocale(LC_ALL, ""); //Sistema de autenticação
	printf("Sistema Concessionária\n\n\n");
	printf("Digite a senha: ");
	scanf("%s", senha_digitada);

	while (strcmp(senha_digitada, senha_correta) != 0) {
		printf("ERRO DE SENHA\n");
		printf("Digite a senha novamente: ");
		scanf("%s", senha_digitada);
	}
	printf("SENHA CORRETA\n \n");
	//Programa em si
	while(opcao != 4) {
		printf("\n			SERVIÇOS			\n");
		printf("1 - Cadastro de clientes \n");
		printf("2 - Compra de carro \n");
		printf("3 - Compra de acessório \n");
		printf("4 - Sair do programa \n\n");
		printf("Digite a opção desejada: ");
		scanf("%i", &opcao);

		switch(opcao) {
				opcao = 0;
			case 1: //Parte de cadastro de clientes
				printf("==============CADASTRO DE CLIENTE==============\n\n");
				printf("Digite o nome do cliente: ");
				fflush(stdin);
				fgets(nome_cliente, 50, stdin);
				printf("Digite o telefone do cliente: ");
				fgets(telefone, 50, stdin);
				printf("Digite o endereço do cliente: ");
				fflush(stdin);
				fgets(endereco, 100, stdin);
				printf("\n\nCLIENTE CADASTRADO COM SUCESSO! \n\nNome: %sTelefone: %sEndereço: %s \n\n", nome_cliente, telefone, endereco);
				break;
			case 2: //Parte de compra de carros
				while(opcao_carro != 4) {
					printf("==============CARROS DISPONÍVEIS============== \n");
					printf("1 - Fiat Argo \n");
					printf("2 - Fiat Cronos \n");
					printf("3 - Fiat Mobi \n");
					printf("4 - Voltar ao menu anterior\n\n");
					printf("Digite a opção que deseja: ");
					scanf("%i", &opcao_carro);

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
								printf("\nCOMPRA FINALIZADA!\n\n");
								printf("Forma de pagamento: A vista \n");
								break;
							case 2:
								printf("\nCOMPRA FINALIZADA! \n\n");
								printf("Forma de pagamento: Financiamento \n");
								break;
							default:
								printf("Valor inválido! \n");
								break;
						}
					} else if(opcao_carro == 4) {
						opcao_carro = 0;
						break;
					} else {
						printf("Valor inválido!\n\n");
					}
					switch(opcao_carro) {
						case 1:
							opcao_carro = 4;
							printf("Carro escolhido: Fiat Argo \nCor: %s \n\n", cor_carro);
							break;
						case 2:
							opcao_carro = 4;
							printf("Carro escolhido: Fiat Cronos \nCor: %s \n\n", cor_carro);
							break;
						case 3:
							opcao_carro = 4;
							printf("Carro escolhido: Fiat Mobi \nCor: %s \n\n", cor_carro);
							break;
					}
				}
				opcao = 0;
				break;

			case 3: //Compra de acessórios
				do {
					opcao = 0;
					printf("\n\n==============ACESSÓRIOS============== \n\n");
					printf("1 - Travas elétricas \n2 - Vidros elétricos \n3 - Películas \n4 -Voltar ao menu anterior\n\n");
					printf("Digite sua opcao: ");
					fflush(stdin);
					scanf("%i", &opcao_acessorio);

					if (opcao_acessorio == 4) {

						break;
					}

					printf("\nQUANTIDADE \n\nQNTD: 1\nQNTD: 5\nQNTD: 10\n\n");
					printf("Escolha a quantidade desejada: ");
					fflush(stdin);
					scanf("%i", &qntd_acessorios);

					switch(opcao_acessorio) {
						case 1:
							printf("\n\nAcessório escolhido: Travas elétricas\n");
							break;
						case 2:
							printf("\n\nAcessório escolhido: Vidros elétricos\n");
							break;
						case 3:
							printf("\n\nAcessório escolhido: Películas\n");
							break;
						default:
							printf("ACESSÓRIO INVÁLIDO, TENTE NOVAMENTE\n");
							break;
					}
					switch(qntd_acessorios) {
						case 1:
							printf("Quantidade: 1 \n\n");
							break;
						case 5:
							printf("Quantidade: 5 \n\n");
							break;
						case 10:
							printf("Quantidade: 10 \n\n");
							break;
						default:
							printf("QUANTIDADE INVÁLIDA, TENTE NOVAMENTE!");
							break;
					}
					opcao = 0;
				} while ((opcao_acessorio > 3 || opcao_acessorio < 1) || (qntd_acessorios != 1 && qntd_acessorios != 5 && qntd_acessorios != 10));

				break;
			case 4: //Opção de finalizar programa
				printf("\n\nPROGRAMA FINALIZADO!\n\n");
				opcao = 4;
				break;
			default:
				printf("Opção inválida, tente novamente!\n\n");
				opcao = 0;
				break;
		}
	}
}


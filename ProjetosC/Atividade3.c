#include <stdio.h>
#include <locale.h>
#include <string.h>

char senha_correta[] = "123", senha_digitada[20], nome_cliente[50], telefone[12], endereco[100], cor_carro[50];
int opcao, opcao_carro, forma_pag, opcao_acessorio, qntd_acessorios;

main(void) {
	setlocale(LC_ALL, "");
	printf("Sistema Concessionária\n\n\n");
	printf("Digite a senha: ");
	scanf("%s", senha_digitada);

	while (strcmp(senha_digitada, senha_correta) != 0) {
		printf("ERRO DE SENHA\n");
		printf("Digite a senha novamente: ");
		scanf("%s", senha_digitada);
	}
	printf("SENHA CORRETA\n \n");

	while(opcao != 4) {
		printf("			SERVIÇOS			\n");
		printf("1 - Cadastro de clientes \n");
		printf("2 - Compra de carro \n");
		printf("3 - Compra de acessório \n");
		printf("4 - Sair do programa \n\n");
		printf("Digite a opção desejada: ");
		scanf("%i", &opcao);

		switch(opcao) {
			case 1:
				printf("==============CADASTRO DE CLIENTE==============\n\n");
				printf("Digite o nome do cliente: ");
				fflush(stdin);
				fgets(nome_cliente, 50, stdin);
				printf("Digite o telefone do cliente: ");
				fgets(telefone, 50, stdin);
				printf("Digite o endereço do cliente: ");
				fflush(stdin);
				fgets(endereco, 100, stdin);
				printf("\n\nCLIENTE CADASTRADO COM SUCESSO! \nInformações: \nNome: %sTelefone: %sEndereço: %s", nome_cliente, telefone, endereco);
				break;
			case 2:
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
								printf("Forma de pagamento: A vista \n");
								printf("COMPRA FINALIZADA!");
								break;
							case 2:
								printf("Forma de pagamento: Financiamento \n");
								printf("COMPRA FINALIZADA!");
								break;
							default:
								printf("Valor inválido!");
								break;
						}
					} else if(opcao_carro = 4){
						
					} else {
						printf("Valor inválido!\n\n");
					}
					switch(opcao_carro) {
						case 1:
							printf("Carro escolhido: Fiat Argo \nCor: %s", cor_carro);
							break;
						case 2:
							printf("Carro escolhido: Fiat Cronos \nCor: %s", cor_carro);
							break;
						case 3:
							printf("Carro escolhido: Fiat Mobi \nCor: %s", cor_carro);
							break;
					}
				}
				break;

			case 3:
				printf("==============ACESSÓRIOS==============s \n");
				printf("1 - Travas elétricas \n2 - Vidros elétricos \n3 - Películas\n\n");
				printf("Digite sua opcao: ");
				fflush(stdin);
				scanf("%i", &opcao_acessorio);
				switch(opcao_acessorio) {
					case 1:
						printf("\nAcessório escolhido: Travas elétricas\n");
						break;
					case 2:
						printf("Acessório escolhido: Vidros elétricos\n");
						break;
					case 3:
						printf("Acessório escolhido: Películas\n");
						break;
					default:
						printf("Valor inválido!\n");
						break;
				}
				printf("\nDigite a quantidade desejada: ");
				fflush(stdin);
				scanf("%i", &qntd_acessorios);
				printf("Quantidade: %i \n\n", qntd_acessorios);
				opcao = opcao++;
				break;
			case 4:
				printf("PROGRAMA FINALIZADO!");
				opcao = 4;
				break;
			default:
				printf("Opção inválida, tente novamente!\n\n");
				opcao = 0;
				break;
		}
	}
}


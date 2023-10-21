#include <stdio.h>
#include <locale.h>

char nome[50], email[50], tel[11], endereco[50], nome_fornecedor[50], tel_fornecedor[50], email_fornecedor[50], endereco_fornecedor[50];
int opcao;

int main(){
	setlocale(LC_ALL, "");
	
	void cadastrar(){
		printf("PET SHOP \n\n");
		printf("Digite o nome completo: ");
		fflush(stdin);
		fgets(nome, 50, stdin);
		printf("Digite o email: ");
		fgets(email, 50, stdin);
		printf("Digite o telefone: ");
		fflush(stdin);
		fgets(tel, 11, stdin);
		printf("Digite o endereço: ");
		fflush(stdin);
		fgets(endereco, 50, stdin);
	}
	
	void cadastrar_fornecedor(){
		printf("PET SHOP \n\n");
		printf("Digite o nome completo do fornecedor: ");
		fflush(stdin);
		fgets(nome_fornecedor, 50, stdin);
		printf("Digite o email de contato do fornecedor: ");
		fflush(stdin);
		fgets(email_fornecedor, 50, stdin);
		printf("Digite o telefone de contato: ");
		fflush(stdin);
		fgets(tel_fornecedor, 11, stdin);
		printf("Digite o endereço do fornecedor: ");
		fflush(stdin);
		fgets(endereco_fornecedor, 50, stdin);
	}
	
	void imprimir(){
		system("cls");
		printf("Cadastro realizado! \n\n\nNome: %sEmail: %sTelefone: %s \nEndereço: %s\n", nome, email, tel, endereco);
	}
	
	void imprimir_fornecedor(){
		printf("Cadastro realizado! \n\n\nNome do fornecedor: %sEmail do fornecedor: %sTelefone do fornecedor: %sEndereço do Fornecedor: %s\n", nome_fornecedor, email_fornecedor, tel_fornecedor, endereco_fornecedor);
	}
	
	printf("================Pet Shop================\n");
	printf("1 - Cadastro Cliente\n");
	printf("2 - Cadastro fornecedor\n");
	printf("Escolha a opção desejada: ");
	fflush(stdin);
	scanf("%i", &opcao);
	
	switch(opcao){
		case 1:
			cadastrar();
			system("cls");
			imprimir();
			break;
		case 2:
			cadastrar_fornecedor();
			system("cls");
			imprimir_fornecedor();
			break;
		default:
			printf("OPÇÃO INVÁLIDA!!!! \n\n");
			break;
	}

	
}

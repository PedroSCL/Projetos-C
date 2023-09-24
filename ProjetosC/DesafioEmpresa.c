#include <stdio.h>
#include <locale.h>

char nome_empresa[50], endereco_empresa[60], cnpj[14];
int telefone_empresa, ddd;
float renda_novos, renda_semi, media, total;


main(void){
	//CADASTRO
	setlocale(LC_ALL, "");
	printf("CADASTRO DA EMPRESA \n \n");
	printf("Digite o nome da empresa: ");
	fgets(nome_empresa, 60, stdin);
	printf("Digite o endereço da empresa: ");
	fflush(stdin);
	fgets(endereco_empresa, 60, stdin);
	printf("Primeiro Digite o DDD do telefone: ");
	fflush(stdin);
	scanf("%i", &ddd);
	printf("Digite o telefone: ");
	scanf("%i", &telefone_empresa);
	printf("Digite o CNPJ da empresa: ");
	scanf("%s", &cnpj);
	system("cls");
	//CADASTRO RENDA
	printf("Digite a renda do setor de NOVOS: R$");
	scanf("%f", &renda_novos);
	printf("Digite a renda do setor de SEMINOVOS: R$");
	scanf("%f", &renda_semi);
	//CALCULO MEDIA E TOTAL
	media = (renda_novos + renda_semi) / 2;
	total = (renda_novos + renda_semi);

	system("cls");
	
	//IMPRESSÃO
	printf("Empresa: 	%s", nome_empresa);
	printf("Endereço: 	%s", endereco_empresa);
	printf("Telefone: 	%i%i \n", ddd, telefone_empresa);
	printf("CNPJ: 		%s \n", cnpj);
	printf("Novos: 		%.2f \n", renda_novos);
	printf("Seminovos:  	%.2f \n", renda_semi);
	printf("Média : 	%.2f \n", media);
	printf("Total: 		%.2f \n", total);
	
	
	//TAMANHO DA EMPRESA
	if (total > 50000){
		printf("Tamanho: 	Empresa de grande porte \n \n");
	} else if (total > 10000){
		printf("Tamanho: 	Empresa de médio porte \n \n");
	} else if (total > 0){
		printf("Tamanho: 	Micro Empresa \n \n");
	} else {
		printf("ERRO Ditite valores válidos! \n \n");
	}
	
	system("pause");
	return 0;
}

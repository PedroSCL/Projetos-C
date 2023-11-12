#include <stdio.h>
#include <locale.h>
#include <string.h>

char senha_correta[] = "patinha", senha_digitada[20];
int opcao_menu, i, numeroClientes = 0;
char nomesClientes[10][50], nomesPets[10][50], tel[10][12];

void imprimirNomePetshop() {
    printf("Super_Petshop_seunome_sigladocurso\n\n\n");
}

void menu() {
    printf("\n\nMENU \n\n1 – CADASTRAR CLIENTE \n");
    printf("2 – AGENDAR BANHO OU TOSA \n");
    printf("3 – CONSULTA \n");
    printf("4 – IMPRIMIR RELATÓRIO GERAL \n");
    printf("5 - SAIR DO PROGRAMA \n");
    printf("Digite a opção desejada: ");
    scanf("%i", &opcao_menu);

    switch(opcao_menu) {
        case 1:
            pedro();
            break;
        case 2:
            break;
        case 3:
            printf("Opção 3\n");
            break;
        case 4:
            printf("Opção 4\n");
            break;
        case 5:
            printf("\n\nVolte sempre ao Super_Petshop_PedroHenrique_CC\n\n");
            break;
        default:
            printf("\n\nOpção inválida, tente novamente!\n\n");
            break;
    }
}

void pedro() {
    int maximoClientes = 10;
    if (numeroClientes < maximoClientes) {
        printf("CADASTRO\n");

        printf("Digite o nome do cliente: ");
        fflush(stdin);
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

    do {
        menu();
    } while(opcao_menu != 5);

    return 0;
}


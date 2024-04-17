// Vinícius Lázaro Lima Ribeiro
// Pedro Henrique da Silva Correia Lima
// Marco Antonio Gusmao Petry

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Definição da struct Cliente
typedef struct {
    char nome[51]; // 1 espaço extra para o terminador de string '\0'
    float saldo;
} Cliente;

// Função para criar um cliente
Cliente *criarCliente(const char *nome, float saldoInicial) {
    if (nome == NULL || nome[0] == '\0') {
        printf("Cliente inválido.\n\n");
        return NULL;
    }

    Cliente *novoCliente = malloc(sizeof(Cliente));
    if (novoCliente == NULL) {
        printf("Erro ao alocar memória.\n");
        return NULL;
    }

    strncpy(novoCliente->nome, nome, 50);
    novoCliente->nome[50] = '\0'; // Garantir que o nome esteja corretamente terminado
    novoCliente->saldo = saldoInicial;
    return novoCliente;
}

// Função para realizar saques
void sacar(Cliente *cliente, float valor) {
    if (cliente == NULL) {
        printf("Cliente inválido.\n\n");
        return;
    }
    if (valor <= 0) {
        printf("Valor de saque inválido. Insira um valor positivo.\n");
        return;
    }
    if (cliente->saldo >= valor) {
        cliente->saldo -= valor;
        printf("Saque Realizado com Sucesso!\n");
        printf("%s sacou R$%.2f. Novo saldo: R$%.2f\n\n", cliente->nome, valor, cliente->saldo);
    } else {
        printf("Saldo insuficiente para saque. Saldo de %s: R$%.2f\n\n", cliente->nome, cliente->saldo);        
    }
}

// Função para realizar depósitos
void depositar(Cliente *cliente, float valor) {
    if (cliente == NULL) {
        printf("Cliente inválido.\n\n");
        return;
    }
    if (valor <= 0) {
        printf("Tentativa de depósito de %s no valor de R$%.2f falhou. Por favor, tente novamente.\n", cliente->nome, valor);
        return;
    }
    cliente->saldo += valor;
    printf("Depósito Realizado com Sucesso!\n");
    printf("%s depositou R$%.2f. Novo saldo: R$%.2f\n\n", cliente->nome, valor, cliente->saldo);

}

// Função para transferências entre clientes
void transferencia(Cliente *remetente, Cliente *destinatario, float valor_trans) {
    if (remetente == NULL || destinatario == NULL) {
        printf("Cliente Inválido.\n\n");
        return;
    }
    if (valor_trans <= 0) {
        printf("Valor de transferência inválido. Por favor, tente novamente!\n");
        return;
    }
    if (remetente->saldo >= valor_trans) {
        remetente->saldo -= valor_trans;
        destinatario->saldo += valor_trans;
        printf("%s transferiu R$%.2f para %s.\n", remetente->nome, valor_trans, destinatario->nome);
        printf("Novo saldo de %s: R$%.2f.\n", remetente->nome, remetente->saldo);
        printf("Novo saldo de %s: R$%.2f.\n\n", destinatario->nome, destinatario->saldo);
    } else {
        printf("Operação inválida.\n\n");
    }
}
// Função para exibir o saldo final de um cliente
void exibirSaldoFinal(Cliente *cliente) {
    if (cliente == NULL) {
        printf("Cliente inválido.\n\n");
        return;
    }
    printf("O saldo final de %s é R$%.2f.\n", cliente->nome, cliente->saldo);
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    
    // Criação de dois clientes
    Cliente *cliente1 = criarCliente("Joao", 1000.00);
    Cliente *cliente2 = criarCliente("Maria", 300.00);

    // Realizando operações
    depositar(cliente1, 200.0);
    sacar(cliente1, 350.0);
    depositar(cliente2, 300.0);
    transferencia(cliente1, cliente2, 600.0);
    transferencia(cliente1, cliente2, 50.0);
    depositar(cliente2, 150.0);
    
    exibirSaldoFinal(cliente1);
    exibirSaldoFinal(cliente2);

    // Liberação de memória
    free(cliente1);
    free(cliente2);

    return 0;
}


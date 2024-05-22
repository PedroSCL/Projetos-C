#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contato {
    char nome[50];
    char email[50];
    char telefone[20];
} Contato;

Contato* criar_contato(const char *nome, const char *email, const char *telefone) {
    Contato *contato = malloc(sizeof(Contato));
    if (contato == NULL) {
        puts("Erro ao alocar memória para o contato.");
        exit(EXIT_FAILURE);
    }
    strcpy(contato->nome, nome);
    strcpy(contato->email, email);
    strcpy(contato->telefone, telefone);
    return contato;
}

void desalocar_contato(Contato **ref_contato) {
    if (*ref_contato != NULL) {
        free(*ref_contato);
        *ref_contato = NULL;
    }
}

typedef struct {
    Contato **contatos;
    int tamanho;
    int capacidade;
} Agenda;

Agenda* criar_agenda(int capacidade_inicial) {
    Agenda *agenda = malloc(sizeof(Agenda));
    if (agenda == NULL) {
        puts("Erro ao alocar memória para a agenda.");
        exit(EXIT_FAILURE);
    }
    agenda->contatos = malloc(capacidade_inicial * sizeof(Contato*));
    if (agenda->contatos == NULL) {
        puts("Erro ao alocar memória para os contatos.");
        free(agenda);
        exit(EXIT_FAILURE);
    }
    agenda->tamanho = 0;
    agenda->capacidade = capacidade_inicial;
    return agenda;
}

void adicionar_contato(Agenda *agenda, Contato *contato) {
    if (agenda->tamanho == agenda->capacidade) {
        agenda->capacidade *= 2;
        agenda->contatos = realloc(agenda->contatos, agenda->capacidade * sizeof(Contato*));
        if (agenda->contatos == NULL) {
            puts("Erro ao realocar memória para os contatos.");
            exit(EXIT_FAILURE);
        }
    }
    agenda->contatos[agenda->tamanho++] = contato;
}

void remover_contato(Agenda *agenda, const char *nome) {
    for (int i = 0; i < agenda->tamanho; i++) {
        if (strcmp(agenda->contatos[i]->nome, nome) == 0) {
            desalocar_contato(&agenda->contatos[i]);
            for (int j = i; j < agenda->tamanho - 1; j++) {
                agenda->contatos[j] = agenda->contatos[j + 1];
            }
            agenda->tamanho--;
            return;
        }
    }
    puts("Contato não encontrado.");
}

Contato* buscar_por_nome(Agenda *agenda, const char *nome) {
    for (int i = 0; i < agenda->tamanho; i++) {
        if (strcmp(agenda->contatos[i]->nome, nome) == 0) {
            return agenda->contatos[i];
        }
    }
    return NULL;
}

Contato* buscar_por_telefone(Agenda *agenda, const char *telefone) {
    for (int i = 0; i < agenda->tamanho; i++) {
        if (strcmp(agenda->contatos[i]->telefone, telefone) == 0) {
            return agenda->contatos[i];
        }
    }
    return NULL;
}

void lista_de_contatos(Agenda *agenda) {
    for (int i = 0; i < agenda->tamanho; i++) {
        printf("Nome: %s, Email: %s, Telefone: %s\n", agenda->contatos[i]->nome, agenda->contatos[i]->email, agenda->contatos[i]->telefone);
    }
}

void desalocar_agenda(Agenda *agenda) {
    for (int i = 0; i < agenda->tamanho; i++) {
        desalocar_contato(&agenda->contatos[i]);
    }
    free(agenda->contatos);
    free(agenda);
}

int main() {
    Agenda *agenda = criar_agenda(2);

    adicionar_contato(agenda, criar_contato("Pedro", "pedrohenrique9353@gmail.com", "61994545423"));
    adicionar_contato(agenda, criar_contato("Julia", "Julia@gmail.com", "61987654321"));

    puts("Lista de contatos na agenda:");
    lista_de_contatos(agenda);

    Contato *cont = buscar_por_nome(agenda, "Alice");
    if (cont != NULL) {
        printf("Contato encontrado: %s\n", cont->nome);
    } else {
        puts("Contato Alice não encontrado.");
    }

    cont = buscar_por_nome(agenda, "Pedro");
    if (cont != NULL) {
        printf("Contato encontrado: %s\n", cont->nome);
    }

    remover_contato(agenda, "Pedro");
    puts("Contatos na agenda após remover Pedro:");
    lista_de_contatos(agenda);

    desalocar_agenda(agenda);
    return 0;
}

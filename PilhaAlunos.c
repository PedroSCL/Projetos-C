#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct _aluno {
  char nome[50];
  struct _aluno *proximo;
} Aluno;

typedef struct _pilha {
  Aluno *topo;
  int tamanho_pilha;
} Pilha;

Pilha *criarPilha(){
  Pilha *novaPilha = malloc(sizeof(Pilha));
  if (novaPilha == NULL) {
    printf("Erro na alocação de memória para a pilha!\n");
    return NULL;
  }

  novaPilha->topo = NULL;
  novaPilha->tamanho_pilha = 0;
  printf("\nPilha criada com sucesso.\n\n");
  return novaPilha;
}

void push(Pilha *pilha, char *nome) {
  Aluno *novoAluno = malloc(sizeof(Aluno));
  if (novoAluno == NULL) {
    printf("Erro na alocação de memória para o aluno!\n");
    return;
  }
  strcpy(novoAluno->nome, nome);
  Aluno *anterior = pilha->topo;
  novoAluno->proximo = anterior;
  pilha->topo = novoAluno;
  pilha->tamanho_pilha++;
  
  printf("Adicionado o/a aluno: %s\n", nome);
}


void pop(Pilha *pilha){
  if (pilha->topo == NULL) {
    printf("A pilha está vazia!\n");
    return;
  }

  Aluno *aluno_removido = pilha->topo;
  pilha->topo = aluno_removido->proximo;
  pilha->tamanho_pilha--;
  printf("Aluno removido do topo: %s\n", aluno_removido->nome);
  free(aluno_removido);
  
}

void top(Pilha *pilha) {
  if (pilha->topo == NULL) {
    printf("A pilha está vazia!\n");
    return;
  }

  printf("Aluno no topo da pilha: %s\n", pilha->topo->nome);
}

void imprimirPilha(Pilha *pilha) {
  if (pilha->topo == NULL) {
    printf("A pilha está vazia!\n");
    return;
  }

  Aluno *atual = pilha->topo;
  printf("Alunos na pilha:\n");
  while (atual != NULL) {
    printf("%s\n", atual->nome);
    atual = atual->proximo;
  }
}

void liberarPilha(Pilha *pilha) {
  Aluno *atual;
  while (pilha->topo != NULL) {
    atual = pilha->topo;
    pilha->topo = atual->proximo;
    free(atual);
  }
}

int main(){
    setlocale(LC_ALL, "portuguese");
    Pilha *pilhaAlunos = criarPilha();

    push(pilhaAlunos, "Vinicius");
    push(pilhaAlunos, "Julia");
    push(pilhaAlunos, "Pedro");

    printf("\nImprimindo a pilha após inserções\n");
    imprimirPilha(pilhaAlunos);
    printf("\n");

    pop(pilhaAlunos);

    top(pilhaAlunos);
    printf("\n");

    printf("Imprimindo a pilha após remoção\n");
    imprimirPilha(pilhaAlunos);
    printf("\n");

    liberarPilha(pilhaAlunos);
    return 0;
}
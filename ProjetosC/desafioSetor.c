#include <stdio.h>
#include <locale.h>

char nome[50], setor[4];

int main(void) {
    setlocale(LC_ALL, "");
    printf("Digite seu nome completo: ");
    scanf("%s", nome);
    printf("Digite o seu setor: ");
    fflush(stdin);
    scanf("%s", setor);

    if ((setor[0] == 'A' || setor[0] == 'a') || strcmp(setor, "111") == 0 || (setor[0] == 't' && setor[1] == 'e' && setor[2] == 'c') || (setor[0] == 'T' && setor[1] == 'E' && setor[2] == 'C')) {
        printf("Selecionado setor: Técnico\n\n");
    } else if ((setor[0] == 'B' || setor[0] == 'b') || strcmp(setor, "112") == 0 || (setor[0] == 'a' && setor[1] == 'n') || (setor[0] == 'A' && setor[1] == 'N')) {
        printf("Selecionado setor: Analista\n\n");
    } else if ((setor[0] == 'C' || setor[0] == 'c') || strcmp(setor, "122") == 0 || (setor[0] == 'g' && setor[1] == 'e' && setor[2] == 'r') || (setor[0] == 'G' && setor[1] == 'E' && setor[2] == 'R')) {
        printf("Selecionado setor: Gerente\n\n");
    } else if ((setor[0] == 'D' || setor[0] == 'd') || strcmp(setor, "233") == 0 || (setor[0] == 'd' && setor[1] == 'i' && setor[2] == 'r') || (setor[0] == 'D' && setor[1] == 'I' && setor[2] == 'R')) {
        printf("Selecionado setor: Diretor\n\n");
    } else {
        printf("Setor não reconhecido.\n\n");
    }

    return 0;
}

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float numero1, numero2;

int main(void){
    setlocale(LC_ALL, "Portuguese");
    //Entrada de dados
    printf("Digite o 1º valor: ");
    scanf("%f", &numero1);
    printf("Digite o 2º valor: ");
    scanf("%f", &numero2);
    system("cls");
    //Verificação de dados e impressão
    if (numero1 == numero2){
       printf("Valores iguais!");
    } else if (numero1 > numero2){
        printf("%.2f é o maior e %.2f é o menor", numero1, numero2);
    } else if (numero1 < numero2){
        printf("%.2f é o maior e %.2f é o menor", numero2, numero1);
    }
    return 0;
}

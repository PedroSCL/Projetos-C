#include <stdio.h>
#include <locale.h>

float valor1, valor2, valor3;
main(void){
    //Entrada de dados
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o 1º valor: ");
    scanf("%f", &valor1);
    printf("Digite o 2º valor: ");
    fflush(stdin);
    scanf("%f", &valor2);
    printf("Digite o 3º valor: ");
    fflush(stdin);
    scanf("%f", &valor3);
    system("cls");

    //Verificação de dados e impressão
    if (valor1 >= valor2 && valor1 >= valor3) {
       
        printf("O maior valor: %.2f\n", valor1);

        if (valor2 >= valor3) {
            printf("O valor intermediário: %.2f\n", valor2);
            printf("O menor valor: %.2f\n", valor3);
        } else {
            printf("O valor intermediário: %.2f\n", valor3);
            printf("O menor valor: %.2f\n", valor2);
        }
    } else if (valor2 >= valor1 && valor2 >= valor3) {

        printf("O maior valor: %.2f\n", valor2);

        if (valor1 >= valor3) {
            printf("O valor intermediário: %.2f\n", valor1);
            printf("O menor valor: %.2f\n", valor3);
        } else {
            printf("O valor intermediário: %.2f\n", valor3);
            printf("O menor valor: %.2f\n", valor1);
        }
    } else {

        printf("O maior valor: %.2f\n", valor3);

        if (valor1 >= valor2) {
            printf("O valor intermediário: %.2f\n", valor1);
            printf("O menor valor: %.2f\n", valor2);
        } else {
            printf("O valor intermediário: %.2f\n", valor2);
            printf("O menor valor: %.2f\n", valor1);
        }
    }
    return 0;
}
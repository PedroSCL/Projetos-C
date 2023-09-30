#include <stdio.h>
#include <locale.h>

main(void){
    setlocale(LC_ALL, "Portuguese");
    int numero;

    for (numero = 1; numero<=3; numero++){
        printf("Número: %i\n", numero);
    }
}

#include <stdio.h>
#include <locale.h>

int  i = 1;

main(void){
	setlocale(LC_ALL, "");
	while(i <= 3){
		printf("N�mero: %i\n", i);
		i++;
	}
}


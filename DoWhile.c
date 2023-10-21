#include <stdio.h>
#include <locale.h>

int i = 1;

main(void){
	setlocale(LC_ALL, "");
	do {
		printf("%i \n", i);
		i++;
	} while(i <= 0);
	return 0;
}

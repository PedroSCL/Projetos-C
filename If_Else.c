#include <stdio.h>
#include <locale.h>

int idade1, idade2;

main(void){
	setlocale(LC_ALL, "");
	printf("Digite a 1� idade: ");
	scanf("%i", &idade1);
	printf("Digite a 2� idade: ");
	scanf("%i", &idade2);
	
	if(idade1 == idade2){
		system("cls");
		printf("As idades s�o iguais \n \n");
	}else{
		if(idade1 > idade2){
		system("cls");
		printf("1� idade maior que a 2� idade \n \n");
	}else{
		system("cls");
		printf("2� idade maior que a 1� idade \n \n");
	}
	}
	
	system("pause");
	return 0;
}

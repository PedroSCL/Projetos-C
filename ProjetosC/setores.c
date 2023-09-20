#include <stdio.h>
#include <locale.h>

char setor;

main(void){
	setlocale(LC_ALL, "");
	printf("A - Programador(a) \nB - Back End \nC - Testador(a): \nDigite sua opção:");
	scanf("%ca", &setor);
	
	if((setor == 'A') || (setor == 'a')){
		system("cls");
		printf("Selecionado  setor PROGRAMADOR(A) \n \n");
	} else if((setor == 'B') || (setor == 'b')){
		system("cls");
		printf("Selecionado setor BACK END \n \n");
	} else if((setor == 'C') || (setor == 'c')){
		system("cls");
		printf("Selecionado setor TESTADOR(A) \n \n");
	}else{
		system("cls");
		printf("Setor inválido, digite de A a C \n \n");
	}
	system("pause");
	return 0;
	
}

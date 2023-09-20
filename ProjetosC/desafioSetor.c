#include <stdio.h>
#include <locale.h>

char nome[50], setor;

main(void){
	setlocale(LC_ALL, "");
	printf("Digite seu nome completo: ");
	scanf("%s", &nome);
	printf("Digite o seu setor: ");
	fflush(stdin);
	scanf("%s", &setor);

	if((setor == 'A') || (setor[0] == 'a') || (setor == "111") || (setor == 'tec') || (setor == 'TEC')){
		printf("Selecionado setor: Técnico \n \n");
	} else if((setor == 'B') ||(setor == 'b') || (setor == '112') || (setor == 'an') || (setor == 'AN')){
		printf("Selecionado setor: Analista \n \n");
	}else if((setor == 'C') ||(setor == 'C') || (setor == '122') || (setor == 'ger') || (setor == 'GER')){
		printf("Selecionado setor: Gerente \n \n");
	}else if((setor == 'D') ||(setor == 'd') || (setor == '233') || (setor == 'dir') || (setor == 'DIR')){
		printf("Selecionado setor: Diretor \n \n");
}
}

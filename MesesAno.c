#include <stdio.h>
#include <locale.h>

enum ano {janeiro, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro};
int mes;
main(void){
	setlocale(LC_ALL, "");
	printf("Digite o m�s que deseja (1 at� 12): ");
	scanf("%i", &mes);
	mes = mes - 1;
	
	switch(mes){
		case janeiro:{
			printf("M�s: Janeiro");
			break;
		}
		case fevereiro:{
			printf("M�s: Fevereiro");
			break;
		}
		case marco:{
			printf("M�s: Mar�o");
			break;
		}
		case abril:{
			printf("M�s: Abril");
			break;
		}
		case maio:{
			printf("M�s: Maio");
			break;
		}
		case junho:{
			printf("M�s: Junho");
			break;
		}
		case julho:{
			printf("M�s: Julho");
			break;
		}
		case agosto:{
			printf("M�s: Agosto");
			break;
		}
		case setembro:{
			printf("Ms: Setembro");
			break;
		}
		case outubro:{
			printf("M�s: Outubro");
			break;
		}
		case novembro:{
			printf("M�s: Novembro");
			break;
		}
		case dezembro:{
			printf("M�s: Dezembro");
			break;
		}
		default:
			printf("Op��o inv�lida!");
	}
}

#include <stdio.h>
#include <locale.h>

enum ano {janeiro, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, novembro, dezembro};
int mes;
main(void){
	setlocale(LC_ALL, "");
	printf("Digite o mês que deseja (1 até 12): ");
	scanf("%i", &mes);
	mes = mes - 1;
	
	switch(mes){
		case janeiro:{
			printf("Mês: Janeiro");
			break;
		}
		case fevereiro:{
			printf("Mês: Fevereiro");
			break;
		}
		case marco:{
			printf("Mês: Março");
			break;
		}
		case abril:{
			printf("Mês: Abril");
			break;
		}
		case maio:{
			printf("Mês: Maio");
			break;
		}
		case junho:{
			printf("Mês: Junho");
			break;
		}
		case julho:{
			printf("Mês: Julho");
			break;
		}
		case agosto:{
			printf("Mês: Agosto");
			break;
		}
		case setembro:{
			printf("Ms: Setembro");
			break;
		}
		case outubro:{
			printf("Mês: Outubro");
			break;
		}
		case novembro:{
			printf("Mês: Novembro");
			break;
		}
		case dezembro:{
			printf("Mês: Dezembro");
			break;
		}
		default:
			printf("Opção inválida!");
	}
}

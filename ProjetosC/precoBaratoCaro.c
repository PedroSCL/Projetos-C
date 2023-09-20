#include <stdio.h>
#include <locale.h>

float preco;

main(void){
	setlocale(LC_ALL, "");
	printf("Digite o valor do produto: ");
	scanf("%f", &preco);
	
	if ((preco >= 91) && (preco <=100)){
		printf("Não comprar \n \n");
	}else{
		if((preco >= 31) && (preco <= 90)){
			printf("Taxa alta, cuidado ao comprar \n \n");
		}else{
			if((preco > 0) && (preco < 101)){
				printf("Barato, pode comprar");
			}else{
				printf("Valor inválido, digite de 0 a 100 \n \n");
			}
		}
	}
	
}

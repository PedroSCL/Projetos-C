#include <stdio.h>
#include <locale.h>
float valor1, valor2, media;
void cadastrar(){    //CADASTRAR DOIS VALORES
	printf("Digite a 1� nota: ");
	scanf("%f", &valor1);
	printf("Digite a 2� nota: ");
	scanf("%f", &valor2);
}

void fx_media(){     //FUN��O PARA CALCULAR M�DIA
	media = (valor1 + valor2) / 2;
}

void resultado(){     //FUN��O PARA MOSTRAR O RESULTADO
	printf("Nota 1: %.2f \nNota2 : %.2f \nM�dia: %.2f\n\n", valor1, valor2, media);
	if (media < 7){
		printf("Reprovado");
	} else if ((media > 0) && (media <=10)){
		printf("Aprovado!");
	} else {
		printf("Nota inv�lida");
	}
}

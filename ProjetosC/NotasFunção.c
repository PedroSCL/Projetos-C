#include <stdio.h>
float mediaNotas(float prova1, float prova2, float trab){
	float notaParcial, notaFinal;
	
	printf("In�cio da fun��o mediaNotas\n");
	getchar();
	printf("Prova1 = %f prova2 = %f trab = %f\n", prova1, prova2, trab);
	getchar();
	notaParcial = (prova1 + prova2) / 2;
	notaFinal = (notaParcial * 0.7) + (trab * 0.3);
	
	printf("Fim da fun��o mediaNotas \n");
	getchar();
	return notaFinal;
}
	
int main(){
	float nota1, nota2, notaTrab, mediaFinal;
	
	printf("Informe a nota da primeira prova ==>");
	scanf("%f", &nota1);
	printf("Informe a nota da segunda prova ==>");
	scanf("%f", &nota2);
	printf("Informe a nota do trabalho ==>");
	scanf("%f", &notaTrab);
	
	mediaFinal = mediaNotas(nota1, nota2, notaTrab);
	
	printf("Nota Final: %.2f", mediaFinal);
}

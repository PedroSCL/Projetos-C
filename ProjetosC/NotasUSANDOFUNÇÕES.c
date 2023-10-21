#include <stdio.h>
#include <locale.h>

float nota1, nota2, media;
int i = 0;

int main(){
	setlocale(LC_ALL, "");
	void ler_nota(){
			printf("Cadastro de notas \n\n");
			printf("Digite a primeira nota: ");
			scanf("%f", &nota1);
			while(i == 0){
				if ((nota1 > 0) && (nota1 <= 10)){
				printf("Digite a segunda nota: ");
				scanf("%f", &nota2);
			} else {
				while((nota1 < 0) || (nota1 > 10) || (nota2 < 0) || (nota2 > 10)){
					printf("Valor inválido! \n");
					printf("Cadastro de notas \n\n");
					printf("Digite a primeira nota: ");
					scanf("%f", &nota1);
					printf("Digite a segunda nota: ");
					scanf("%f", &nota2);
					i++;	
				}
			}
			}
			
			
		} 
		
		ler_nota();
	
	
	void calcula_media(){
		media = ((nota1 + nota2) / 2);
	}
	
	void exibe_resultado(){
		system("cls");
		printf("Nota1: %.2f\n", nota1);
		printf("Nota2: %.2f\n", nota2);
		printf("Média final: %.2f", media);
	}
	
	void pausa(){
		system("pause");
	}
}
	


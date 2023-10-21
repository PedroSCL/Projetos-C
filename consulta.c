#include <stdio.h>
#include <locale.h>

char paciente[40], motivo1[60], motivo2[60], doutor1[60], especialidade1[60], hora1[5], hora2[5], doutor2[60], especialidade2[60];
int cpf, dia1, mes1, ano1, dia2, mes2, ano2;
float valor1, valor2, total;

main(void){
    setlocale(LC_ALL, "");
    printf("Digite o nome completo: ");
    fgets(paciente, 40, stdin);
    printf("Digite o CPF (SOMENTE NÚMEROS): ");
    fflush(stdin);
    scanf("%i", &cpf);
    printf("Valor da 1º consulta: ");
    fflush(stdin);
    scanf("%f", &valor1);
    printf("Motivo da consulta: ");
    fflush(stdin);
    fgets(motivo1, 60, stdin);
    
    printf("Digite dia da 1º consulta: ");
    fflush(stdin);
    scanf("%i", &dia1);
    printf("Digite o mês da 1º consulta: ");
    fflush(stdin);
    scanf("%i", &mes1);
    fflush(stdin);
    printf("Digite o ano da 1º consulta: ");
    scanf("%i", &ano1);
    printf("Digite o horário de atendimento: ");
    fflush(stdin);
    scanf("%s", hora1);
    
    printf("Nome completo do doutor(a): ");
    fflush(stdin);
    fgets(doutor1, 60, stdin);
    printf("Especialização: ");
    fflush(stdin);
    fgets(especialidade1, 60, stdin);

    
    system("cls");
    printf("Valor da 2º consulta: ");
    fflush(stdin);
    scanf("%f", &valor2);
    printf("Motivo da 2º consulta: ");
    fflush(stdin);
    fgets(motivo2, 60, stdin);
    
    printf("Digite dia da 2º consulta: ");
    fflush(stdin);
    scanf("%i", &dia2);
    printf("Digite o mês da 2º consulta: ");
    fflush(stdin);
    scanf("%i", &mes2);
    fflush(stdin);
    printf("Digite o ano da 2º consulta: ");
    scanf("%i", &ano2);
    printf("Digite o horário de atendimento: ");
    fflush(stdin);
    scanf("%s", hora2);
    
    printf("Nome completo do doutor(a): ");
    fflush(stdin);
    fgets(doutor2, 60, stdin);
    printf("Especialização: ");
    fflush(stdin);
    fgets(especialidade2, 60, stdin);
 

    total = valor1 + valor2;
    
    system("cls");
    printf("INFORMAÇÕES\n");
    printf("\nPaciente: %s \nMotivo 1º consulta: %s \nValor da consulta: R$%.2f\n", paciente, motivo1, valor1);
    printf("Doutor(a): %s \nEspecialidade: %s\n", doutor1, especialidade1);
    printf("Data: %i/%i/%i \nHorário: %s \n", dia1, mes1, ano1, hora1);
    printf("\nMotivo da 2º consulta: %s \nValor da consulta: R$%.2f", motivo2, valor2, total);
    printf("\nDoutor(a): %s \nEspecialidade: %s \nTOTAL das consultas: R$%.2f", doutor1, especialidade1, total);
    

}

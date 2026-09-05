#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "FuncaoVetor.c"

void CodCurs(char Cod[])
{
    if(strcmp(Cod, "048")==0)
        strcpy(Cod, "Analise e Desenvolvimento de Sistemas (ADS)");

    else if(strcmp(Cod, "100")==0)
        strcpy(Cod, "Fabricacao Mecanica (FMEC)");

    else if(strcmp(Cod, "099")==0)
        strcpy(Cod, "Projetos Mecanicos (PMEC)");

    else if(strcmp(Cod, "061")==0)
        strcpy(Cod, "Sistemas Biomedicos");

    else if(strcmp(Cod, "074")==0)
        strcpy(Cod, "Logistica");

    else if(strcmp(Cod, "073")==0)
        strcpy(Cod, "Eletronica Automotiva");

    else if(strcmp(Cod, "080")==0)
        strcpy(Cod, "Polimeros");

    else if(strcmp(Cod, "081")==0)
        strcpy(Cod, "Processos Metalurgicos");

    else if(strcmp(Cod, "128")==0)
        strcpy(Cod, "Manufatura Avancada");

    else if(strcmp(Cod, "064")==0)
        strcpy(Cod, "Gestao Empresarial – EAD");

    else if(strcmp(Cod, "136")==0)
        strcpy(Cod, "Gestao da Qualidade");

    else if(strcmp(Cod, "068")==0)
        strcpy(Cod, "Manuteno cade Aeronaves");

    else if(strcmp(Cod, "149")==0)
        strcpy(Cod, "Logistica – AMS");

    else if(strcmp(Cod, "143")==0)
        strcpy(Cod, "Analise e Desenvolvimento de Sistemas – AMS");

    else if(strcmp(Cod, "090")==0)
        strcpy(Cod, "Automacao Industrial");

    else
        strcpy(Cod, "Curso nao cadastrado");
}

int main ()
{
    char RA[14], RAparte[44];
    printf("Digite seu RA: ");
    scanf("%s", RA);


    printf("Unidade: Fatec Sorocaba\n");


    SubString(RA, RAparte, 3, 5);
    CodCurs(RAparte);
    printf("Curso: %s\n", RAparte);


    SubString(RA, RAparte, 6, 7);
    printf("Ano de ingresso: 20%s\n", RAparte);


    SubString(RA, RAparte, 8, 8);
    printf("Semestre de ingresso: %so\n");


    SubString(RA, RAparte, 9, 9);
    if(strcmp(RAparte, "1")==0)
        printf("Periodo: Diurno\n");

    else if(strcmp(RAparte, "2")==0)
        printf("Periodo: matutino\n");

    else if(strcmp(RAparte, "3")==0)
        printf("Periodo: Noturno\n");


    SubString(RA, RAparte, 10, 12);
    printf("Numero sequencial do aluno: %s\n", RAparte);

    return 0;
}

/*Faça um programa que carregue uma matriz 12x4 com os valores das vendas de uma loja, onde cada linha representa um mês do ano e cada coluna representa uma semana do mês. Calcule e mostre:
* O total vendido em cada mês do ano, mostrando o nome do mês por extenso;
* O total vendido em cada semana durante todo o ano;
* O total vendido pela loja no ano.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Número de elementos do vetor ou Matriz*/
#define VENDASMES 12
#define VENDASSEMANA 4
#define COLUNA 15

/*Inicio*/
main()
{
    /*Região*/
    setlocale(LC_ALL, "Portuguese");

    /*Declaração de varáveis*/
    char vetorMes[VENDASMES][COLUNA] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    float vetorSemana[VENDASMES][VENDASSEMANA] = {0}, num;
    float vetorT_Semana[VENDASMES] = {0}, TotalMes = 0;
    float totalAno = 0;
    int i, j;

    /*Entrada de dados*/
    for(i = 0; i < VENDASMES; i++)
    {
        printf("Digite as vendas do Mês %s\n", vetorMes[i]);
        for(j = 0; j < VENDASSEMANA; j++)
        {
            printf("Semana %d: $", i);
            scanf("%f", &num);
            vetorSemana[i][j] = num;
        }
        printf("\n");
    }

    /*Bloco de comandos*/
    /*O total vendido em cada mês do ano, mostrando o nome do mês por extenso:*/
    for(i = 0; i < VENDASMES; i++)
    {
        printf(" O total de vendas no mês %s: $", vetorMes[i]);
        for(j = 0; j < VENDASSEMANA; j++)
        {
            TotalMes += vetorSemana[i][j];
        }
        printf("%.2f", vetorT_Semana[i]);
        TotalMes = 0;
        printf("\n");
    }

    /*O total vendido em cada semana durante todo o ano*/
    printf("%s\t%s\t%s\t%s\t%s\t\n", "Mês", "Semana 1", "Semana 2", "Semana 3", "Semana 4");
    for(i = 0; i < VENDASMES; i++)
    {
        printf("%s", vetorMes[i]);
        for(i = 0; i < VENDASSEMANA; i++)
        {
            printf("%.2f", vetorSemana[i][j]);
            vetorT_Semana[i]+= vetorSemana[i][j];
        }
        /*O totalvendido em cada semana durante todo o ano*/
        printf("%.2f", vetorT_Semana[i]);
    }

    /*O total vendido pela loja no ano*/
    for(i = 0; i < VENDASMES; i++)
    {
        for(j = 0; j < VENDASSEMANA; j++)
        {
            totalAno += vetorSemana[i][j];
        }
    }
    printf("\nO total vendido pela loja este ano: $%.2f\n\n", totalAno);
    system("pause");
    return 0;
}
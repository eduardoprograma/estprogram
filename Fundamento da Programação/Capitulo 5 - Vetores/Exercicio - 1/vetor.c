/*Programa que testa as propriedades do vetor*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    /*Declaração de variáveis*/
    int num[6] = {0};
    int cont, num1 = 0, contP = 0, contI = 0;

    /*Entrada de dados*/
    printf("Digite um numero interiro: ");
    scanf("%d", num1);
    /*Bloco de comando*/
    for(cont = 1; cont <= 6; cont++)
    {
        /*if (num1 % 2 == 0) {
            contP++;
        }
        else
        {
            contI++;
        }*/
        printf("Digite um numero interiro: ");
        scanf("%d", num[num1]);
    }

    /*Saída de dados*
    printf("A contagem de números pares é: %i\n", contP);
    printf("Os números são: ");
    for(cont = 1; cont <= 6; cont++)
    {
        if (num[num1] % 2 == 0 && cont <= 5) {
            printf(" %i,\t", num[num1]);
        }
        else if(num[num1] % 2 == 1 && cont == 6)
        {
            printf(" %i\t\n", num[num1]);
        }
    }
    printf("A contagem de números impares é: %i\n", contI);
    printf("Os números são: ");
    for(cont = 1; cont <= 6; cont++)
    {
        if (num[num1] % 2 == 1 && cont <= 5) {
            printf(" %i,\t", num[num1]);
        }
        else if(num[num1] % 2 == 1 && cont == 6)
        {
            printf(" %i\t\n", num[num1]);
        }
    }
    
    /*FIM DO CÓDIGO*/
    system("pause");
    return 0;
}
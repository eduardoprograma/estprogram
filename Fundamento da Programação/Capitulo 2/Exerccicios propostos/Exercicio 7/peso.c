/*Programa de Peso*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    /*Declare as variaveis*/
    float peso, magra, gorda;
    /*Entrar com os valores das variaveis*/
    printf("Bem vindo ao programa de controle de peso.\n\n");
    printf("Digite o valor do seu peso: ");
    scanf("%.2f", &peso);
    /*Bloco de comando*/
    magra = peso - (peso * 0.15);
    gorda = peso + (peso * 0.20);
    /*Saida de valores das variaveis*/
    printf("Se voce engordar seu peso sera %.2f\n\n", gorda);
    printf("Se voce emagrecer seu peso sera %.2f\n\n", magra);
    /*Fim do codigo*/
    system("pause");
    return 0;
}
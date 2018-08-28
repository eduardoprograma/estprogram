/*Função square definida pelo programador*/
#include <stdio.h>
int square (int);  /*protótipo da função*/
main () {
    int x;
    for(x = 1; x <= 10; x++)
    {
        printf("%d ", square(x));
    }
    return 0;
}
/*Definições da função*/
int square(int y); {
    return y * y;
}
/*Inicializando um array com uma declaração*/
#include <stdio.h>
#include <stdlib.h>
main(){
    int i, n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
    printf("%s%13s\n", "Elemento", "Valor");
    for(i = 0; i <= 9; i++)
    {
        printf("%7d%13d\n", i, n[i]);
    }
    system("pause");
    return 0;
}
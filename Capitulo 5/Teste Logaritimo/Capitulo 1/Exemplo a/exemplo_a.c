#include <stdio.h>
#include <stdlib.h>
int main () {
    float n1, n2, m;
    printf("Digite dois numeros: ");
    scanf("%f, %f", &n1, &n2);
    m = n1 * n2;
    printf("Multiplicacao = %.2f", m);
    return 0;
}
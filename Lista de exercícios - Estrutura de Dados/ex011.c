#include <stdio.h>
#include <stdlib.h>

/*
11. Leia o valor do raio de um círculo e calcule a área do círculo correspondente. Imprima o
resultado dessa operação. A área do círculo é 𝜋 ∗ 𝑟𝑎𝑖𝑜², considere 𝜋 = 3,141592 .
*/

int main () {
    float r, area, pi = 3.141592;

    printf("Insira o valor do raio de um circulo para obter sua area: ");
    scanf("%f", &r);

    area = pi*(r*r);

    printf("\nA area do circulo de raio %f e %f", r, area);

    printf("\n\n");

    system("pause");
    return 0;
}

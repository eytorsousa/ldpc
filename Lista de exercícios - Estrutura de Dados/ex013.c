#include <stdio.h>
#include <stdlib.h>

/*
13. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de
um cilindro circular é calculado por meio da seguinte fórmula: V = pi ∗ 𝑟𝑎𝑖𝑜2∗ 𝑎𝑙𝑡𝑢𝑟𝑎,
onde pi = 3,141592 .
*/

int main() {
    float a, r, pi, v;
    pi = 3.141592;

    printf("Insira a altura e o raio de um cilindro circular para obter seu volume: ");
    printf("\nAltura = ");
    scanf("%f", &a);
    printf("Raio = ");
    scanf("%f", &r);

    v = pi * (r * r) * a;

    printf("\n\nO volume do cilindro de raio %f e altura %f e: %f", r, a, v);

    printf("\n\n");

    system("pause");
    return 0;
}

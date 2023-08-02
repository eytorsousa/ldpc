#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
12. Sejam 𝑎 e 𝑏 os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = raiz de 𝑎2 + 𝑏2.
Faça um programa que receba os valores de 𝑎 e 𝑏 e encontre o
valor da hipotenusa através da equação. Imprima no final o resultado dessa operação.

*/

int main () {
    float a, b, h;

    printf("Insira os valores dos lados de um triangulo para obter sua hipotenusa: ");
    printf("\n\nCateto a: ");
    scanf("%f", &a);
    printf("Cateto b: ");
    scanf("%f", &b);

    h = sqrt((a * a) + (b * b));

    if(abs(b - h) < a && a < (b + h)){
        printf("\nA hipotenusa do triangulo de lado a = %f\ne lado b = %f\ne h = %f", a, b, h);
    } else if(abs(a - h) < b && b < (a + h)){
        printf("\nA hipotenusa do triangulo de lado a = %f\ne lado b = %f\ne h = %f", a, b, h);
    } else if(abs(a - b) < h && h < (a + b)){
        printf("\nA hipotenusa do triangulo de lado a = %f\ne lado b = %f\ne h = %f", a, b, h);
    } else {
        printf("\nEstes valores nao formam um triangulo.");
    }

    printf("\n\n");
//
    system("pause");
    return 0;
}

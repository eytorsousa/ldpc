#include <stdio.h>
#include <stdlib.h>

/*
14. Faça um programa que possa entrar com o valor de um produto e imprima o valor tendo
em vista que o desconto foi de 12%
*/

int main() {
    float v;

    printf("Digite o valor do produto para obter um desconto de 12 por cento!");
    printf("\nValor do produto: R$");
    scanf("%f", &v);

    v *= 0.88;

    printf("Parabens, o desconto de 12 por cento foi aplicado em seu produto e ele agora custa R$%f ", v);

    printf("\n\n");

    system("pause");
    return 0;
}

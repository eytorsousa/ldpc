#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
19. Receba o sal�rio-base de um funcion�rio, calcule e imprima o sal�rio a receber, sabendo-se
que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base. Al�m disso, paga 7% de
imposto sobre o sal�rio-base.
*/

int main () {
    float saldo, salario, grati, imposto;

    printf("Insira seu salario-base para calcular sua bonificacao e o imposto a pagar: ");
    printf("\n\nValor do salario-base: ");
    scanf("%f", &salario);

    grati = salario*0.05;
    imposto = salario*0.07;

    saldo = salario + grati - imposto;

    printf("\nDe acordo com seu salario base:\nSua bonificacao e de %f\nO imposto devido e de %f", grati, imposto);
    printf("\nSeu saldo e, portanto, %f", saldo);

    printf("\n\n");
//
    system("pause");
    return 0;
}

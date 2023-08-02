#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
19. Receba o salário-base de um funcionário, calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, paga 7% de
imposto sobre o salário-base.
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

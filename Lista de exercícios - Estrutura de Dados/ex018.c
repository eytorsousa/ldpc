#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
18. Fa�a um programa que leia o valor da hora de trabalho (em reais) e n�mero de horas
trabalhadas no m�s, e imprima o valor a ser pago ao funcion�rio, adicionando 10% sobre o
valor calculado.
*/

int main () {
    float vh, ht, st;

    printf("Insira os valores das horas trabalhadas no mes e do valor pago por hora para calcular seu salario com aumento de 10 por cento: ");
    printf("\n\nValor da hora trabalhada: ");
    scanf("%f", &vh);
    printf("Horas trabalhadas no total: ");
    scanf("%f", &ht);

    st = vh * ht;
    st *= 1.1;

    printf("\n\nSeu salario, de acordo com as informacoes inseridas anteriormente e de\nR$%f", st);


    printf("\n\n");
//
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
1. Fa�a um programa que leia um n�mero inteiro e o imprima, ent�o leia um n�mero real e
tamb�m o imprima.
*/

int main () {
    int n1;
    float n2;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n1);
    printf("O NUMERO INTEIRO INSERIDO FOI:  %d", n1);

    printf("\n\nInsira um numero real: ");
    scanf("%f", &n2);
    printf("O NUMERO REAL INSERIDO FOI:  %f", n2);

    printf("\n\n");

    system("pause");
    return 0;
}

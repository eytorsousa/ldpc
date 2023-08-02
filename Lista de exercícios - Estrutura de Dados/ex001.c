#include <stdio.h>
#include <stdlib.h>

/*
1. Faça um programa que leia um número inteiro e o imprima, então leia um número real e
também o imprima.
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

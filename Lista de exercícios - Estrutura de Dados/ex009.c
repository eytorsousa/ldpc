#include <stdio.h>
#include <stdlib.h>

/*
9. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
dobro.
*/

int main () {
    int n, t, d, soma;

    printf("Insira um valor inteiro para obter a soma do sucessor de seu triplo com o antecessor de seu dobro: ");
    scanf("%d", &n);

    t = n*3;
    d = n*2;
    soma = (t + 1)+(d - 1);

    printf("\nO valor digitado foi %d;\nO antecessor de seu triplo e: %d\nO sucessor de seu dobro e: %d\nE a soma dos dois e: %d", n, t - 1, d + 1, soma);

    printf("\n\n");

    system("pause");
    return 0;
}

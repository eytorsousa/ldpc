#include <stdio.h>
#include <stdlib.h>

/*
8. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.
*/

int main () {
    int n;

    printf("Insira um valor inteiro para obter seu antecessor e seu sucessor: ");
    scanf("%d", &n);

    printf("\nO valor digitado foi %d;\nAntecessor: %d\nSucessor: %d", n, n - 1, n + 1);

    printf("\n\n");

    system("pause");
    return 0;
}

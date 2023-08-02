#include <stdio.h>
#include <stdlib.h>

/*
2. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
*/

int main () {
    int n1, n2, n3, soma;

    printf("Insira tres valores inteiros a seguir: ");
    printf("\nValor 1: ");
    scanf("%d", &n1);
    printf("Valor 2: ");
    scanf("%d", &n2);
    printf("Valor 3: ");
    scanf("%d", &n3);

    soma = n1+n2+n3;

    printf("\nA soma dos valores e: %d", soma);

    printf("\n\n");

    system("pause");
    return 0;
}

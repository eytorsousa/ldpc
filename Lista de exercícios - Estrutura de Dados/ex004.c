#include <stdio.h>
#include <stdlib.h>

/*
4. Leia um número real e imprima a quinta parte deste número.
*/

int main () {
    float n1;

    printf("Insira um numero real para obter a quinta parte deste numero: ");
    scanf("%f", &n1);

    n1 /= 5;

    printf("\n A quinta parte do numero digitado e: %f", n1);

    printf("\n\n");

    system("pause");
    return 0;
}

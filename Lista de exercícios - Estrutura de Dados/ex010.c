#include <stdio.h>
#include <stdlib.h>

/*
10. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.
*/

int main () {
    float l;

    printf("Insira o valor do lado de um quadrado para obter sua area: ");
    scanf("%f", &l);

    printf("\nO lado do quadrado e %f e a area dele e %f", l, l*l);

    printf("\n\n");

    system("pause");
    return 0;
}

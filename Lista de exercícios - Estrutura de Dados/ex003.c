#include <stdio.h>
#include <stdlib.h>

/*
3. Efetue a leitura de um número real e imprima o resultado do quadrado desse número.
*/

int main () {
    float n1;

    printf("Insira um numero real para obter o quadrado deste numero: ");
    scanf("%f", &n1);

    n1 *= n1;

    printf("\n O quadrado do numero digitado e: %f", n1);

    printf("\n\n");

    system("pause");
    return 0;
}

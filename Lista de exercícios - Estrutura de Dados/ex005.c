#include <stdio.h>
#include <stdlib.h>

/*
5. Efetue a leitura de três valores e apresente como resultado a soma dos quadrados dos três
valores lidos.
*/

int main () {
    float n1, n2, n3, soma;

    printf("Insira tres valores reais a seguir para obter a soma dos quadrados destes valores: ");
    printf("\n\nValor 1: ");
    scanf("%f", &n1);
    printf("Valor 2: ");
    scanf("%f", &n2);
    printf("Valor 3: ");
    scanf("%f", &n3);

    n1 *= n1;
    n2 *= n2;
    n3 *= n3;
    soma = n1+n2+n3;

    printf("\n A soma dos quadrados dos valores digitados e: %f", soma);

    printf("\n\n");

    system("pause");
    return 0;
}

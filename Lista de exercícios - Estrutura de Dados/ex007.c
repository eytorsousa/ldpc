#include <stdio.h>
#include <stdlib.h>

/*
7. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
dólares.
*/

int main () {
    float vr, c, vd;

    printf("Insira um valor em real para obter o valor correspondente em dolares: ");
    printf("\n\nValor em real: ");
    scanf("%f", &vr);
    printf("\nQual a cotacao atual do dolar?: ");
    printf("\n1 Dolar = R$");
    scanf("%f", &c);

    vd = vr/c;

    printf("\n\n A partir da cotacao atual do dolar, R$%f equivalem a U$%f", vr, vd);

    printf("\n\n");

    system("pause");
    return 0;
}

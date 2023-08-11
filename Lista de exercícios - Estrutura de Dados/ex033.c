#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
33. Ler uma temperatura em graus Fahrenheit e apresenta-la convertida em graus Celsius. A
formula de conversao e ..., sendo c a temperatura em Celsius e f a
temperatura em Fahrenheit
*/

void recebeTemp();
void calcula();
void exibe();

float tc, tf;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos calcular a conversão de temperaturas!");

    recebeTemp();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeTemp(){
    printf("\n\nInsira a temperatura em graus Fahrenheit: ");
    scanf(" %f", &tf);
}

void calcula(){
   tc = 5 * (tf - 32) / 9;
}

void exibe(){
    printf("\n\nTEMPERATURA EM FAHRENHEIT: %.2fºF", tf);
    printf("\nTEMPERATURA EQUIVALENTE EM CELSIUS: %.2fºC", tc);
}

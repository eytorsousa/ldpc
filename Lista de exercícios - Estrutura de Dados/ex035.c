#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
35. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Kelvin. A
fórmula de conversão é: ..., sendo C a temperatura em Celsius e K
atemperatura em Kelvin.
*/

void recebeTemp();
void calcula();
void exibe();

float tc, tk;

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
    printf("\n\nInsira a temperatura em graus Celsius: ");
    scanf(" %f", &tc);
}

void calcula(){
   tk = tc + 273.15;
}

void exibe(){
    printf("\n\nTEMPERATURA EM CELSIUS: %.2fºC", tc);
    printf("\nTEMPERATURA EQUIVALENTE EM KELVIN: %.2fºK", tk);
}

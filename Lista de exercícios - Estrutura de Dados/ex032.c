#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
32. Ler uma temperatura em graus Celsius e apresenta-la convertida em graus Fahrenheit. A
formula de conversao e: f = c x (9,0 / 5,0) + 32,0, sendo f a temperatura em Fahrenheit e c a
temperatura em Celsius.
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
    printf("\n\nInsira a temperatura em graus Celsius: ");
    scanf(" %f", &tc);
}

void calcula(){
   tf = (tc * 1.8) + 32;
}

void exibe(){
    printf("\n\nTEMPERATURA EM CELSIUS: %.2fºC", tc);
    printf("\nTEMPERATURA EQUIVALENTE EM FAHRENHEIT: %.2fºF", tf);
}

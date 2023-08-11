#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
34. Ler uma temperatura em graus Kelvin e apresent�-la convertida em graus Celsius. A
f�rmula de convers�o �: ..., sendo c a temperatura em celsius e k a
temperatura em kelvin.
*/

void recebeTemp();
void calcula();
void exibe();

float tc, tk;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos calcular a convers�o de temperaturas!");

    recebeTemp();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeTemp(){
    printf("\n\nInsira a temperatura em graus Kelvin: ");
    scanf(" %f", &tk);
}

void calcula(){
   tc = tk - 273.15;
}

void exibe(){
    printf("\n\nTEMPERATURA EM KELVIN: %.2f�K", tk);
    printf("\nTEMPERATURA EQUIVALENTE EM CELSIUS: %.2f�C", tc);
}

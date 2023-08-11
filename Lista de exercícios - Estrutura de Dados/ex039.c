#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
39. ler distancia em quilometros e apresentar em milhas
*/

void recebeDistancia();
void calcula();
void exibe();

float dkm, dms;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos calcular a conversão de unidades de medida!");

    recebeDistancia();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeDistancia(){
    printf("\n\nInsira a distância em quilômetros: ");
    scanf(" %f", &dkm);
}

void calcula(){
   dms = dkm / 1.61;
}

void exibe(){
    printf("\n\nDISTÂNCIA EM QUILÔMETROS: %.2f kms", dkm);
    printf("\nDISTÂNCIA EQUIVALENTE EM MILHAS: %.2f milhas", dms);
}

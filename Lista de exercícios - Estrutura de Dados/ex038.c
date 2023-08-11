#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
38. ler distancia em milhas e mostrar em quilometros
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
    printf("\n\nInsira a distância em milhas: ");
    scanf(" %f", &dms);
}

void calcula(){
   dkm = dms * 1.61;
}

void exibe(){
    printf("\n\nDISTÂNCIA EM MILHAS: %.2f milhas", dms);
    printf("\nDISTÂNCIA EQUIVALENTE EM QUILÔMETROS: %.2f kms", dkm);
}

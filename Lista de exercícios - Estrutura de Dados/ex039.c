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

    printf("\nVamos calcular a convers�o de unidades de medida!");

    recebeDistancia();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeDistancia(){
    printf("\n\nInsira a dist�ncia em quil�metros: ");
    scanf(" %f", &dkm);
}

void calcula(){
   dms = dkm / 1.61;
}

void exibe(){
    printf("\n\nDIST�NCIA EM QUIL�METROS: %.2f kms", dkm);
    printf("\nDIST�NCIA EQUIVALENTE EM MILHAS: %.2f milhas", dms);
}

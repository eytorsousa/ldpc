#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
41. ler um angulo em radianos e exibir em graus
*/

void recebeAngulo();
void calcula();
void exibe();

float graus, radianos, pi = 3.141592;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos calcular a convers�o de unidades de medida!");

    recebeAngulo();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeAngulo(){
    printf("\n\nInsira o �ngulo em radianos: ");
    scanf(" %f", &radianos);
}

void calcula(){
   graus = radianos * (180 / pi);
}

void exibe(){
    printf("\n\n�NGULO EM RADIANOS: %.2f radianos", radianos);
    printf("\n�NGULO EQUIVALENTE EM GRAUS: %.2f�", graus);
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
40. ler um angulo em graus e exibir em radianos
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
    printf("\n\nInsira o �ngulo em graus: ");
    scanf(" %f", &graus);
}

void calcula(){
   radianos = graus * (pi / 180);
}

void exibe(){
    printf("\n\n�NGULO EM GRAUS: %.2f�", graus);
    printf("\n�NGULO EQUIVALENTE EM RADIANOS: %.2f radianos", radianos);
}

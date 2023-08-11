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

    printf("\nVamos calcular a conversão de unidades de medida!");

    recebeAngulo();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeAngulo(){
    printf("\n\nInsira o ângulo em radianos: ");
    scanf(" %f", &radianos);
}

void calcula(){
   graus = radianos * (180 / pi);
}

void exibe(){
    printf("\n\nÂNGULO EM RADIANOS: %.2f radianos", radianos);
    printf("\nÂNGULO EQUIVALENTE EM GRAUS: %.2fº", graus);
}

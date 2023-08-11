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

    printf("\nVamos calcular a conversão de unidades de medida!");

    recebeAngulo();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeAngulo(){
    printf("\n\nInsira o ângulo em graus: ");
    scanf(" %f", &graus);
}

void calcula(){
   radianos = graus * (pi / 180);
}

void exibe(){
    printf("\n\nÂNGULO EM GRAUS: %.2fº", graus);
    printf("\nÂNGULO EQUIVALENTE EM RADIANOS: %.2f radianos", radianos);
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
53. ler uma area em hectares e exibir em metros
*/

void recebeArea();
void calcula();
void exibe();

float hc, m;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos calcular a convers�o de unidades de medida!");

    recebeArea();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeArea(){
    printf("\n\nInsira um valor de �rea em hectares: ");
    scanf(" %f", &hc);
}

void calcula(){
   m = hc * 1000;
}

void exibe(){
    printf("\nVALOR DA �REA EM HECTARES: %.2f hectares", hc);
    printf("\n\nVALOR EQUIVALENTE EM METROS QUADRADOS: %.2f m�", m);
}

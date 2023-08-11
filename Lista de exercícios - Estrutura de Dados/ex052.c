#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
52. ler uma area em metros quadrados e exibir em hectares
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
    printf("\n\nInsira um valor de �rea em metros quadrados: ");
    scanf(" %f", &m);
}

void calcula(){
   hc = m * 0.0001;
}

void exibe(){
    printf("\n\nVALOR DA �REA EM METROS QUADRADOS: %.2f m�", m);
    printf("\nVALOR EQUIVALENTE EM HECTARES: %.2f hectares", hc);
}

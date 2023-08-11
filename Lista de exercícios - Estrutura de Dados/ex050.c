#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
50. ler uma area em metros quadrados e exibir em acres
*/

void recebeArea();
void calcula();
void exibe();

float ac, m;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos calcular a conversão de unidades de medida!");

    recebeArea();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeArea(){
    printf("\n\nInsira um valor de área em metros quadrados (m²): ");
    scanf(" %f", &m);
}

void calcula(){
   ac = m * 0.000247;
}

void exibe(){
    printf("\n\nVALOR DA ÁREA EM METROS QUADRADOS: %.2f m²", m);
    printf("\nVALOR EQUIVALENTE EM ACRES: %.2f acres", ac);
}

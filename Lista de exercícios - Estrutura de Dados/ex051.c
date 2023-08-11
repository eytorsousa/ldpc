#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
51. ler uma area em acres e exibir em metros quadrados
*/

void recebeArea();
void calcula();
void exibe();

float ac, m;

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
    printf("\n\nInsira um valor de �rea em acres: ");
    scanf(" %f", &ac);
}

void calcula(){
   m = ac * 4048.58;
}

void exibe(){
    printf("\n\nVALOR DA �REA EM ACRES: %.2f acres", ac);
    printf("\nVALOR EQUIVALENTE EM METROS QUADRADOS: %.2f m�", m);
}

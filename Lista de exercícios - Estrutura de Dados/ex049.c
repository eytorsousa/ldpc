#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
49. ler um comprimento em metros e exibir em jardas
*/

void recebeComprimento();
void calcula();
void exibe();

float jd, m;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos calcular a conversão de unidades de medida!");

    recebeComprimento();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeComprimento(){
    printf("\n\nInsira um comprimento em metros: ");
    scanf(" %f", &m);
}

void calcula(){
   jd = m / 0.91;
}

void exibe(){
    printf("\n\nVALOR DE COMPRIMENTO EM METROS: %.2f m", m);
    printf("\nVALOR EQUIVALENTE EM JARDAS: %.2f jardas", jd);
}

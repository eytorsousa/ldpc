#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
48. ler um comprimento em jardas e exibir em metros
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
    printf("\n\nInsira um comprimento em jardas: ");
    scanf(" %f", &jd);
}

void calcula(){
   m = jd * 0.91;
}

void exibe(){
    printf("\n\nVALOR DE COMPRIMENTO EM JARDAS: %.2f jardas", jd);
    printf("\nVALOR EQUIVALENTE EM METROS: %.2f m", m);
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
44. ler um volume em metros cubicos e apresentar em litros
*/

void recebeVolume();
void calcula();
void exibe();

float metros, litros;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos calcular a conversão de unidades de medida!");

    recebeVolume();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeVolume(){
    printf("\n\nInsira um volume em metros cúbicos (m³): ");
    scanf(" %f", &metros);
}

void calcula(){
   litros = metros * 1000;
}

void exibe(){
    printf("\n\nVOLUME EM METROS CÚBICOS: %.2f m³", metros);
    printf("\nVOLUME EQUIVALENTE EM LITROS: %.2f litros", litros);
}

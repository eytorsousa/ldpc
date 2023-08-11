#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
45. ler um volume em litros e exibir em metros cubicos
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
    printf("\n\nInsira um volume em litros: ");
    scanf(" %f", &litros);
}

void calcula(){
   metros = litros / 1000;
}

void exibe(){
    printf("\n\nVOLUME EM LITROS: %.2fL", litros);
    printf("\nVOLUME EQUIVALENTE EM METROS CÚBICOS: %.2f m³", metros);
}

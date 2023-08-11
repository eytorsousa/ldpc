#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
43. ler um comprimento em centimetros e exibir em polegadas
*/

void recebeComprimento();
void calcula();
void exibe();

float polegadas, centimetros;

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
    printf("\n\nInsira o comprimento em centímetros: ");
    scanf(" %f", &centimetros);
}

void calcula(){
   polegadas = centimetros / 2.54;
}

void exibe(){
    printf("\n\nCOMPRIMENTO EM CENTÍMETROS: %.2f centímetros", centimetros);
    printf("\nCOMPRIMENTO EQUIVALENTE EM POLEGADAS: %.2f polegadas", polegadas);
}

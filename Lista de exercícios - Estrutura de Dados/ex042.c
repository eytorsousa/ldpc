#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
42. ler um comprimento em polegadas e exibir em centimetros
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
    printf("\n\nInsira o comprimento em polegadas: ");
    scanf(" %f", &polegadas);
}

void calcula(){
   centimetros = polegadas * 2.54;
}

void exibe(){
    printf("\n\nCOMPRIMENTO EM POLEGADAS: %.2f polegadas", polegadas);
    printf("\nCOMPRIMENTO EQUIVALENTE EM CENTÍMETROS: %.2f centímetros", centimetros);
}

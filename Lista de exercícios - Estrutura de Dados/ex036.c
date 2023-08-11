#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
36. Ler uma velocidade em km/h (quilometros por hora) e apresenta-la convertida em m/s
(metros por segundo). A f�rmula de convers�o �: m = k/3,6, sendo k a velocidade em km/h
e m em m/s.
*/

void recebeVel();
void calcula();
void exibe();

float vkm, vms;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos calcular a convers�o de unidades de medida!");

    recebeVel();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeVel(){
    printf("\n\nInsira a velocidade em km/h: ");
    scanf(" %f", &vkm);
}

void calcula(){
   vms = vkm/3.6;
}

void exibe(){
    printf("\n\nVELOCIDADE EM KM/H: %.2f km/h", vkm);
    printf("\nVELOCIDADE EQUIVALENTE EM METROS POR SEGUNDO: %.2f m/s", vms);
}

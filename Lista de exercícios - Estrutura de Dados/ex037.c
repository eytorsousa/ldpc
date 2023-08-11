#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
37. ler velocidade em m/s e converter para km/h
*/

void recebeVel();
void calcula();
void exibe();

float vkm, vms;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos calcular a conversão de unidades de medida!");

    recebeVel();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeVel(){
    printf("\n\nInsira a velocidade em m/s: ");
    scanf(" %f", &vms);
}

void calcula(){
   vkm = vms * 3.6;
}

void exibe(){
    printf("\n\nVELOCIDADE EM METROS POR SEGUNDO: %.2f m/s", vms);
    printf("\nVELOCIDADE EQUIVALENTE EM KM/H: %.2f km/h", vkm);
}

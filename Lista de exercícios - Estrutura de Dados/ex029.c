#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
29. Escreva um programa que leia as coordenadas 𝑥 e 𝑦 de pontos no plano cartesiano e
calcule sua distância da origem (0, 0)
*/

void pontosxy();
void calucladistancia();

int matricula;
float x, y, distancia;

int main () {
    printf("\nVamos verificar a distancia dos pontos x e y da origem (0, 0) num plano cartesiano!");

    printf("\n-------------------------------------------------------------\n");

    pontosxy();
    calucladistancia();

    printf("\n\n");
    system("pause");
    return 0;
}

void pontosxy(){
    printf("\nInsira os valores/posicoes dos pontos x e y:");
    printf("\nInsira o valor/posicao do ponto x: ");
    scanf(" %f", &x);
    printf("\nInsira o valor/posicao do ponto y: ");
    scanf(" %f", &y);
}
void calucladistancia(){
    x = abs(x);
    y = abs(y);

    distancia = sqrt((x * x) + (y * y));

    printf("\n\nA distancia dos pontos x e y da origem e %.2f !", distancia);
}

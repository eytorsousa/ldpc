#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
21. Receba a altura do degrau de uma escada e a altura que o usu�rio deseja alcan�ar subindo
a escada. Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo,
sem se preocupar com a altura do usu�rio.

*/

void recebedegrau();
void recebealtura();
void calcula();

float alturadegrau;
float alturadesejada;
float qtddegraus;

int main () {
    printf("\nVamos calcular quantos degraus voce deve subir para atingir seu objetivo");
    recebedegrau();
    recebealtura();
    calcula();

    printf("\n\nVoce precisara subir aproximadamente %f degraus para alcancar seu objetivo final.", qtddegraus);

    printf("\n\n");
    system("pause");
    return 0;
}

void recebedegrau(){
    printf("\nInsira a altura dos degraus da escada: ");
    scanf("%f", &alturadegrau);
    printf("\nOk! A altura do degrau e: %f", alturadegrau);
}

void recebealtura(){
    printf("\n\nInsira a altura final que deseja alcancar: ");
    scanf("%f", &alturadesejada);
    printf("\nOk! A altura final desejada: %f", alturadesejada);
}

void calcula(){
    qtddegraus = alturadesejada / alturadegrau;
}

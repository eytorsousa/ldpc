#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
27. Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir
de sua idade e do ano atual.
*/

void recebeidade();
void recebeanoatual();

void calculaano();

int idade, anoatual, ano;

int main () {
    printf("\nVamos calcular o seu ano de nascimento!");

    printf("\n-------------------------------------------------------------\n");

    recebeidade();
    recebeanoatual();

    calculaano();

    printf("Voce nasceu no ano %d !", ano);


    printf("\n\n");
    system("pause");
    return 0;
}

void recebeidade(){
    printf("\nInsira a sua idade em anos: ");
    scanf(" %d", &idade);
}

void recebeanoatual(){
    printf("\nAgora, insira o ano atual: ");
    scanf(" %d", &anoatual);
}

void calculaano(){
    ano = anoatual - idade;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
30. Tr�s amigos jogaram na loteria. Caso eles ganhem, o pr�mio deve ser repartido
proporcionalmente ao valor que cada deu para a realiza��o da aposta. Fa�a um programa que
l� quanto cada apostador investiu, l� o valor do pr�mio, e escreve quanto cada um ganharia.
*/

void recebeApostas();
void calcula();
void exibe();

float amigo1, amigo2, amigo3, parte1, parte2, parte3, total;

int main(){
    setlocale (LC_ALL, "Portuguese");

    printf("Vamos verificar quanto cada amigo deve receber de acordo com o investimento!");

    recebeApostas();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeApostas(){
    printf("\n\nQuanto o AMIGO 1 investiu? ");
    scanf(" %f", &amigo1);
    printf("\nQuanto o AMIGO 2 investiu? ");
    scanf(" %f", &amigo2);
    printf("\nQuanto o AMIGO 3 investiu? ");
    scanf(" %f", &amigo3);
}

void calcula(){
    total = amigo1 + amigo2 + amigo3;

    parte1 = ((amigo1)/total) * 100;
    parte2 = ((amigo2)/total) * 100;
    parte3 = ((amigo3)/total) * 100;
}

void exibe(){
    printf("\nDe acordo com os investimentos:");
    printf("\nParte do AMIGO 1: %.2f%% do pr�mio", parte1);
    printf("\nParte do AMIGO 2: %.2f%% do pr�mio", parte2);
    printf("\nParte do AMIGO 3: %.2f%% do pr�mio", parte3);
}

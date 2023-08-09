#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
25. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/

void convertehoras();
void converteminutos();

int horas, minutos, segundos;
char x;

int main () {
    printf("\nVamos converter um valor inteiro em segundos para horas, minutos e segundos!");

    printf("\nDigite o valor inteiro em segundos: ");
    scanf(" %d", &segundos);

    printf("\n-------------------------------------------------------------\n");

    converteminutos();
    convertehoras();

    printf("\nO valor inteiro digitado e igual a %d horas, %d minutos e %d segundos", horas, minutos, segundos);

    printf("\n\n");
    system("pause");
    return 0;
}

void converteminutos(){
    while(segundos >= 60){
        segundos -= 60;
        minutos += 1;
    }
}

void convertehoras(){
    while(minutos >= 60){
        minutos -= 60;
        horas += 1;
    }
}

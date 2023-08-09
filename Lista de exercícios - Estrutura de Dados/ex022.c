#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
22. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII.
*/

void recebeletra();
void mudaletra();
void verifica();

char x;

int main () {
    printf("\nVamos converter seu caractere em maiusculo para minusculo!");

    recebeletra();
    verifica();

    printf("\n-------------------------------------------------------------\n");

    mudaletra();

    printf("\n\n");
    system("pause");
    return 0;
}

void verifica(){
    while(x <= 64 || x >= 91){
        printf("\nCaractere invalido, digite novamente!");
        printf("\nDigite uma letra maiuscula: ");
        scanf(" %c", &x);
    }
}

void recebeletra(){
    printf("\nDigite o caractere maiusculo: ");
    scanf(" %c", &x);
}

void mudaletra(){
    x += 32;
    printf("\nA letra digitada transformada em minusculo e:\n");
    printf(" %c", x);
}

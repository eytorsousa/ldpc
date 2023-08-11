#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
47. ler um valor de massa em libras e exibir em quilogramas
*/

void recebeMassa();
void calcula();
void exibe();

float kg, lb;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos calcular a conversão de unidades de medida!");

    recebeMassa();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeMassa(){
    printf("\n\nInsira um valor de massa em libras: ");
    scanf(" %f", &lb);
}

void calcula(){
   kg = lb * 0.45;
}

void exibe(){
    printf("\n\nVALOR DE MASSA EM LIBRAS: %.2f libras", lb);
    printf("\nVALOR EQUIVALENTE EM QUILOGRAMAS: %.2f kg", kg);
}

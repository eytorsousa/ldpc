#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
47. ler um valor de massa em kg e exibir em libras
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
    printf("\n\nInsira um valor de massa em quilogramas: ");
    scanf(" %f", &kg);
}

void calcula(){
   lb = kg / 0.45;
}

void exibe(){
    printf("\n\nVALOR DE MASSA EM QUILOGRAMAS: %.2f kg", kg);
    printf("\nVALOR EQUIVALENTE EM LIBRAS: %.2f libras", lb);
}

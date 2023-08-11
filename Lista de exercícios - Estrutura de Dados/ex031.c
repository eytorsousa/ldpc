#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
31. Faca um programa para ler as dimensoes de um terreno (comprimento c e largura l), bem
como o preco do metro do arame p, entao fornecer como saída o custo para cercar este
mesmo terreno.
*/

void recebeInfo();
void calcula();
void exibe();

float c, l, p, total;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("\nVamos verificar as dimensões do seu terreno e verificar o preço para cerca-lo");

    recebeInfo();
    calcula();
    exibe();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebeInfo(){
    printf("\n\nInsira o comprimento do terreno (em metros): ");
    scanf(" %f", &c);

    printf("\nInsira a largura do terreno (em metros): ");
    scanf(" %f", &l);

    printf("\nAgora, insira o preço do metro do arame que deseja utilizar: R$");
    scanf(" %f", &p);
}

void calcula(){
   float perimetro;

   perimetro = (l * 2) + (c * 2);
   total = p * perimetro;
}

void exibe(){
    printf("\n\n\tDE ACORDO COM AS INFORMAÇÕES INSERIDAS:");
    printf("\nTERRENO:");
    printf("\nCOMPRIMENTO: %.2f", c);
    printf("\nLARGURA: %.2f", l);
    printf("\nCUSTO TOTAL PARA CERCAR: R$%.2f", total);
}

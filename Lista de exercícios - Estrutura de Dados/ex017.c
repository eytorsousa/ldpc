#include <stdio.h>
#include <stdlib.h>

/*
17. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o
n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga,
sabendo-se que s�o descontados 8% para imposto de renda.
*/

int main() {
    int d;
    float salario;

    printf("Insira a quantidade de dias trabalhados para calcular o salario a receber (R$30 o dia):");
    printf("\nDias trabalhados: ");
    scanf("%d", &d);

    salario = (d * 30) * 0.92;

    printf("\nSalario total ja com descontos: %f", salario);

    printf("\n\n");

    system("pause");
    return 0;
}

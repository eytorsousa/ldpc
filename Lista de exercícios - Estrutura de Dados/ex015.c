#include <stdio.h>
#include <stdlib.h>

/*
15. Receba o salário de um funcionário, calcule e imprima o valor do novo salário, sabendo que
ele recebeu um aumento de 25%.
*/

int main() {
    float s;

    printf("Digite o valor do seu salario atual para obter um aumento de 25 por cento");
    printf("\nValor do salario atual: R$");
    scanf("%f", &s);

    s *= 1.25;

    printf("Parabens, o seu salario agora e R$%f ", s);

    printf("\n\n");

    system("pause");
    return 0;
}

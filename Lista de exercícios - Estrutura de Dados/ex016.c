#include <stdio.h>
#include <stdlib.h>

/*
16. A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de um concurso.
Sendo que da quantia total:
 O primeiro ganhador receber� 46%;
 O segundo receber� 32%;
 O terceiro receber� o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores
*/

int main() {
    float s;

    s = 780000;

    printf("O premio de 780.000,00 vai ser dividido em tres ganhadores, veja a seguir o montante de cada ganhador:");
    printf("\n\nPrimeiro Ganhador: R$%f", s * 0.46);
    printf("\nSegundo Ganhador: R$%f", s * 0.32);
    printf("\nTerceiro Ganhador: R$%f", s * 0.22);

    printf("\n\nParabens aos vencedores!");

    printf("\n\n");

    system("pause");
    return 0;
}

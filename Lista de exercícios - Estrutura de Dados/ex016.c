#include <stdio.h>
#include <stdlib.h>

/*
16. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso.
Sendo que da quantia total:
 O primeiro ganhador receberá 46%;
 O segundo receberá 32%;
 O terceiro receberá o restante;
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

#include <stdio.h>
#include <stdlib.h>

/*
6. Leia quatro notas, calcule a média aritmética e imprima o resultado.
*/

int main () {
    float n1, n2, n3, n4, media;

    printf("Insira quatro notas para obter a media aritmetica do aluno: ");
    printf("\n\n Nota 1: ");
    scanf("%f", &n1);
    printf("\n\n Nota 2: ");
    scanf("%f", &n2);
    printf("\n\n Nota 3: ");
    scanf("%f", &n3);
    printf("\n\n Nota 4: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    printf("\n A media aritmetica das notas inseridas e: %f", media);

    printf("\n\n");

    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
28. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2.
Antes de o usuário entrar com as notas do
aluno ele deve entrar com o número de matricula do aluno. Ao final, mostrar a matricula do
aluno juntamente com a sua média e indicar se o aluno foi aprovado ou reprovado. A nota
para aprovação deve ser igual ou superior a 60 pontos.
*/

void recebematricula();
void recebenotas();
void calculapesos();
void verificaaprovacao();

int matricula;
float n1, n2, n3, notafinal;

int main () {
    printf("\nVamos verificar se o aluno foi aprovado!");

    printf("\n-------------------------------------------------------------\n");

    recebematricula();
    recebenotas();
    calculapesos();
    verificaaprovacao();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebematricula(){
    printf("\nInsira o numero de matricula do aluno: ");
    scanf(" %d", &matricula);
}
void recebenotas(){
    printf("\nAgora insira as notas das provas do aluno: ");
    printf("\n\tNota da 1a prova: ");
    scanf(" %f", &n1);
    printf("\n\tNota da 2a prova: ");
    scanf(" %f", &n2);
    printf("\n\tNota da 3a prova: ");
    scanf(" %f", &n3);
}
void calculapesos(){
    notafinal = (n1 + n2 + (2 * n3)) / 4;
}

void verificaaprovacao(){
    if (notafinal >= 6){
        printf("\n\nALUNO APROVADO!");
        printf("\nMATRICULA: %d", matricula);
        printf("\nMEDIA FINAL: %f", notafinal);
    } else {
        printf("\n\nALUNO REPROVADO!");
        printf("\nMATRICULA: %d", matricula);
        printf("\nMEDIA FINAL: %.2f", notafinal);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
26. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
minuto e segundo) do termino da mesma.
*/

void recebehorario();
void recebeduracao();

void converteminutos();
void convertehoras();

void somahorario();
void horariofinal();

int horas, minutos, segundos;
int hstart, mstart, sstart;

int main () {
    printf("\nVamos calcular o tempo final de uma experiencia biologica!");

    printf("\n-------------------------------------------------------------\n");

    recebehorario();
    recebeduracao();

    converteminutos();
    convertehoras();

    somahorario();

    converteminutos();
    convertehoras();

    printf("O horario final e:");

    horariofinal();

    printf("\n\n");
    system("pause");
    return 0;
}

void recebehorario(){
    printf("\nInsira o horario exato (horas, minutos, segundos) de inicio da experiencia:");
    printf("\nDigite a hora do inicio da experiencia: ");
    scanf(" %d", &hstart);
    printf("\nDigite os minutos do horario de inicio da experiencia: ");
    scanf(" %d", &mstart);
    printf("\nDigite os segundos do horario de inicio da experiencia: ");
    scanf(" %d", &sstart);
}

void recebeduracao(){
    printf("\nAgora, insira o tempo exato de duracao da experiencia em segundos:");
    printf("\nDuracao em segundos: ");
    scanf(" %d", &segundos);
}

void converteminutos(){
    while(segundos >= 60){
        segundos -= 60;
        minutos += 1;
    }
}

void convertehoras(){
    while(minutos >= 60){
        minutos -= 60;
        horas += 1;
    }
}

void somahorario(){
    horas += hstart;
    minutos += mstart;
    segundos += sstart;
}

void horariofinal(){
    printf("\n\t%d horas", horas);
    printf("\n\t%d minutos", minutos);
    printf("\n\t%d segundos", segundos);
}

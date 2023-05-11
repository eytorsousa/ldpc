#include <stdio.h>
#include <math.h>
    //Definindo um intervalo para a variável.
int main(){
    int x = 0;
    do{
    printf("\033[2J");
    printf("\033[1;1H");
    printf("\tDefinindo um intervalo para a variável.");
        if(x < 0 || x > 80){
            printf("\nValor inválido! Tente novamente.");
        }
    printf("\nInsira um número inteiro entre 0 e 80.");
    printf("\nX = ");
    scanf("%d", &x);
    }while(x < 0 || x > 80);
    
    if(0 <= x && x <= 10){
        printf("Intervalo do número inserido: [0, 10]");
    }
    
    else
        if(10 < x && x <= 20){
        printf("Intervalo do número inserido: [0, 20]");
        }
    
    else
        if(20 < x && x <= 30){
        printf("Intervalo do número inserido: [0, 30]");
        }
    
    else
        if(30 < x && x <= 40){
        printf("Intervalo do número inserido: [0, 40]");
        }
    
    else
        if(40 < x && x <= 50){
        printf("Intervalo do número inserido: [0, 50]");
        }
    
    else
        if(50 < x && x <= 60){
        printf("Intervalo do número inserido: [0, 60]");
        }
    
    else
        if(60 < x && x <= 70){
        printf("Intervalo do número inserido: [0, 70]");
        }
    
    else
        if(70 < x && x <= 80){
        printf("Intervalo do número inserido: [0, 80]");
        }
    return 0;
}

#include <stdio.h>

int main(){
    
    float n = 0;
    
    printf("\tOlá, vamos verificar se seu número é positivo, negativo ou zero!");
    
    printf("\nInsira seu numéro: ");
    scanf("%f", &n);
    
    if (n > 0){
            printf("Seu número é positivo.");
        }
    else
        if (n < 0){
            printf("Seu número é negativo.");
        }
    else
        printf("Seu número é zero!");
    
    return 0;
}

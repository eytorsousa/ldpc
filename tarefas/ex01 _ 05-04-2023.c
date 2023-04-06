#include <stdio.h>

int main(){
    
    int n = 0;
    
    printf("\tOlá, vamos verificar se seu número é positivo, negativo ou zero!");
    
    printf("\nInsira seu numéro: ");
    scanf("%d", &n);
    
    if (n == 0){
        
        printf("Seu número é 0.");
    }
    
    if (n > 0){
        
        printf("Seu número é positivo.");
    }
    
    if (n < 0){
        
        printf("Seu número é negativo.");
    }
    
    return 0;
    
}
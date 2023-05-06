#include <stdio.h>
// Exercício 15 06-05-2023
// Utilizando for - estrutura de repetição.
int main(){
    int k;
    int c;
    printf("Insira um número entre 1 e 50: ");
    scanf("%d", &k);
    
    if(k < 1 || k > 50){
        while(k < 1 || k > 50){
            printf("Insira um valor dentro dos limites!\nInsira um novo valor: ");
            scanf("%d", &k);
        }
        
        if(1 <= k <= 50){
            printf("Exibindo valores pares de 1 a %d:\n", k);
            for(c = 1; c <= k; c++){
            printf("%d ", c);
            }
        }
        
    }
    
    else
        printf("Exibindo valores pares de 1 a %d:\n", k);
        for(c = 1; c <= k; c++){
            printf("%d ", c);
    }
    return 0;
}
#include <stdio.h>
// Exercício 13 e 14 06-05-2023
// Utilizando for - estrutura de repetição.
int main(){
    int k;
    printf("Exibindo valores pares de 0 a 20:\n");
    for(k = 0; k <= 20; k += 2){
        printf("%d ", k);
    }
    
    printf("\nExibindo os valores impares de 0 a 30:\n");
    for(k = -1; k <=30; k += 2){
        if(k > 0){
        printf("%d ", k);
        }
    }
    return 0;
}
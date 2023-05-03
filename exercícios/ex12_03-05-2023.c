#include <stdio.h>

int main(){
    //Aula 03-05-2023
    //Exercício 12_03-05-2023
    int num = 1;
    int n = 0;
    int s = 0;
    
    printf("Insira um número entre 1 e 100: ");
    scanf("%d", &num);
    
    if(num < 1 || num > 100){
        while(num < 1 || num > 100){
            printf("Número fora do intervalo!\nInsira um número entre 1 e 100: ");
            scanf("%d", &num);
        }
        
        if(1 <= num <= 100){
           while (n <= num){
                s = s + n;
                n += 1;
            } 
        }
    }
    
    else
        while (n <= num){
            s = s + n;
            n += 1;
        }
    
    printf("Exibindo o somatório: ");
    printf("%d", s);
    
    return 0;
}

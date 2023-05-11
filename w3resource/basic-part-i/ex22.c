#include <stdio.h>
#include <math.h>
    //Somando apenas os números impares.
int main(){
    int a, b, c, d, e;
    printf("\tSomando apenas os números impares.");
    
    printf("\nInsira 5 números a seguir: ");
    printf("\nPrimeiro número: ");
    scanf("%d", &a);
    
    if(a % 2 == 0){
        a = 0;
    }
    
    printf("Segundo número: ");
    scanf("%d", &b);
    
    if(b % 2 == 0){
        b = 0;
    }
    
    printf("Terceiro número: ");
    scanf("%d", &c);
    
    if(c % 2 == 0){
        c = 0;
    }
    
    printf("Quarto número: ");
    scanf("%d", &d);
    
    if(d % 2 == 0){
        d = 0;
    }
    
    printf("Quinto número: ");
    scanf("%d", &e);
    
    if(e % 2 == 0){
        e = 0;
    }
    
    printf("\nA soma de todos os números impares é: %d.", (a + b + c + d + e));
    
    return 0;
}

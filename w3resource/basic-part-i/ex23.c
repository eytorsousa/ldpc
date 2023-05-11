#include <stdio.h>
#include <math.h>
#include <stdlib.h>

    //Analisando um triângulo.
int main(){
    int a, b, c;
    printf("\tAnalisando um triângulo.");
    
    printf("\nInsira três valores para verificarmos se é possível formar um triângulo.");
    printf("\nValor 1: ");
    scanf("%d", &a);
    
    printf("Valor 2: ");
    scanf("%d", &b);
    
    printf("Valor 3: ");
    scanf("%d", &c);
    
    if(a > abs(b - c) && a < (b + c)){
        printf("\nEstes valores formam um triângulo!");
        printf("\nPerimetro: %d", (a + b + c));
    }
    
    else
        if(b > abs(a - c) && b < (a + c)){
        printf("\nEstes valores formam um triângulo!");
        printf("\nPerimetro: %d", (a + b + c));
    }
    
    else 
        if(c > abs(a - b) && c < (a + b)){
        printf("\nEstes valores formam um triângulo!");
        printf("\nPerimetro: %d", (a + b + c));
    }
    
    else
        printf("\nEstes valores não formam um triângulo.");
    return 0;
}

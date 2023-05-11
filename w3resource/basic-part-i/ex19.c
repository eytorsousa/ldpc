#include <stdio.h>
#include <math.h>
int main(){
    //Avaliando valores inseridos pelo usuário.
    int p, q, r, s;
    
    printf("\tAvaliando valores inseridos pelo usuário.");
    
    printf("\nInsira um valor par para p.");
    printf("\nInsira valores positivos para q, r e s.");
    printf("\np: ");
    scanf("%d", &p);
    
    if(p % 2 != 0){
        while(p % 2 != 0){
            printf("Valor inválido! Tente novamente.\np: ");
            scanf("%d", &p);
        }
    }
    
    printf("q: ");
    scanf("%d", &q);
    
    if(q < 0){
        while(q < 0){
            printf("Valor inválido! Tente novamente.\nq: ");
            scanf("%d", &q);
        }
    }
    
    printf("r: ");
    scanf("%d", &r);
    
    if(r < 0){
        while(r < 0){
            printf("Valor inválido! Tente novamente.\nr: ");
            scanf("%d", &r);
        }
    }
    
    printf("s: ");
    scanf("%d", &s);
    
    if(r < 0){
        while(r < 0){
            printf("Valor inválido! Tente novamente.\nr: ");
            scanf("%d", &r);
        }
    }
    
    if((q > r) && (s > p) && ((r+s) > (q+p))){
        printf("\nValores corretos.");
    }
    
    else
        printf("\nValores incorretos");
    return 0;
}
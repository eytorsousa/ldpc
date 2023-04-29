#include <stdio.h>

int main(){
    //Aula 29-04-2023
    //Exercício 09_29-04-2023
    int cont = 0;
    int v = 1;
    int contv = 1;
    
    printf("\tExibindo números pares de 0 a 20:\n");
    while (cont <= 20){
        printf("%d ", cont);
        cont += 2;
    }
    
    /* ------------------------------------------------------- */
    //Exercício 10_29-04-2023
    printf("\n\n\tExibindo números conforme o valor digitado (1-100):\n");
    
    printf("Digite seu número: ");
    scanf("%d", &v);
    
    if (v > 100 || v < 1){
        while (v > 100 || v < 1){
            printf("Digite um número entre 1 e 100!");
            printf("\nDigite seu número: ");
            scanf("%d", &v);
        }
        
        if (1 <= v <= 100){
            while (contv <= v){
                printf("%d ", contv);
                contv += 1;
            }
            
        }
    }
    
    else 
        while (contv <= v){
            printf("%d ", contv);
            contv += 1;
        }
        
    return 0;
}

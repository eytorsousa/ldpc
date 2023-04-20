#include <stdio.h>

int main(){
    // Aula de 19/04/2023 //
    printf("\tHello World\n");
    // exercício 6 //
    
    int n1 = 0;
    int n2 = 0;
    
    printf("\tExercício 6");
    printf("\nInsira dois valores para verificarmos qual é o maior e a diferença entre eles:");
    
    printf("\nValor 1: ");
    scanf("%d", &n1);
    printf("Valor 2: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("%d é o maior número.", n1);
        printf("\nA diferença entre eles é %d", (n1 - n2));
    }
    
    else{
        if(n2 > n1){
            printf("%d é o maior número.", n2);
            printf("\nA diferença entre eles é %d.", (n2 - n1));
        }
    }
    
    printf("\n\tFim do programa");
    return 0;
}

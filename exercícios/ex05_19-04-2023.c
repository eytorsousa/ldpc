#include <stdio.h>

int main(){
    // Aula de 19/04/2023 //
    printf("\tHello World\n");
    // exercício 5 //
    
    int n1 = 0;
    
    printf("\tExercício 5");
    printf("\nInsira um valor para verificar se é par ou impar: ");
    
    printf("\nValor: ");
    scanf("%d", &n1);

    if (n1 % 2 == 0){
        printf("O valor inserido é par");
    }
    
    else{
        printf("O valor inserido é impar");
    }
    printf("\n\tFim do programa");
    return 0;
}

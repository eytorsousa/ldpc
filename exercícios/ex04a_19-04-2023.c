#include <stdio.h>

int main(){
    // Aula de 19/04/2023 //
    printf("\tHello World");
    // exercício 4a //
    
    int n1 = 0;
    int n2 =0;
    int n3 = 0;
    
    printf("\t\nExercício 4");
    printf("\t\nInsira dois valores a seguir para que possamos trocar seus valores:");
    
    printf("\nValor 1: ");
    scanf("%d", &n1);

    printf("Valor 2: ");
    scanf("%d", &n2);
    
    printf("\nValores originais:");
    printf("\nValor 1: %d", n1);
    printf("\nValor 2: %d", n2);
    
    n3 = n1;
    n1 = n2;
    n2 = n3;
    
    printf("\n\nValores trocados:");
    printf("\nValor 1: %d", n1);
    printf("\nValor 2: %d", n2);
    
    printf("\t\nFim do programa");
    return 0;
}

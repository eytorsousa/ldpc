#include <stdio.h>
    // Aula_22-05-2023 Utilizando vetores (arrays) e loops
int main(){
    int x[5];
    int k;
    for(k = 0; k < 5; k++){
        printf("Insira um número: ");
        scanf("%d", &x[k]);
    }
    
    printf("\nNúmeros digitados: ");
    for(k = 0; k < 5; k++){
        printf("%d ", x[k]);
    }
    return 0;
}
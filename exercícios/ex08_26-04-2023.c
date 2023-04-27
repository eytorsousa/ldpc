#include <stdio.h>

/* Introduzindo o comando while */
//ex08_26-04-2023

int main(){
    printf("Números impares de 1 a 15.\n");
    
    int cont = 1;
    while(cont <= 15){
        printf("%d ", cont);
        cont += 2;
    }

    return 0;
}

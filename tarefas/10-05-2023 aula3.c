#include <stdio.h>

int main(){
    //Aula 10/05/2023
    //Usando "if e else"
    
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    if(letra == 'a' || letra == 'A'){
        printf("Abacaxi");
    }
    else
        if(letra == 'b' || letra == 'B'){
            printf("Banana");
        }
    
    return 0;
}
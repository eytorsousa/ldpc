#include <stdio.h>

int main(){
    //Aula 10/05/2023
    //Usando "switch, case e break"
    
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    switch(letra){
        case 'a':
	case 'A':
            printf("Abacaxi");
        break;
        case 'B':
        case 'b':
            printf("Banana");
        break;
        default:
            printf("Letra não encontrada!");
    }
    return 0;
}

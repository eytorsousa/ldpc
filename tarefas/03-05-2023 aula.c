#include <stdio.h>

int main(){
    //Aula 03-05-2023
    char  r = 's';
    int n = 0;
    
    while(r == 's' || r == 'S'){
        printf("\033[2J");       //Comando que limpa a tela.
        printf("\033[1;34H");   //Comando que define a linha e a coluna de inserção do texto seguinte.
        printf("Par ou impar");
        
        printf("\nInsira um número: ");
        scanf("%d", &n);
        
        if(n < 0){
            printf("Seu número é menor que zero!\nInsira um novo número positivo.");
        } 
        
        else
            if(n % 2 == 0){
                printf("O número inserido é par!");
            }
        
        else
            printf("O número inserido é impar!");
            
        printf("\033[5;1H");
        printf("Deseja inserir um novo número? (S/N): ");
        scanf(" %c", &r);
    }
    
    printf("\tPrograma encerrado!");
 
    return 0;
}

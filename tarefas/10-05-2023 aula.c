#include <stdio.h>

int main(){
    //Aula 10/05/2023
    //Usando "do while"
    
    char senha = 'E';
    char teste = 'E';
    
    do{
        printf("\033[2J");
        printf("\033[1;1H");
            if(teste != senha){
                printf("Senha incorreta!\n");
            }
        printf("Insira a senha: ");
        scanf("%c", &teste);
    }while(teste != senha);
    printf("Senha correta! Acesso permitido.");

    return 0;
}

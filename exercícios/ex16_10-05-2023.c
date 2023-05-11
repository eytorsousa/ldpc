#include <stdio.h>

int main(){
    //Exercício calculadora básica
    
    float a, b, r;
    int c;
    
    do{
        printf("\033[2J");
        printf("\033[1;1H");
        printf("\tCalculadora básica\n");
        printf("Insira o primeiro número: ");
        scanf("%f", &a);
        printf("Insira o segundo número: ");
        scanf("%f", &b);
        printf("---------------");
        printf("\nEscolha a operação:\n[1] Somar\n[2] Subtrair\n[3] Multiplicar\n[4] Dividir\n[5] Novos números");
        printf("\n---------------");
        printf("\nOperação: ");
        scanf("%d", &c);
    }while(c == 5);
    
    if(c < 1 || c > 5){
        while(c < 1 || c > 5){
            printf("Operação inválida! Digite novamente: ");
            scanf("%d", &c);
        }
    }
    
    switch(c){
        case 1:
        r = a + b;
        printf("%.2f + %.2f = %.2f", a, b, r);
        break;
        
        case 2:
        r = a - b;
        printf("%.2f - %.2f = %.2f", a, b, r);
        break;
        
        case 3:
        r = a * b;
        printf("%.2f * %.2f = %.2f", a, b, r);
        break;
        
        case 4:
            if(b == 0){
                printf("Não dividirás por 0.");
                break;
            } 
            else
                r = a / b;
                printf("%.2f / %.2f = %.2f", a, b, r);
                break;
        break;
    }
    return 0;
}
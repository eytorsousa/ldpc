#include <stdio.h>
int main(){
    //Calculando o salário de um funcionário
    int h, id;
    float sh;
    
    printf("\tCalculando o salário de um funcionário.");
    printf("\nInsira o ID do funcionário: ");
    scanf("%d", &id);
    printf("Insira a quantidade de horas trabalhadas por dia: ");
    scanf("%d", &h);
    
    if(h > 16){
        while(h > 16){
            printf("Valor inválido!\nInsira uma quantidade adequada: ");
            scanf("%d", &h);
        }
    }
    
    printf("Insira o valor que o funcionário recebe por hora: ");
    scanf("%f", &sh);
    
    printf("---------------");
    printf("\nFuncionário (ID): %d", id);
    printf("\nSalário total (mês): %.2f", (sh*22));
    return 0;
}

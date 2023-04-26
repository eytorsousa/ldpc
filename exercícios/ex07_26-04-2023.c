#include <stdio.h>

int main(){
    printf("\tHello World");
    //exercício 07 (ex07)
    
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float ma = 0;
    
    printf("\n\tVamos verificar se o aluno será aprovado:");
    
    printf("\nInsira a primeira nota do aluno: ");
    scanf("%f", &n1);
    printf("\nInsira a segunda nota do aluno: ");
    scanf("%f", &n2);
    printf("\nInsira a terceira nota do aluno: ");
    scanf("%f", &n3);
    
    ma = (n1+n2+n3)/3;
    
    if (ma >= 6){
        printf("Aluno aprovado! Média geral: %.2f", ma);
    }
    
    else
        if (ma <= 4){
            printf("Aluno reprovado! Média geral: %.2f", ma);
        }
        
    else
        if (4 < ma < 6){
            printf("Aluno em exame! Média geral: %.2f", ma);
        }
    return 0;
}

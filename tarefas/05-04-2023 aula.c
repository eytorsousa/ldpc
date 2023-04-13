#include <stdio.h>

int main(){
    
    printf("\tHello World\n");
    
    int a = 10; // declarando um valor para a variável.
    a = a + 1; // adicionando outro valor qualquer para o valor original da variável.
    
    // pode-se adicionar outro valor para a variável a partir de outro modo, a seguir:
    
    a += 1; // deste modo, evita-se digitar repetidas vezes a variável.
    
    printf("a=%d", a); //espera-se retornar 12.
    
    int x = 10;
    int y = 5;
    
    // utilizando a função '++', pode-se acrescentar +1 à variável desejada.
    //y = ++x; // desta forma, acrescanta-se +1 ao valor de 'x' e, em seguida, atribui este valor final à variável 'y'.
    y = x++; // deste outro modo, atribui o valor de 'x' a 'y' e, depois, soma-se +1 ao valor de 'x', assim, temos valores diferentes para as variáveis.
    
    
    printf("\ny=%d", y);
    printf("\nx=%d", x);
    
    int idade = 0;
    
    printf("\n\nInsira sua idade: ");
    scanf("%d", &idade);
    
    // Operadores matemáticos: '>', '<', '==', '!=', '>=', '<='.
    
    if (idade < 18){ // definindo uma condição
        printf("Você não possui idade suficiente para dirigir, volte daqui %d anos.", 18 - idade);
    }
    
    else{ // inserindo outra possibilidade para a condição anterior.
        printf("Parabéns! Você possui idade suficiente para dirigir!");
    }
    
    
    // Operadores lógicos: '&&' (and), '||' (ou), '!' (not).
    
    int b = 0;
    int c = 0;
    
    printf("\n\nA seguir, insira dois valores maiores ou iguais a 10 ...");
    printf("\nValor 1: ");
    scanf("%d", &b);
    printf("Valor 2: ");
    scanf("%d", &c);
    
    if (b >= 10 && c >= 10){
        
        printf("Ok, valores computados.");
        
    }
    
    if (b < 10 && c < 10){
        
        printf("Ops, seus valores são menores do que 10.");
        
    }
    
    if (b < 10 || c < 10){
        
        printf("Ops, parece que um dos seus valores é menor do que 10.");
        
    }
    
    
    int faltas = 0;
    float media = 0;
    
    printf("\n\nInsira a seguir os dados do aluno.");
    printf("\nMédia: ");
    scanf("%f", &media);
    printf("Faltas: ");
    scanf("%d", &faltas);
    
    if (faltas <= 10 && media >= 6){
    
    printf("Aprovado!");
    printf("\nMédia: %.2f // ", media); printf("Faltas: %d", faltas);

    }
    
    if (faltas > 10 || media < 6){
    
    printf("Reprovado!");
    printf("\nMédia: %.2f // ", media); printf("Faltas: %d", faltas);

    }
    
    return 0;
    
}

#include <stdio.h>
#include <ctype.h>
//Analisando dois valores e verificando qual o maior -ou se são iguais.

int main(){

float n1 = 0;
float n2 = 0;

printf("\tOlá, vamos analisar dois valores!\n");
printf("Insira o primeiro número: ");
scanf("%f", &n1);
printf("Insira o segundo número: ");
scanf("%f", &n2);

if (n1 > n2){
            printf("O primeiro número (%.2f) é maior do que o segundo número (%.2f).", n1, n2);
    }
    
else
    if (n2 > n1){
            printf("O segundo número (%.2f) é maior do que o primeiro número (%.2f).", n2, n1);
    }
        
else
    if (n1 == n2){
            printf("Os valores são iguais!");
    }

printf("\n\tFIM DO PROGRAMA");
return 0;
}

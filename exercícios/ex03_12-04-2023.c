#include <stdio.h>
//Analisando dois valores e verificando sua divisão inteira e seu resto.

int main(){

int n1 = 0;
int n2 = 0;

printf("\tOlá, vamos analisar dois valores!\n");
printf("Insira o primeiro número: ");
scanf("%d", &n1);
printf("Insira o segundo número: ");
scanf("%d", &n2);

if (n2 == 0){
        printf("Não dividirás por zero!");
    }

else if (n1 == 0){
    printf("\n\tDIVISÕES INTEIRAS\n");
    printf("%d/%d = %d", n1, n2, n1/n2);
    
    printf("\n\tRESTO DA DIVISÃO\n");
    printf("%d/%d = %d", n1, n2, n1%n2);
}

else{
    printf("\n\tDIVISÕES INTEIRAS\n");
    printf("%d/%d = %d", n1, n2, n1/n2);
    printf("\n%d/%d = %d", n2, n1, n2/n1);
        
    printf("\n\tRESTO DA DIVISÃO\n");
    printf("%d/%d = %d", n1, n2, n1%n2);
    printf("\n%d/%d = %d", n2, n1, n2%n1);
}

printf("\n\n\tFIM DO PROGRAMA");
return 0;
}

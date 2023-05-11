#include <stdio.h>
int main(){
    //Exibindo o consumo médio de combustível.
    int a;
    float b;
    
    printf("\tExibindo o consumo médio de combustível.");
    
    printf("\nInsira a distância percorrida (km): ");
    scanf("%d", &a);
    printf("Insira a quantidade de combustível consumida (litros): ");
    scanf("%f", &b);
    
    printf("Consumo médio (km/l): %.2f", (a/b));
    
    return 0;
}

#include <stdio.h>
    // Aula_17-05-2023 Utilizando vetores (arrays)
int main(){
    int x[4], z;
    
    printf("Insira valores: ");
    scanf("%d", &x[0]);
    printf("Insira valores: ");
    scanf("%d", &x[1]);
    printf("Insira valores: ");
    scanf("%d", &x[2]);
    printf("Insira valores: ");
    scanf("%d", &x[3]);
    
    while(z < 4){
        printf("%d, ", x[z]);
        z ++;
    }
    
    //Verificando tamanho das variáveis
    
    int n;
    float m;
    char o;
    double p;
    
    printf("\nInt tem %ld bytes\n", sizeof n);
    printf("Float tem %ld bytes\n", sizeof m);
    printf("Char tem %ld bytes\n", sizeof o);
    printf("Double tem %ld bytes\n", sizeof p);
    
    
    
    return 0;
}

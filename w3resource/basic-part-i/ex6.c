#include <stdio.h>
int main(){
    //Escrevendo o perimetro e a área de um circulo.
    float r;
    float pi = 3.14159;
    
    printf("\tEscrevendo o perimetro e a área de um circulo.");
    printf("\nInsira o raio do círculo a ser analisado: ");
    scanf("%f", &r);
    
    printf("\nPerimetro = %.4fm", (2*pi*r));
    printf("\nÁrea = %.4fm²", (pi*(r*r)));

    return 0;
}

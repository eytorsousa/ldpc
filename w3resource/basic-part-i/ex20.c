#include <stdio.h>
#include <math.h>
    //Aplicando a fórmula de bháskara.
int main(){
    float a, b, c, d, x1, x2;
    printf("\tAplicando a fórmula de bháskara.");
    
    printf("\nInsira os valores para 'a', 'b' e 'c':");
    printf("\na: ");
    scanf("%f", &a);
    
    printf("b: ");
    scanf("%f", &b);
    
    printf("c: ");
    scanf("%f", &c);
    
    d = ((b*b)-(4*a*c));
    
    if(d > 0 && a != 0){
        x1 = (((b*(-1)) + (sqrt(d)))/(2*a));
        x2 = (((b*(-1)) - (sqrt(d)))/(2*a));
    
        printf("X1 = %.4f", x1);
        printf("\nX2 = %.4f", x2);
    }
    
    else
        printf("\nImpossível encontrar as raízes.");
    return 0;
}

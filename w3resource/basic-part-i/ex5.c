#include <stdio.h>
int main(){
    //Escrevendo o perimetro e a área de um retângulo de lados 7m e 5m.
    int la = 7;
    int lb = 5;
    
    printf("\tEscrevendo o perimetro e a área de um retângulo de lados 7m e 5m.");
    printf("\nPerimetro = %dm", (la + lb)*2);
    printf("\nÁrea = %dm²", (la * lb));

    return 0;
}

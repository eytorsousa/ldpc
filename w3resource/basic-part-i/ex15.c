#include <stdio.h>
#include <math.h>
int main(){
    //Exibindo a distância entre dois pontos no plano.
    int x1, y1, x2, y2, ca, cb;
    float hip, hip2;
    
    
    printf("\tExibindo a distância entre dois pontos no plano.");
    
    printf("\nX1: ");
    scanf("%d", &x1);
    printf("Y1: ");
    scanf("%d", &y1);
    printf("X2: ");
    scanf("%d", &x2);
    printf("Y2: ");
    scanf("%d", &y2);
    
    if(x1 > x2){
        ca = x1 - x2;  
    }
    
    else
        ca = x2 - x1;
        
    if(y1 > y2){
        cb = y1 - y2;
    }
    
    else
        cb = y2 - y1;
        
    hip2 = (cb*cb)+(ca*ca);
    hip = sqrt(hip2);
    
    printf("\nDistância entres os pontos: %.4f", hip);
    
    return 0;
}

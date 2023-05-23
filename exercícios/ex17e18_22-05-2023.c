#include <stdio.h>
    // Exercício 17e18_22-05-2023
int main(){
    int x[10], k;
    int c = 1;
    
    for(k = 0; k < 10; k++){
        x[k] = c;
        c++;
        printf("%d ", x[k]);
    }

    printf("\n");
    
    int y[10];
    int a = 0;
    int b = 1;
    
    while(b < 11){
        y[a] = b;
        printf("%d ", x[a]);
        a++;
        b++;
    }
    
    return 0;
}
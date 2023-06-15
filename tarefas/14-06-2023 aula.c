#include <stdio.h>

int main(){
    
    int mat[3][3];
    int j = 0, k = 0;
    int n = 0;
    for(j = 0; j < 3; j++){
        for(k = 0; k < 3; k += 1){
            n++;
            printf("Número %d: ", n);
            scanf("%d", &mat[j][k]);
        }
    }
    
    printf("%d", mat[j][k]);
    return 0;
}

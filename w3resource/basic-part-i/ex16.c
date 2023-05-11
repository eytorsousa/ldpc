#include <stdio.h>
#include <math.h>
int main(){
    //Sacando notas em um banco.
    int n100, n50, n20, n10, n5, n2, n1, v;
    
    printf("\tSacando notas em um banco.");
    
    printf("\nQual valor você deseja sacar?: ");
    scanf("%d", &v);
    
    if(v - 100 >= 0){
        while(v - 100 >= 0){
            n100 += 1;
            v -= 100;
            
            if(v - 100 < 0){
                break;
            }
        }
    }
    
    if(v - 50 >= 0){
        while(v - 50 >= 0){
            n50 += 1;
            v -= 50;
            
            if(v - 50 < 0){
                break;
            }
        }
    }
    
    if(v - 20 >= 0){
        while(v - 20 >= 0){
            n20 += 1;
            v -= 20;
            
            if(v - 20 < 0){
                break;
            }
        }
    }
    
    if(v - 10 >= 0){
        while(v - 10 >= 0){
            n10 += 1;
            v -= 10;
            
            if(v - 10 < 0){
                break;
            }
        }
    }
    
    if(v - 5 >= 0){
        while(v - 5 >= 0){
            n5 += 1;
            v -= 5;
            
            if(v - 5 < 0){
                break;
            }
        }
    }
    
    if(v - 2 >= 0){
        while(v - 2 >= 0){
            n2 += 1;
            v -= 2;
            
            if(v - 2 < 0){
                break;
            }
        }
    }

    if(v - 1 >= 0){
        while(v - 1 >= 0){
            n1 += 1;
            v -= 1;
            
            if(v - 1 < 0){
                break;
            }
        }
    }
    
    printf("\n------ SAQUE EFETUDADO ----------");
    printf("\nNotas de 100: %d\nNotas de 50: %d", n100, n50);
    printf("\nNotas de 20: %d\nNotas de 10: %d", n20, n10);
    printf("\nNotas de 5: %d\nNotas de 2: %d", n5, n2);
    printf("\nNotas de 1: %d", n1);
    printf("\n---------------------------------");
    return 0;
}
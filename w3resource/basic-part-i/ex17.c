#include <stdio.h>
#include <math.h>
int main(){
    //Convertendo segundos em horas, minutos e segundos equivalentes.
    int h, m, s;
    
    printf("\tConvertendo segundos em horas, minutos e segundos equivalentes.");
    
    printf("\nInsira a quantidade em segundos: ");
    scanf("%d", &s);
    
    if(s - 3600 >= 0){
        while(s - 3600 >= 0){
            h += 1;
            s -= 3600;
            
            if(s - 3600 < 0){
                break;
            }
        }
    }
    
    if(s - 60 >= 0){
        while(s - 60 >= 0){
            m += 1;
            s -= 60;
            
            if(s - 60 < 0){
                break;
            }
        }
    }
    
    printf("\n------ CONVERSÃO REALIZADA ----------");
    printf("\nH:M:S - %d:%d:%d", h, m, s);
    printf("\n------------------------------------");
 
    return 0;
}
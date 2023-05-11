#include <stdio.h>
int main(){
    //Convertendo dias em anos, meses, semanas e dias equivalentes.
    int d, a, m, s;
    
    printf("\tConvertendo dias em anos, meses, semanas e dias equivalentes.");
    printf("\nInsira a quantidade de dias para converter: ");
    scanf("%d", &d);
    
    if(d - 365 >= 0){
        while(d - 365 >= 0){
            a += 1;
            d -= 365;
            
            if(d - 365 < 0){
                break;
            }
        }
    }
    
    if(d - 30 >= 0){
        while(d - 30 >= 0){
            m += 1;
            d -= 30;
            
            if(d - 30 < 0){
                break;
            }
        }
    }

    if(d - 7 >= 0){
        while(d - 7 >= 0){
            s += 1;
            d -= 7;
            
            if(d - 7 < 0){
                break;
            }
        }
    }
    
    printf("A quantidade de dias inserida é equivalente a:");
    printf("\nAno(s): %d", a);
    printf("\nMes(es): %d", m);
    printf("\nSemana(s): %d", s);
    printf("\nDia(s): %d", d);
    return 0;
}

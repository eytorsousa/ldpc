#include <stdio.h>
int main(){
    //Exibindo a maior variável inserida.
    int a, b, c;
   
    printf("\tExibindo a maior variável inserida.");
    
    printf("\nN1 = ");
    scanf("%d", &a);
    printf("N2 = ");
    scanf("%d", &b);
    printf("N3 = ");
    scanf("%d", &c);
    

    if(a > b && a > c){
        printf("O maior valor é %d.", a);
    }
    else
        if(b > a && b > c){
           printf("O maior valor é %d.", b); 
        }
    else
        if(c > a && c > b){
           printf("O maior valor é %d.", c); 
        }
    
    else
        printf("Os valores são iguais!");
    return 0;
}

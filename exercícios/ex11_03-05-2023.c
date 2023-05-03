#include <stdio.h>

int main(){
    //Aula 03-05-2023
    //Exercício 11_03-05-2023
    printf("Exibindo os números de 1 a 10:\n");
    int n = 1;
    int c = 0;
    int s = 0;
    
    while (n <= 10){
        printf("%d ", n);
        c = n;
        s = s + c;
        n += 1;
    }
    
    printf("\nExibindo a somatório: ");
    printf("%d", s);
    
    return 0;
}

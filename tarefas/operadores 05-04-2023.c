#include <stdio.h>

int main(){
    
int A = -10;
int B = 20;
    
    //Operadores aritméticos//
    
/*
    
    A = 10    B = 20
    
+ 	soma 	            A + B 	30      (Soma valores de variáveis)
- 	subtração           A - B 	-10     (Subtrai valores de variáveis)
* 	multiplicação 	    A * B 	200     (Multiplica "")
/ 	divisão inteira 	B / A 	2       (Divide "")
% 	módulo 	            B % A 	0       (Retorna o valor do resto da divisão entre duas variáveis)
++ 	incremento 	        ++A 	11      (Acrescenta 1 ao valor original da variável)
-- 	decremento          --A 	9       (Subtrai 1 do valor original da variável)
    
*/   
    
printf("%d", --A);
    
    //Operadores relacionais//

/*  Podem ser usados durante condições.


== 	igual 	         A == B 	
!= 	diferente 	     A != B 	
> 	maior do que 	 A > B 	
< 	menor do que 	 A < B 	
>= 	maior ou igual 	 A >= B 	
<= 	menor ou igual   A <= B 	

*/
  
if (A != B){
        printf("\nA é diferente de B");
    }
    
    //Operadores lógicos//

/*

&& 	AND lógico   	A && B 	(Variável A 'e' variável B)
|| 	OR lógico 	    A || B 	(Variável A 'ou' variável B)
! 	NOT lógico 	   !A 	    (Inverte o valor lógico da função/condição)
    
*/    
    
if (A || B > 0){
        printf("\nO valor de A ou o valor de B é maior do que 0.");
    }
    
    
    //Operadores de atribuição//

/* Funcionam como uma espécie de abreviação dos operadores.

Operador 	Descrição 	                        Exemplo 	Equivale
= 	    atribuição simples de valor a variável 	A = B + 17  	
+= 	    atribuição com soma 	                A += 3 	    A = A + 3
-= 	    atribuição com subtração 	            A -= B - 7 	A = A - (B - 7)
*= 	    atribuição com produto 	                C *= A 	    C = C * A
/= 	    atribuição com divisão                  C /= A 	    C = C / A
%= 	    atribuição com módulo 	                C %= A 	    C = C % A
<<= 	atribuição com deslocamento à esquerda 	C <<= 2 	C = C << 2
>>= 	atribuição com deslocamento à direita 	C >>= 2 	C = C >> 2
&= 	    atribuição com AND binário 	            C &= 2 	    C = C & 2
|= 	    atribuição com OR binário 	            C |= 2 	    C = C | 2
^= 	    atribuição com XOR binário 	            C ^= 2 	    C = C ^ 2

*/
    return 0;
}
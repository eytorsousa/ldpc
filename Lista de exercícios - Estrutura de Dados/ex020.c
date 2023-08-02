#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
20. Escreva um algoritmo para criar um programa de ajuda para vendedores. A partir de um
valor total lido, mostre:
O total a pagar com desconto de 10%;
O valor de cada parcela, no parcelamento de 3 x sem juros;
A comissão do vendedor, no caso de a venda ser a vista (5% sobre o valor com desconto)
A comissão do vendedor, no caso de a venda ser parcelada (5% sobre o valor total)
*/

int main () {
    float valor, vd, parcela, cav, cap;
    char p;
    int flag = 0;

    printf("Insira o valor do produto para calcular os descontos, parcelas e comissoes: ");
    printf("\n\nValor do produto: ");
    scanf("%f", &valor);

    vd = valor * 0.9;
    printf("\nO valor total com desconto e de %f", vd);

    printf("\nDeseja parcelar? (Sim[s/S] || Nao[n/N]): ");
    scanf(" %c", &p);

    if(p == 'S' || p == 's'){
        parcela = vd / 3;
        cap = valor * 0.05;
        printf("\nOk, vamos parcelar o valor final (com desconto).");
        printf("\nO valor de cada parcela, no parcelamento de 3x sem juros e de %f", parcela);
        printf("\nA comissao do vendedor e de %f", cap);
    } else if(p == 'N' || p == 'n') {
        cav = vd * 0.05;
        printf("\nOk, o pagamento sera a vista.");
        printf("\nA comissao do vendedor e de %f", cav);
    } else {
        printf("\nOpcao invalida.");
    }

    printf("\n\n");
//
    system("pause");
    return 0;
}

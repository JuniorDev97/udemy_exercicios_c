#include <stdio.h>
#include <stdlib.h>

int main()
{
    double preco , dinheiro , troco ;
    int qtd;

 printf("Preço unitario do produto:");
 scanf("%lf", &preco);

 printf("Quantidade comprada:");
 scanf("%d", &qtd);

 printf("Dinheiro recebido:");
 scanf("%lf", &dinheiro);

 troco = dinheiro - (qtd*preco);
 printf("TROCO = %.2lf", troco);

    return 0;
}

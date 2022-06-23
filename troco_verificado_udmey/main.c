#include <stdio.h>
#include <stdlib.h>

int main()
{
    double uni , money , troco ;
    int qtd ;

    printf("Preco unitario do produto:");
    scanf("%lf", &uni);
    printf("Quantidade comprada:");
    scanf("%d", &qtd);
    printf("Dinheiro recebido:");
    scanf("%lf", &money);

    troco =  money - qtd*uni ;

    if(troco > 0){
        printf("TROCO = %.2lf", troco);
    }else{
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", troco*(-1));
    }


    return 0;
}

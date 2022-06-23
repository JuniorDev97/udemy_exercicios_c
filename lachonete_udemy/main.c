#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  cod , qtd ;
    double uni , valor ;

    printf("Codigo do produto comprado:");
    scanf("%d", &cod);
    printf("Quantidade comprada:");
    scanf("%d", &qtd);

    if(cod == 1){
        uni = 5.0 ;
    }else{
        if(cod == 2){
            uni = 3.5;
        }else{
            if(cod == 3){
                uni = 4.8;
            }else{
                if(cod == 4){
                    uni = 8.9;
                }else{
                    if(cod == 5){
                        uni = 7.32;
                    }
                }
            }
        }
    }

    valor = qtd*uni ;
    printf("Valor a pagar: R$ %.2lf", valor);
    return 0;
}

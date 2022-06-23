#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min ;
    double valorT ;

    printf("Digite a quantidade de minutos:");
    scanf("%d", &min);

    if(min > 100){
        valorT = (min-100)*2 + 50;
        printf("Valor total a pagar: R$ %.2lf", valorT);
    }else{
    printf("Valor total a pagar: R$ 50.00");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int   x ;
    double num , den;

    printf("Quantos casos voce vai digitar?");
    scanf("%d", &x);

    for(int i=0;i<x;i++){
        printf("Entre com o numerador:");
        scanf("%lf", &num);
        printf("Entre com o denominador:");
        scanf("%lf", &den);

        if(den == 0){
            printf("DIVISAO IMPOSSIVEL!\n");
        }else{
            printf("DIVISAO = %.2lf\n", num/den);
        }

    }

    return 0;
}

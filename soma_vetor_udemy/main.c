#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    double media , soma ;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &x);

    int vet[x];
    for(int i=0;i<x;i++){
        printf("Digite um numero:");
        scanf("%d", &vet[i]);
    }

    printf("VALORES = ");
    for(int i=0;i<x;i++){
        printf(" %d", vet[i]);
    }

    for(int i=0;i<x;i++){
        soma = soma + vet[i];
    }
    printf("\nSOMA = %.2lf\n", soma);

    media = soma/x;

    printf("MEDIA = %.2lf", media);
    return 0;
}

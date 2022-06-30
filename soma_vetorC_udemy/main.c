#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , x , soma;
    double media ;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &x);

    int vet[x];
    for(i=0;i<x;i++){
        printf("Digite um numero:");
        scanf("%d", &vet[i]);
    }

    printf("VALORES = ");
    for(i=0;i<x;i++){
        printf("%d ", vet[i]);
    }

    soma = 0;
    for(i=0;i<x;i++){
        soma = soma + vet[i];
    }
    printf("\nSOMA = %d\n", soma);

    media = soma/x;
    printf("MEDIA = %.1lf\n", media);

    return 0;
}

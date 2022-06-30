#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double media_vet , soma_vet;

    printf("Quantos elementos vai ter o vetor?");
    scanf("%d", &x);

    double vet[x];
    for(int i=0;i<x;i++){
        printf("Digite um numero:");
        scanf("%lf", &vet[i]);
    }

    soma_vet = 0;
    for(int i=0;i<x;i++){
        soma_vet = soma_vet + vet[i];
    }

    media_vet = soma_vet/x;
    printf("\nMEDIA DO VETOR = %.3lf\n",media_vet );

    printf("ELEMENTOS ABAIXO DA MEDIA:\n");
    for(int i=0;i<x;i++){
        if(vet[i]<media_vet){
            printf("%.1lf\n", vet[i]);
        }
    }


    return 0;
}

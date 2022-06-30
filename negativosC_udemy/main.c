#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , i ;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &x);
    int vet[x];

    for(i=0;i<x;i++){
        printf("Digite um numero:");
        scanf("%d", &vet[i]);
    }

    printf("NUMEROS NEGATIVOS:\n");
    for(i=0;i<x;i++){
        if(vet[i] < 0){
            printf("%d", vet[i]);
        }
    }

    return 0;
}

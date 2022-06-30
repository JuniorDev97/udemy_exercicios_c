#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;

    printf("Quantos numeors voce vai digitar?");
    scanf("%d", &x);

    int vet[x];

    for(int i=0;i<x;i++){
            printf("Digite um numero:");
            scanf("%d", &vet[i]);

    }

    printf("NUMEROS NEGATIVOS:");
    for(int i=0;i<x;i++){
        if(vet[i]<0){
            printf("%d\n", vet[i]);
        }
    }
    return 0;
}

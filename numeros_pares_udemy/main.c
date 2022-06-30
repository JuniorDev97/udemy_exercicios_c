#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ,cont ;

    printf("Quantos numeors voce vai digitar?");
    scanf("%d", &x);

    int vet[x];
    for(int i=0;i<x;i++){
        printf("Digite um numero:");
        scanf("%d", &vet[i]);
    }

    printf("NUMEROS PARES:");
    for(int i=0;i<x;i++){
        if(vet[i]%2 == 0){
            printf(" %d ", vet[i]);
        }
    }

    for(int i=0;i<x;i++){
        if(vet[i]%2 == 0){
            cont++;
        }
    }
    printf("\nQUANTIDADE DE PARES = %d ", cont);

    return 0;
}

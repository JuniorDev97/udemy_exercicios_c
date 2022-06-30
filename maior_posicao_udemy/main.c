#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , maior , posicao;

    printf("Quanto numero voce vai digitar?");
    scanf("%d", &x);



    int vet[x];
    for(int i=0;i<x;i++){
        printf("Digite um numero:");
        scanf("%d", &vet[i]);
    }

    posicao = 0;

    maior = vet[0] ;
    for(int i=0;i<x;i++){
        if(vet[i]>maior){
            maior = vet[i];
            posicao = i;
        }
    }
    printf("MAIOR VALOR = %d\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d", posicao);

    return 0;
}

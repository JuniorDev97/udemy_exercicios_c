#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , maior , posicaomaior;

    printf("Quantas pessoas voce vai digitar?");
    scanf("%d", &x);

    char nome[x][50];
    int idade[x];

    for(int i=0;i<x;i++){
            printf("Dados da %da pessoa:\n", i+1);
            printf("Nome:");
            scanf("%s",&nome[i][0]);
            printf("Idade:");
            scanf("%d", &idade[i]);
    }

    posicaomaior = 0;
    maior = idade[0];

    for(int i=1;i<x;i++){
            if(idade[i] > maior){
                maior = idade[i];
                posicaomaior = i;
            }
    }

    printf("PESSOA MAIS VELHA: %s\n", nome[posicaomaior]);
    return 0;
}

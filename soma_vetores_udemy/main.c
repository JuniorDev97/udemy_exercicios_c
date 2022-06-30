#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;

    printf("Quantos valores vai ter cada vetor?");
    scanf("%d", &x);

        int A[x];
    printf("Digite os valores de vetor A:\n");
        for(int i=0;i<x;i++){
            scanf("%d", &A[i]);
        }

        int B[x];
    printf("Digite os valores de vetor B:\n");
        for(int i=0;i<x;i++){
            scanf("%d",&B[i]);
        }

    printf("VETOR RESULTANTE:\n");
        for(int i=0;i<x;i++){
            printf("%d\n", A[i] + B[i]);
        }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somal , M , N;

    printf("Qual a quantidade de linhas da matriz?");
    scanf("%d", &M);
    printf("Qual a quantidade de coluna da matriz?");
    scanf("%d", &N);

    int mat[M][N] , vet[M];
    for(int i=0;i<M;i++){
            printf("Digite os elementos da %da linha:\n", i+1);
            for(int j=0;j<N;j++){
                scanf("%d", &mat[i][j]);
            }
    }

    for(int i=0;i<M;i++){
            somal = 0;
        for(int j=0;j<N;j++){
            somal = somal + mat[i][j];
        }
        vet[i] = somal;
    }

    printf("VETOR GERADO:\n");
    for(int i=0;i<M;i++){
        printf("%d\n", vet[i]);
    }


    return 0;
}

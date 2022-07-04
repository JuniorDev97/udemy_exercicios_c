#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M , neg ;

    printf("Qual a ordem da matriz?");
    scanf("%d", &M);

    int mat[M][M];
    for(int i=0;i<M;i++){
            for(int j=0;j<M;j++){
                printf("Elemento [%d,%d]: ", i , j);
                scanf("%d", &mat[i][j]);
            }
    }

    printf("DIAGONAL PRINCIAPAL:\n");
    for(int i=0;i<M;i++){
            for(int j=0;j<M;j++){
                if(i==j){
                    printf("%d ", mat[i][j]);
                }
            }
    }
    neg = 0;
    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
                if(mat[i][j] < 0){
                    neg++;
                }
        }
    }
    printf("\nQUANTIDADE DE NEGATIVOS = %d", neg);

    return 0;
}

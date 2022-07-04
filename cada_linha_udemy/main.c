#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m , maior;

    printf("Qual a ordem da matriz?");
    scanf("%d", &m);

    int mat[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("Elemento [%d,%d]: ", i , j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("MAIOR ELEMENTO DE CADA LINHA:\n");
    for(int i=0;i<m;i++){
            maior = mat[i][0];
        for(int j=0;j<m;j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
        printf("%d\n", maior);
    }

    return 0;
}

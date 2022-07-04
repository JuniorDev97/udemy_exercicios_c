#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma , m ;

    printf("Qual a ordem da matriz?");
    scanf("%d", &m);

    int A[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("Elemento [%d,%d]: ", i , j);
            scanf("%d", &A[i][j]);
        }
    }

    soma = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i<j){
                soma = soma + A[i][j];
            }
        }
    }
    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", soma);

    return 0;
}

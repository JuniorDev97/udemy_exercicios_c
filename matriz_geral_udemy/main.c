#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int coluna , linha , m ,soma_positivos;

    printf("Qual a ordem da matriz?");
    scanf("%d", &m);

    int A[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    soma_positivos = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(A[i][j] > 0){
                soma_positivos = soma_positivos + A[i][j];
            }
        }
    }
    printf("\nSOMA DOS POSITIVOS: %d\n", soma_positivos);

    printf("\nEscolha uma linha: ");
    scanf("%d", &linha);
    printf("LINHA ESCOLHIDA: ");
        for(int j=0;j<m;j++){
            printf("%d ", A[linha][j]);
        }

    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &coluna);
    printf("COLUNA ESCOLHIDA: ");
    for(int i=0;i<m;i++){
        printf(" %d", A[i][coluna]);
    }

    printf("\n\nDIAGONAL PRINCIPAL:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                printf(" %d", A[i][j]);
            }
        }
    }

    printf("\n\nMATRIZ ALTERADA:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(A[i][j] < 0){
                printf("%d ", A[i][j]*A[i][j]);
            }else{
                printf("%d ", A[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}

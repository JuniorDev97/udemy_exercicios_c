#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b ;

    printf("Digite dois numeros:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    while(a != b){
        if(a > b){
            printf("DECRESCENTE!\n");
        }else{
            printf("CRESCENTE!\n");
        }

        printf("Digite outros dois numeros:\n");
        scanf("%d", &a);
        scanf("%d", &b);

    }

    return 0;
}

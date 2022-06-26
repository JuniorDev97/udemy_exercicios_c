#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y , fora , dentro ;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d",&x);

    fora = 0;
    dentro =0;
    for(int i=0;i<x;i++){

            printf("Digite um numero:");
            scanf("%d", &y);
            if(y >= 10 && y<= 20){
                dentro = dentro + 1;
            }else{
                fora = fora + 1;
            }

    }

    printf("%d DENTRO\n", dentro);
    printf("%d FORA\n", fora);

    return 0;
}

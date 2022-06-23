#include <stdio.h>
#include <stdlib.h>

int main()
{
    double gli ;

    printf("Digite a medida da glicose:");
    scanf("%lf", &gli);
    if(gli <= 100 ){
        printf("Classificacao: normal");
    }else{
        if(gli <= 140 ){
            printf("Classificacao: elevado");
        }else{
            if(gli > 140){
                printf("Classificacao: diabetes");
            }
        }
    }
    return 0;
}

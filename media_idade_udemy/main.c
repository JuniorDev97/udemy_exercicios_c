#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , cont  ;
    double media , soma ;

    printf("Digite as idades:\n");
    scanf("%d", &a);

    if(a < 0 ){
        printf("IMPOSSIVEL CALCULAR");
    }else{

    soma = 0;
    cont = 0;
    while(a > 0){
    // ou cont++;
    cont = cont + 1;
    soma = soma + a;
    scanf("%d", &a);


    }

    media = soma/cont;
    printf("MEDIA = %.2lf" , media);

    }

    return 0;
}

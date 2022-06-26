#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma , a , cont ;

    printf("Digite um numero inteiro:");
    scanf("%d", &a);

    soma = 0;
    cont = 0;
    while(a != 0){
    if(a%2 != 0){
            a = a + 1;
    }
    soma = 5*a + 20 ;
    printf("SOMA = %d\n", soma);

    printf("Digite um numero inteiro:");
    scanf("%d", &a);

    }

    printf("SOMA = %d", soma);
    return 0;
}

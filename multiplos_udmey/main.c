#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a , b ;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d", &a);
    scanf("%d", &b);

    if(a < b){
        a = b ;
        b = a ;
    }

    if(a%b == 0){
        printf("Sao multiplos");
    }else{
        printf("Nao sao multiplos");
    }
    return 0;
}

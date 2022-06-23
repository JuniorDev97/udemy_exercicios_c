#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menor , valor1 , valor2 , valor3;

    printf("Primeiro valor:");
    scanf("%d", &valor1);
    printf("Segundo valor:");
    scanf("%d", &valor2);
    printf("Terceiro valor:");
    scanf("%d", &valor3);

    menor = 0;

    if(valor1<valor2 && valor1<valor3) {
        menor = valor1;
    }else{
        if(valor2 < valor1 && valor2<valor3){
            menor = valor2;
        }else{
            if(valor3 < valor1 && valor3<valor2){
                menor = valor3 ;
            }
        }
    }

    printf("MENOR = %d", menor);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n , fat;

    printf("Digite o valor de N:");
    scanf("%d", &n);

    fat = 1;
    for(int i=n;i>0;i--){
         fat = fat*i;
    }

    printf("FATORIAL = %d", fat);
    return 0;
}

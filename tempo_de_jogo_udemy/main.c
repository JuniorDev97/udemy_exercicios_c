#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Hi , Hf;

    printf("Hora inicial:");
    scanf("%d", &Hi);
    printf("Hora final:");
    scanf("%d", &Hf);

    if(Hi < Hf){
        printf("O JOGO DUROU %d HORA(S)", Hf - Hi);
    }else{
        printf("O JOGO DUROU %d HORA(S)",24 - (Hi - Hf));
    }


    return 0;
}

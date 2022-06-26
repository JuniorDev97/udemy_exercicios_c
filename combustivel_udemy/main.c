#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op , gasolina , alcool , diesel ;

    gasolina = 0;
    alcool = 0;
    diesel = 0;
    printf("Informe um codigo (1, 2, 3) ou 4 para parar:");
    scanf("%d", &op);
    if(op == 1){
        alcool = alcool + 1;
    }else{
        if(op == 2){
            gasolina = gasolina + 1;
        }else{
            if(op == 3){
                diesel = diesel + 1;
            }
        }
    }

    while(op != 4){
    printf("Informe um codigo (1, 2, 3) ou 4 para parar:");
    scanf("%d",&op);
    if(op == 1){
        alcool = alcool + 1;
    }else{
        if(op == 2){
            gasolina = gasolina + 1;
        }else{
            if(op == 3){
                diesel = diesel + 1;
            }
        }
    }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}

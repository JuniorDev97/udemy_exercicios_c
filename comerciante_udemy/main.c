#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , acima , entre , abaixo ;
    double vtc , vtv , Plucro ;

    printf("Serao digitados dados de quantos produtos?");
    scanf("%d", &x);

    double compra[x], venda[x] , lucro[x];
    char nome[x][50];
    for(int i=0;i<x;i++){
            printf("Produto %d:\n", i+1);
            printf("Nome:");
            fseek(stdin,0,SEEK_END);
            scanf("%s", &nome[i]);
            printf("Preco de compra:");
            scanf("%lf", &compra[i]);
            printf("Preco de venda:");
            scanf("%lf", &venda[i]);
    }

    printf("RELATORIO:\n");


    abaixo = 0;
    entre = 0;
    acima = 0;
    for(int i=0;i<x;i++){
        lucro[i] = venda[i] - compra[i];
        Plucro = (lucro[i]*100)/venda[i];

            if(Plucro < 10){
                abaixo++;
            }else{
                if(Plucro >= 10 && Plucro <= 20 ){
                    entre++;
                }else{
                    if(Plucro > 20){
                        acima++;
                    }
                }
            }
    }

    printf("Lucro abaixo de 10%%: %d\n" , abaixo);
    printf("Lucro entre de 10%% e 20%%: %d\n" , entre);
    printf("Lucro acima de 30%%: %d\n" , acima);

    vtc = 0;
    vtv = 0;
    for(int i=0;i<x;i++){
        vtc = vtc + compra[i];
        vtv = vtv + venda[i];
    }
    printf("Valor total de compra: %.2lf\n", vtc);
    printf("Valor total de venda: %.2lf\n", vtv);
    printf("Lucro total: %.2lf\n", vtv - vtc);

    return 0;
}

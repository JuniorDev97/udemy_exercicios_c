#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , i ;
    double porcentagemC , porcentagemR , porcentagemS , qtd , qtd_coelho , qtd_rato , qtd_sapo , qtd_total ;;
    char tipo;

    printf("Quantos casos de teste serao digitados?");
    scanf("%d", &x);

    qtd_coelho = 0;
    qtd_rato = 0;
    qtd_sapo = 0;
    qtd_total = 0;
    for(i=0;i<x;i++){
        printf("Quantidades de cobaias:");
        scanf("%lf", &qtd);
        fseek(stdin,0,SEEK_END);
        printf("Tipo de cobaia:");
        scanf("%c", &tipo);

        qtd_total = qtd_total + qtd;
        if(tipo == 'C'){
            qtd_coelho = qtd_coelho + qtd;
        }else{
            if(tipo == 'R'){
                qtd_rato = qtd_rato + qtd;
            }else{
                if(tipo == 'S'){
                    qtd_sapo = qtd_sapo + qtd;
                }
            }
        }
    }

    porcentagemS = (qtd_sapo*100)/qtd_total;
    porcentagemR = (qtd_rato*100)/qtd_total;
    porcentagemC = (qtd_coelho*100)/qtd_total;

    printf("RELATORIO FINAL:\n");
    printf("Total:%.1lf\n", qtd_total);
    printf("Total de coelhos:%.1lf\n", qtd_coelho);
    printf("Total de ratos:%.1lf\n", qtd_rato);
    printf("Total de sapos:%.1lf\n", qtd_sapo);
    printf("Percentual de coelhos:%.1lf \n", porcentagemC);
    printf("Percentual de ratos:%.1lf \n", porcentagemR);
    printf("Percentual de sapos:%.1lf \n", porcentagemS);

    return 0;
}

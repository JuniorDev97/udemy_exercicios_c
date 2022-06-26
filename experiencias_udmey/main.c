#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Tratos , n , Tsapos , Tcoelhos , cobaias , qtd;
    char op ;
    double Psapos , Pratos , Pcoelhos ;

    printf("Quantos casos de teste serao digitados?");
    scanf("%d", &n);

    Tratos = 0;
    Tsapos = 0;
    Tcoelhos = 0;
    cobaias = 0;

    for(int i=0;n>i;i++){
        printf("Quantidade de cobaias:");
        scanf("%d", &qtd);
        fseek(stdin,0,SEEK_END);
        printf("Tipo de cobaia:");
        scanf("%c", &op);

        cobaias = cobaias + qtd;
        if(op == 'C'){
            Tcoelhos = Tcoelhos + qtd;
        }else{
            if(op == 'R'){
                Tratos = Tratos + qtd;
            }else{
                if(op == 'S'){
                   Tsapos = Tsapos + qtd;
                }
            }
        }
    }

    printf("RELATORIO FINAL:\n");

    printf("Total: %d cobaias\n", cobaias);

    printf("Total de coelhos: %d\n", Tcoelhos);
    printf("Total de ratos: %d\n", Tratos);
    printf("Total de sapos: %d\n", Tsapos);

    Pcoelhos = (Tcoelhos*100)/cobaias;
    Pratos = (Tratos*100)/cobaias;
    Psapos = (Tsapos*100)/cobaias;
    printf("Percentual de coelhos: %.2lf\n", Pcoelhos);
    printf("Percentual de ratos: %.2lf\n", Pratos);
    printf("Percentual de sapos: %.2lf\n", Psapos);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , m , h ;
    double soma_m , maior , menor;

    printf("Quantas pessoas serão digitadas?");
    scanf("%d", &x);

    double altura[x];
    char genero[x];
    for(int i=0;i<x;i++){
        printf("Altura da %da pessoas:", i+1);
        scanf("%lf", &altura[i]);
        printf("Genero da %da pessoa:", i+1);
        fseek(stdin, 0,SEEK_END);
        scanf("%c", &genero[i]);
    }

    maior = altura[0];
    menor = altura[0];
    for(int i=0;i<x;i++){
            if(altura[i] < menor){
                menor = altura[i];
            }
            if(altura[i] > maior){
                maior = altura[i];
            }
    }
    printf("Menor altura = %.2lf\n", menor);
    printf("Maior altura = %.2lf\n", maior);

    m = 0;
    h = 0;
    soma_m = 0;
    for(int i=0;i<x;i++){
            if(genero[i] == 'F'){
                soma_m = soma_m + altura[i];
                m++;
            }else{
                if(genero[i] == 'M'){
                    h++;
            }
        }
    }
    printf("Media das alturar das mulheres = %.2lf\n",(double)  (soma_m/m) );
    printf("Numero de homens = %d\n", h);

    return 0;
}

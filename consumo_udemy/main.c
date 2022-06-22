#include <stdio.h>
#include <stdlib.h>

int main()
{
    double medio , gasto ;
    int distancia ;

    printf("Distancia percorrida:");
    scanf("%d", &distancia);

    printf("Combustivel gasto:");
    scanf("%lf", &gasto);

    medio = distancia/gasto;
    printf("Consumo medio = %.4lf", medio);

    return 0;
}

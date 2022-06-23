#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a , b , c , delta ;
    double X1 , X2 ;

    printf("Coeficiente a:");
    scanf("%d", &a);
    printf("Coeficiente b:");
    scanf("%d", &b);
    printf("Coeficiente c:");
    scanf("%d", &c);

    delta = b*b -4*a*c;

    if(delta <= 0 ){
        printf("Esta equacao nao possui raizes reais\n");
    }else{
        X1 = (b - sqrt(delta))/(2*a);
        printf("X1 = %lf\n", X1);
        X2 = (b + sqrt(delta))/(2*a);
        printf("X2 = %lf", X2);
    }

    return 0;
}

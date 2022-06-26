#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    double m1 , m2 , m3 , media ;

    printf("Quantos casos voce vai digitar?");
    scanf("%d", &x);

    for(int i=0;i<x;i++){

        printf("Digite tres numeros:\n");
        scanf("%lf %lf %lf", &m1 , &m2 , &m3);

        media = (2*m1 + 3*m2 + 5*m3)/(5 + 3 + 2);
        printf("MEDIA = %.2lf\n", media);
    }

    return 0;
}

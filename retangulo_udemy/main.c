#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double area, per, diag, b, h ;

    printf("Base do rentagulo:");
    scanf("%lf", &b);
    printf("\nAltura do retangulo:");
    scanf("%lf", &h);

    area = (b*h)/2 ;
    per = b*2+h*2 ;
    diag = sqrt(b*b+h*h);

    printf("AREA = %.2lf\n", area);
    printf("PERIMETRO = %.2lf \n", per);
    printf("DIAGONAL = %.2lf", diag);


    return 0;
}

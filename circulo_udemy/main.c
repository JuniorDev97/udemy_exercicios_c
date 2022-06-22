#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r , area ;

    printf("Digite o valor do raio do circulo:");
    scanf("%lf", &r);

    area = 3.14*(r*r);
    printf("AREA = %.2lf", area);
    return 0;
}

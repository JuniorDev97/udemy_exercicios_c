#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A ,B , C, triangulo , quadrado , trapezio;

    printf("Digite a medida A:");
    scanf("%lf", &A);

    printf("Digite a medida B:");
    scanf("%lf", &B);

    printf("Digite a medida C:");
    scanf("%lf", &C);

    quadrado = A*A;
    triangulo = (A*B)/2;
    trapezio = (A + B)*C/2;

    printf("AREA DO QUADRADO = %.2lf\n", quadrado);
    printf("AREA DO TRIANGULO = %.2lf\n", triangulo);
    printf("AREA DO TRAPEZIO = %.2lf\n", trapezio);

    return 0;
}

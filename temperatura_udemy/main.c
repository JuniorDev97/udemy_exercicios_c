#include <stdio.h>
#include <stdlib.h>

int main()
{
    double c , f ;
    char  op , C , F ;

    printf("Voce vai digitar a temperatura em qual escala (C/F)?");
    scanf("%c", &op);

    if(op == 'C'){
        printf("Digite a temperatura em Celsius:");
        scanf("%.2lf", &c);
        f = c*1.8 + 32 ;
        printf("A temperatura equivalente em Fahrenheit: %lf", f);
    }else{
        if(op == 'F'){
            printf("Digite a temperatura em Fahrenheit:");
            scanf("%.2lf", &f);
            c = (f - 32)/1.8;
            printf("A temperatura equivalente em Celsius: %lf", c);
        }
    }
    return 0;
}

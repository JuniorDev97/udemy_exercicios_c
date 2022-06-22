#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pagamento , valorH ;
    char nome[50];
    int horaT;

    printf("Nome:");
    fseek(stdin , 0,SEEK_END);
    gets(nome);

    printf("Valor por hora:");
    scanf("%lf", &valorH);

    printf("Horas trabalhadas:");
    scanf("%d", &horaT);

    pagamento = (horaT*valorH);
    printf("O pagamento para %s deve ser %.2lf", nome , pagamento);

    return 0;
}

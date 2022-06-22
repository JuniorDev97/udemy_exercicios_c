#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor , comprimento , largura , precoTe , areaTe;

    printf("Digite a largura do terreno:");
    scanf("%f", &largura);

    printf("\nDigite o comprimento do terreno:");
    scanf("%f", &comprimento);

    printf("\nDigite o valor do metro quadrado:");
    scanf("%f", &valor);

    areaTe = largura * comprimento ;
    precoTe = valor * areaTe ;

    printf("\n");

    printf("Area do terreno = %.2f\n", areaTe );
    printf("Preco do terreno = %.2f\n", precoTe);

    return 0;
}

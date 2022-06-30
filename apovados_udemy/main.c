#include <stdio.h>
#include <stdlib.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer , int length){
    fgets(buffer ,length ,stdin);
    strtok(buffer, "\n");
}

int main()
{
    int x ;
    double media;

    printf("Quantos alunos serao digitados?");
    scanf("%d", &x);

    char nome[x][50];
    double n1[x],n2[x];

    for(int i=0;i<x;i++){
            printf("Digite nome, primeira e segunda nota do %d aluno:\n", i+1);
            limpar_entrada();
            ler_texto(nome[i],50);
            scanf("%lf", &n1[i]);
            scanf("%lf", &n2[i]);
    }
    printf("Alunos Aprovados:\n");
    for(int i=0;i<x;i++){
            media = (n1[i] + n2[i])/2;
            if(media >= 6){
                printf("%s\n", nome[i]);
            }
    }
    return 0;
}

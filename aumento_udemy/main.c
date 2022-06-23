#include <stdio.h>
#include <stdlib.h>

int main()
{
  double sal , Nsal , aumento ;
  int porcentagem  ;

  printf("Digite o salario da pessoa:");
  scanf("%lf", &sal);

    if(sal > 0 && sal <= 1000){
        porcentagem = 20;
        aumento = (sal*porcentagem)/100;
        Nsal = sal + aumento;
    }else{
        if(sal < 3000){
            porcentagem = 15;
            aumento = (sal*porcentagem)/100;
            Nsal = sal + aumento;
        }else{
            if(sal< 8000){
                porcentagem = 10;
                aumento = (sal*porcentagem)/100;
                Nsal = sal + aumento;
            }else{
                porcentagem = 5;
                aumento = (sal*porcentagem)/100;
                Nsal = sal + aumento;
            }
        }
    }

    printf("Novo salario = %.2lf\n" , Nsal);
    printf("Aumento = %.2lf\n", aumento);
    printf("Porcentagem = %d ", porcentagem);

    return 0;
}

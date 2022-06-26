#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;

    printf("Dese a tabuada para qual valor?");
    scanf("%d", &x);

    for(i=1;i <= 10;i++){
        printf("%d x %d = %d\n", x , i , i*x);
    }
    return 0;
}

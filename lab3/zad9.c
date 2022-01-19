#include <stdio.h>
#include <stdlib.h>

int zad9()
{

    int n,i,j;
    scanf("%d",&n);

    if(n>=2){
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if(j < (n-(i-1))){
                printf(" ");
            } else {
                printf("*");
            }
            }
            printf("\n");
        }
      }else {
        printf("Nevaliden vlez");
      }


    return 0;
}



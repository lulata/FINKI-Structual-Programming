#include <stdio.h>
#include <stdlib.h>

int zad8()
{
    int n,i,j;
    scanf("%d",&n);

    if(n>=5 && n%2==1){
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if( (i==j) || ((i+j) == (n+1)) || i==1 || i== n){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf(" \n");
        }
      }

    return 0;
}

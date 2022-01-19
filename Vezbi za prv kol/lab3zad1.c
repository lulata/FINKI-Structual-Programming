#include <stdio.h>
#include <stdlib.h>

int lab3zad1()
{
    int n,i,j;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i==j) || ((i+j) == (n+1)) || j==1 || j== n){
                printf("*");
            }else{
                printf(" ");
            }
        }printf(" \n");
    }

  return 0;
}


#include <stdio.h>
#include <stdlib.h>

int lab3zad8()
{
  int i,j,n;
  scanf("%d", &n);
  if(n>=5){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n || i==j || j+i==n+1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
  }
  return 0;
}


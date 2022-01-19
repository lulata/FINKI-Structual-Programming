#include <stdio.h>
#include <stdlib.h>

int lab4zad1()
{
   int n,i;
   int a[100];
   scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }for(i=0;i<n;i++){
        if(a[i]%2==0){
            a[i]=a[i]+1;
        }else if (a[i]%2!=0){
            a[i]=a[i]-1;
        }
        printf("%d ", a[i]);
    }
  return 0;
}


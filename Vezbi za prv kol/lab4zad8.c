#include <stdio.h>
#include <stdlib.h>

int lab4zad8()
{
   int n,i,j,k,temp=0;
   int a[100],b[100];
   scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }scanf("%d",&k);
    for(i=0;i<n;i++){
       if(a[i]<k){
            b[temp]=a[i];
            temp++;
        }
    }for(i=0;i<n;i++){
        if(a[i]>=k){
            b[temp]=a[i];
            temp++;
        }
    }for(i=0;i<n;i++){
        printf("%d  ",b[i]);
    }

  return 0;
}


#include <stdio.h>
#include <stdlib.h>

int lab4zad4()
{
   int n,i,k,m,temp,j;
   int a[100];
   scanf("%d",&m);

    for(j=m;j>0;--j){
        scanf("%d",&n);
      for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        }scanf("%d", &k);
        for(i=k-1; i<n; i+=k) {
        temp = a[i-1];
        a[i-1] = a[i];
        a[i] = temp;
        }for(i=0;i<n; i++) {
        printf("%d ", a[i]);
        }printf("\n");
    }

  return 0;
}


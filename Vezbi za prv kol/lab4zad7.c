#include <stdio.h>
#include <stdlib.h>

int lab4zad7()
{
   int n,i,temp,j;
   int a[100];
   scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }for(i=0;i<n;i++){
       for(j=i+1; j<n; j++){
            if(a[j] <a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }

  return 0;
}



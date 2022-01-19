#include <stdio.h>
#include <stdlib.h>

int zad1()
{
   int a,b,c,n,i,d,min=100000;
   scanf("%d",&n);

   for(i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        d=abs(a-b)+abs(b-c);
        if(d<min){
            min=d;
        }
   }printf("%d",min);
    return 0;
}

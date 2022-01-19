#include <stdio.h>
#include <stdlib.h>

int lab5zad1()
{
  int n,d,i,min=10000,a,b,c;
  scanf("%d", &n);

  for(i=0;i<n;i++){
    scanf("%d %d %d",&a,&b,&c);
    d=abs(a-b)+ abs(b-c);
    if(d<min){
        min=d;
    }
  }printf("%d",min);
  return 0;
}


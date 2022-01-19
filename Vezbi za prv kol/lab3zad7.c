#include <stdio.h>
#include <stdlib.h>

int lab3zad7()
{
  int m,max=1,min=10000,n,raz;
  scanf("%d",&n);

  for(int i=0;i<n;i++){
    scanf("%d",&m);
    if(m>max){
        max=m;
    }if (m<min){
        min=m;
    }
  }raz=max-min;
  printf("Najgolema Razilika: %d",raz);

  return 0;
}


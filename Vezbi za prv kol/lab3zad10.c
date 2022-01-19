#include <stdio.h>
#include <stdlib.h>

int lab3zad10()
{
  int m,n,cifra,i,odnopaku,j,zbir=0;
  scanf("%d %d", &n, &m);

  for(i=n;i<=m;i++){
    j=i;
    odnopaku=0;
    while(j){
        cifra=j%10;
        odnopaku= (odnopaku * 10) + cifra;
        j/=10;
    }if(i>=odnopaku){
        printf("%d\n",i);
        zbir++;
    }
  }printf("Vkupno: %d", zbir);

  return 0;
}

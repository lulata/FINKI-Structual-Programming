#include <stdio.h>
#include <stdlib.h>

int lab5zad3()
{
  int n,i,vkupno=0,a[1000],dzoker=0;
  while(scanf("%d",&n)){
    if(n>=1 && n<=90){
        a[i]=n;
        i++;
        vkupno++;
    }else{
        break;
    }
  }for(i=0;i<7;i++){
    dzoker=dzoker*10 + a[i]%10;
  }for(i=7;i<vkupno;i++){
    dzoker+=a[i];
  }printf("%d ",dzoker);
  return 0;
}


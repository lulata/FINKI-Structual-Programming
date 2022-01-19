#include <stdio.h>
#include <stdlib.h>

int lab5zad2()
{
  int a,b,i,j,cifra1,cifra2,temp,postoj;
  scanf("%d %d",&a,&b);
  temp=b;
  while(a>0){
    cifra1=a%10;
    b=temp;
    postoj=0;
    while(b>0){
        cifra2=b%10;
        if(cifra1==cifra2){
            postoj=1;
        }
        b/=10;
    }if(postoj==1){
        printf("DA");
        break;
    }if(postoj!=1){
        printf("NE");
        break;
    }
    a/10;
  }
  return 0;
}


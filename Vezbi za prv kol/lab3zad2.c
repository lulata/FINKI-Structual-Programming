#include <stdio.h>
#include <stdlib.h>

int lab3zad2()
{
  int a,p,zbir,cifra,i,j,brojac=0;
  float procent;
  scanf("%d %d", &a, &p);

  for(i=a;i>0;i--){
    j=i;
    zbir=0;
    while(j>0){
        cifra=j%10;
        zbir+=cifra;
        j/=10;
    }procent= (i*p)/100.0;
    if(procent==zbir){
        brojac++;
        if(brojac<=5){
            printf("%d \n",i);
        }
    }
  } if(brojac==0){
        printf("NEMA");
    }

  return 0;
}

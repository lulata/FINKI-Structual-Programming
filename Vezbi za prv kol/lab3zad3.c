#include <stdio.h>
#include <stdlib.h>

int lab3zad3()
{
    int a,b,cifra,i,j,zbir,vk=0;
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++){
        zbir=0;
        j=i;
        while(j>0){
            cifra=j%10;
            if(cifra%2==0){
            zbir+=cifra;
            }
            j/=10;
        }
        if(zbir>0 && zbir%4==0){
            printf("%d \n",i);
            vk++;
        }
    }printf("Vkupno: %d",vk);

  return 0;
}

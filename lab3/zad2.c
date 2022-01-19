#include <stdio.h>
#include <stdlib.h>

int zad2(){
    int i,a,p,cifra,zbir,s=0;
    scanf("%d %d",&a,&p);
    for(;a>0;a--)
    {
        zbir=0;
        i=a;
        while(i>0)
        {
            cifra=i%10;
            zbir+=cifra;
            i/=10;
        }
        if(zbir==(a*p)/100 && (a*p)%100==0){
                s++;
            if(s<=5){
            printf("%d \n",a);
            }
        }
    }

    if(s==0){
        printf("NEMA");
    }
    return 0;
}




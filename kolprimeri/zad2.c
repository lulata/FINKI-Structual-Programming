#include <stdio.h>
#include <stdlib.h>

int zad2()
{
   int a,b,cifraA=0,cifraB=0,flag=0,postoj=0,temp;
   scanf("%d %d",&a,&b);
    temp=b;
    while(a>0){
        cifraA=a%10;
        b=temp;
        flag=0;
        while(b>0){
            cifraB=b%10;
                if(cifraA==cifraB){
                    flag=1;
                    postoj++;
                }b/=10;
        }if(flag==0){
            printf("NE");
            postoj=0;
            break;
        }a/=10;
    }if(postoj>=1){
        printf("DA");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int function(int n) {
    int cifra1,cifra2;
    if(n<=9 && n>=0){
        return 1;
    }else{
        cifra1=n%10;
        cifra2=(n/10)%10;
        if(cifra1>cifra2){
            return function(n/10);
        }
        return 0;
    }
    return 1;
}

int zad5()
{
   int n,m,i,rez=0;
   scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%d", &m);
    rez= function(m);
    if(rez){
       printf("DA\n");
    }else {
        printf("NE\n");
    }
   }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
int functionlab7zad1(int n) {
    int cifra1,cifra2;
    if(n<10){
        return 1;
    }else{
        cifra1=n%10;
        cifra2=(n/10)%10;
        if(cifra1<cifra2){
            return functionlab7zad1(n/10);
        }
        return 0;
    }
    return 1;
}


int lab7zad1()
{
   int n,m,i,rez;
   scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%d", &m);
    rez= functionlab7zad1(m);
    printf("%d \n", rez);
   }
    return 0;
}

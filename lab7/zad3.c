#include <stdio.h>
#include <stdlib.h>
int f(int n) {
    if(n<10){
        return n/10;
    }
    return (n/10)%10+ f(n/100);
}

int zad3()
{
   int n;
   scanf("%d",&n);
    printf("%d \n", f(n));
    return 0;
}


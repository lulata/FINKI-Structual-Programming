#include <stdio.h>
#include <stdlib.h>
int flab7zad3(int n) {
    if(n<10){
        return n/10;
    }
    return (n/10)%10+ flab7zad3(n/100);
}

int lab7zad3()
{
   int n;
   scanf("%d",&n);
    printf("%d \n", flab7zad3(n));
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
int proizvodlab7zad4(int n) {
    if(n==0){
        return 1;
    }
    return (n/10)%10* proizvodlab7zad4(n/100);
}

int lab7zad4()
{
   int n;
   scanf("%d",&n);
    printf("%d \n", proizvodlab7zad4(n));
    return 0;
}

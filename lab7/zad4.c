#include <stdio.h>
#include <stdlib.h>
int proizvod(int n) {
    if(n==0){
        return 1;
    }
    return (n/10)%10* proizvod(n/100);
}

int zad4()
{
   int n;
   scanf("%d",&n);
    printf("%d \n", proizvod(n));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int triagolnik(int n) {
    if(n>0){
       triagolnik(n-1);
        printf("%d ", n);
    }
}
void novRed(int n){
    if (n>0){
        novRed(n-1);
        triagolnik(n);
        printf("\n");
    }
}
int zad9()
{
   int n;
   scanf("%d",&n);
   novRed(n);
    return 0;
}


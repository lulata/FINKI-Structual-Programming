#include <stdio.h>
#include <stdlib.h>
int triagolnik8(int n) {
    if(n>0){
       triagolnik(n-1);
        printf("%d ", n);
    }
}
void novRed8(int n){
    if (n>0){
        triagolnik(n);
        printf("\n");
        novRed(n-1);
    }
}
int zad8()
{
   int n;
   scanf("%d",&n);
   novRed(n);
    return 0;
}

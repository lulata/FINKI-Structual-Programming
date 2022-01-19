#include <stdio.h>
#include <stdlib.h>
int triagolniklab7zad8(int n) {
    if(n>0){
       triagolniklab7zad8(n-1);
        printf("%d ", n);
    }
}
void novRedlab7zad8(int n){
    if (n>0){
        triagolniklab7zad8(n);
        printf("\n");
        novRedlab7zad8(n-1);
    }
}
int lab7zad8()
{
   int n;
   scanf("%d",&n);
   novRedlab7zad8(n);
    return 0;
}

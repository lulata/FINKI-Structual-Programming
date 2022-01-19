#include <stdio.h>
#include <stdlib.h>
int triagolniklab7zad9(int n) {
    if(n>0){
       triagolniklab7zad9(n-1);
        printf("%d", n);
    }
}
void novRedlab7zad9(int n){
    if (n>0){
        novRedlab7zad9(n-1);
        triagolniklab7zad9(n);
        printf("\n");
    }
}
int lab7zad9()
{
   int n;
   scanf("%d",&n);
   novRedlab7zad9(n);
    return 0;
}

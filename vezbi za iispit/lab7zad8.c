#include <stdio.h>
#include <stdlib.h>
int triagolnikl7z8(int n) {
    if(n>0){
       triagolnikl7z8(n-1);
        printf("%d ", n);
    }
}
void novRedl7z8(int n){
    if (n>0){
        triagolnikl7z8(n);
        printf("\n");
        novRedl7z8(n-1);
    }
}
int l7z8()
{
   int n;
   scanf("%d",&n);
   novRedl7z8(n);
    return 0;
}

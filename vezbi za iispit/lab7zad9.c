#include <stdio.h>
#include <stdlib.h>
int triagolnikl7z9(int n) {
    if(n>0){
       triagolnikl7z9(n-1);
        printf("%d", n);
    }
}
void novRedl7z9(int n){
    if (n>0){
        novRedl7z9(n-1);
        triagolnikl7z9(n);
        printf("\n");
    }
}
int l7z9()
{
   int n;
   scanf("%d",&n);
   novRedl7z9(n);
    return 0;
}

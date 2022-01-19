#include <stdio.h>
#include <stdlib.h>

int zad3()
{
    int n,i,j;
    int a[100];
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d", &a[i]);
    }for(i=1;i<=n;i++){
        printf("%d ",a[i]);
    }printf("\n");
    for(i=n;i>0;i--){
        printf("%d ", a[i]);
    }printf("\n");
     for (i=n;i>0;i-=2){
        printf("%d ", a[i]);
    }printf("\n");


    if(n % 2 == 0){
        for(i = 2; i <= n; i+=2){
            printf("%d ", a[i]);
        }

    }else{
        for(i = 1; i <= n; i+=2){
            printf("%d ", a[i]);
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int zad1()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            scanf("%d", &a[i]);
    }for(i=1;i<=n;i++){
        if(a[i]%2==0){
            a[i]=a[i]+1;
        }else if(a[i]%2!=0){
            a[i]=a[i]-1;
        }
        printf("%d ",a[i]);
    }

    return 0;
}

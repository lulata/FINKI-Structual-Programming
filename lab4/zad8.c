#include <stdio.h>
#include <stdlib.h>
int zad8(){
int i, n,a[100],b[100],m,k,j,temp=0;
scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }scanf("%d", &k);
    for(i=0; i<n; i++){
        if(a[i]<k){
            b[temp]=a[i];
            temp++;
        }
    }for(i=0;i<n;i++){
        if(a[i]>=k){
            b[temp]=a[i];
            temp++;
        }
    }
    for(i=0;i<n; i++){
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}

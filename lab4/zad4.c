#include <stdio.h>
#include <stdlib.h>
int zad4(){
int i, n,a[100],m,k,j,temp;
scanf("%d",&n);
for(;n>0;--n){
    scanf("%d",&m);
      for(i=0;i<m;i++){
        scanf("%d", &a[i]);
    }scanf("%d", &k);
    for(i=k-1; i<m; i+=k) {
        temp = a[i-1];
        a[i-1] = a[i];
        a[i] = temp;
    }
    for(i=0;i<m; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int zad5(){
    int i,j,n,a[100][100],L=0,maxL=0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }for(i=0; i<n; i++){
        for(j=0;j<n;j++){
            if(a[i][j]< a[i][j+1]){
                L++;
            }else{
            if(L>maxL){
                maxL=L;
                L=0;
            }else{
                L=0;
            }
        }
        }

    }

        printf("%d \n", maxL+1);

    return 0;
}

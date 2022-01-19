#include <stdio.h>
#include <stdlib.h>

int lab6zad2()
{
    int n,i,j,d=0,k=0,gl=0,sp=0,pv=0,vt=0;
    int a[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if (i == j){
                gl+=a[i][j];
            }
            if (i + j == n - 1){
                sp+=a[i][j];
            }
            if (j == 0){
                pv+=a[i][j];
            }
            if (j == n-1){
                vt+=a[i][j];
            }
        }
    }d=gl-sp;
    k=pv-vt;
    printf("%d\n%d",d,k);

    return 0;
}

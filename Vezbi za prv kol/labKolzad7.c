#include <stdio.h>
#include <stdlib.h>
int labKolzad7(){
    int n,j,i,k;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1 || j==n){
                printf("%%");
            }if((i==1 || i==n) && (i!=j && i!=j+1) && (i!=(j==n)) ){
                printf("@");
            }if(i!=1 && j!=1 && j!=n && i!=n){
                printf(".");
            }
        }
        printf(" \n");
    }
    return 0;
}



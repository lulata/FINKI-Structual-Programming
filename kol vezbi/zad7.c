#include <stdio.h>
#include <stdlib.h>
int zad7(){
    int i, j, n;
    scanf("%d", &n);
    if(n>2){
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if (j==1 || j==n ){
                printf("%%");
            }if((i==1 || i==n) &&(i!=j && i!=j+1 ) && (i!=(j==n)) ){
                printf("@");
            }if( i!=1 && i!=n && j!=1 && j!=n ){
                printf(".");
            }
        }
        printf("\n");
    }
}
    return 0;
}



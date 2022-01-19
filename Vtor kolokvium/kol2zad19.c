#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kol2zad19(){
    int n,i,j;
    scanf("%d", &n);
    float x=0,y=0;
    float a[100][100],b[100][100];

    if (n < 2){
        return 0;
    }for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
            scanf("%f", &a[i][j]);
        }
    }for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i > j){
                x += a[i][j];
            }if (i+j > n-1){
                y += a[i][j];
            }
        }
    }for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if ((i==j) && (i+j==n-1)){
                b[i][j] = x+y;
            }else if (i == j){
                b[i][j] = x;
            }else if (i+j == n-1){
                b[i][j] = y;
            }else{
                b[i][j] = 0;
            }
        }
    }for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%.1f ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

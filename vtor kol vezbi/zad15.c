#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zad15(){
    int n,i,j;
    scanf("%d", &n);
    int m=2*n;
    int a[100][100], b[100][100];
     for (int i = 0; i < n; i++){
        for (int j  = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }for (i = 0; i < n; i++){
        for (j = 0; j < m/2; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }for (i = 0; i < n; i++){
        for (j = m/2; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}


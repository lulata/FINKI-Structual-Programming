#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float averageOfRowkol2zad8(int a[100][100], int i, int j, int m){
    float sum = 0;
    for (j = 0; j < m; j++){
        sum += a[i][j];
    }
    return sum / m;
}
int kol2zad8(){
    int n,m,i,j;
    float avg, razlika, maxRazlika;
    scanf("%d%d", &n,&m);
    int a[100][100],b[100];
    for (int i = 0; i < n; i++){
        for (int j  = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }for ( i = 0; i < n; i++){
        maxRazlika = -1;
        for ( j = 0; j < m; j++){
            razlika = fabs(a[i][j] - averageOfRowkol2zad8(a,i,j,m));
            if (maxRazlika < razlika){
                maxRazlika = razlika;
            }
        }
        for (int j = 0; j < m; j++){
            if (fabs(a[i][j] - averageOfRowkol2zad8(a,i,j,m)) == maxRazlika){
                b[i] = a[i][j];
                break;
            }
        }

    }for (int i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
    return 0;
}


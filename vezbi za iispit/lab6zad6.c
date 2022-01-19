#include <stdio.h>
#include <stdlib.h>
void readMatrixlab6zad6(int a[100][100], int n, int m)
{
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
}
int lab6zad6()
{
    int a[100][100],b[100][100];
    int i,j,n,m;
    int min, sum=0, index=0, flag=1;
    scanf("%d %d", &n, &m);
    readMatrixlab6zad6(a,n,m);
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            b[i][j] = a[j][i];
        }
    }for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            sum = sum + b[i][j];
        }if (flag){
            flag = 0;
            min = sum;
        }if (sum < min){
            min = sum;
            index = i;
        }
        sum = 0;
    }
    printf("%d ", index);

    return 0;
}

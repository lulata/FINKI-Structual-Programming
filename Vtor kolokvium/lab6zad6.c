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
    int n,i,j,m;
    int sum=0,min,flag=1,red=0;
    int a[100][100],b[100][100];
    scanf("%d%d", &n,&m);

    readMatrixlab6zad6(a,n,m);
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            b[i][j] = a[j][i];
        }
    }for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
           sum+=b[i][j];
        }if(flag){
            min=sum;
            flag=0;
        }if(sum<min){
            min=sum;
            red=i;
        }
        sum=0;
    }
    printf("%d",red);
    return 0;
}


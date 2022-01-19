#include <stdio.h>
#include <stdlib.h>
int lab6zad4()
{
    int a[100][100],b[2][2];
    int i,j,n;
    int suma1=0,suma2=0,suma3=0,suma4=0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }for (i=0;i<(n/2);i++){
        for (j=0;j<(n/2);j++){
            suma1+=a[i][j];
        }
    }b[0][0] = suma1;
    for (i=n-1;i>(n/2);i--){
        for (j=0;j<(n/2);j++){
            suma2+=a[i][j];
        }
    }b[1][0] = suma2;
    for (i=0;i<(n/2);i++){
        for (j=n-1;j>(n/2);j--){
            suma3+=a[i][j];
        }
    }b[0][1] = suma3;
    for (i=n-1;i>(n/2);i--){
        for (j=n-1;j>(n/2);j--){
            suma4+=a[i][j];
        }
    }b[1][1] = suma4;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

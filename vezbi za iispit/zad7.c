#include <stdio.h>
#include <stdlib.h>

int zad7(){
    int n,m,brojac=0,i,j;
    scanf("%d %d", &n,&m);
    int a[100][100],b[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for ( i = 0; i < n; i++){
        for ( j = 1; j < m-1; j++){
            if ((a[i][j-1] == 1) && (a[i][j] == 1) && (a[i][j+1] == 1)){
                brojac++;
                j += 3;
                break;
            }
        }
    }for ( i = 0; i < m; i++){
        for ( j = 0; j < n; j++){
            b[i][j] = a[j][i];
        }
    }for ( i = 0; i < m; i++){
        for ( j = 1; j < n-1; j++){
            if ((b[i][j-1] == 1) && (b[i][j] == 1) && (b[i][j+1] == 1)){
                brojac++;
                j += 3;
                break;
            }

        }
    }
    printf("%d", brojac);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kol2zad18(){
    int n,m,sumaLevo,sumaDesno,i,j,razlika;
    scanf("%d%d", &n,&m);
    int a[100][100];
    for ( i = 0; i < n; i++){
        for ( j  = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }for (i = 0; i < n; i++){
        sumaLevo = 0;
        sumaDesno = 0;
        for (j  = 0; j < m/2; j++){
            sumaLevo += a[i][j];
        }

        if (m%2 == 0){
            for (j  = m/2; j < m; j++){
                sumaDesno += a[i][j];
            }
        }else{
            for (j  = (m/2)+1; j < m; j++){
                sumaDesno += a[i][j];
            }
        }for (j = 0; j < m; j++){
            if (m%2 == 0){
                if (j == (m/2)-1 || j == (m/2)){
                    a[i][j] = abs(sumaLevo-sumaDesno);
                }
            }else{
                if (j == (m/2)){
                    a[i][j] = abs(sumaLevo-sumaDesno);
                }
            }
        }
    }for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

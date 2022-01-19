#include <stdio.h>
#include <stdlib.h>

int zad14(){
    int n,m,x,suma=0,brojac=0;
    int a[100][100],b[100];
    scanf("%d", &x);
    scanf("%d%d", &n,&m);
     for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }for (int i = 0; i < n; i ++){
        suma = 0;
        for (int j = 0; j < m; j++){
            suma += a[i][j];

        }
        b[brojac] = suma;
        brojac++;
    }for (int i = 0; i < brojac; i++){
        for (int j = 0; j < m; j++){
            if (b[i] > x){
                a[i][j] = 1;
            }else if (b[i] < x){
                a[i][j] = -1;
            }else if (b[i] == x){
                a[i][j] = 0;
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

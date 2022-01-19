#include <stdio.h>
#include <stdlib.h>

int kol2zad4(){
    int n,m,k,q,kv1=0,kv2=0,kv3=0,kv4=0;
    int a[100][100];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }scanf("%d %d", &k,&q);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (i < k && j < q){
                kv2 += a[i][j];
            }if (i < k && j >= q){
                kv1 += a[i][j];
            }if (i >= k && j < q){
                kv3 += a[i][j];
            }if (i >= k && j>= q){
                kv4 += a[i][j];
            }
        }
    }
    printf("%d %d %d %d", kv1,kv2,kv3,kv4);
    return 0;
}

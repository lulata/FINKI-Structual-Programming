#include <stdio.h>
#include <stdlib.h>

int zad3()
{
    int n,i,j;
    int max=1,dolzina=1;
    int a[100][100];
    scanf("%d", &n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (a[i][j]< a[i][j+1]){
                dolzina++;
                if(dolzina>max){
                    max=dolzina;
                }
            }
        }
         dolzina=1;
    }printf("%d", max);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int lab6zad3()
{
    int n,i,j;
    int dol,max=-1;
    int a[100][100];
    scanf("%d", &n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
               if(a[i][j]>a[i][j+1]){
                dol++;
                if(dol>max){
                    max=dol;
                }
               }
        }
        dol=0;
    }
    printf("%d",max);
    return 0;
}

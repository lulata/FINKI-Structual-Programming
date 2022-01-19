#include <stdio.h>
#include <stdlib.h>
int zad1(){
    int n,m,j=0,blag=-1,i;
    scanf("%d %d", &n,&m);

    for(i=n;i<=m;i++){
        j = i;
        blag=1;
        while(j>0){
            if((j%10)%2!=0){
                blag=0;
            }
            j/=10;

        }if (blag){
            printf("%d", i);
            return 0;
        }

    }
    printf("NE\n");
    return 0;
}

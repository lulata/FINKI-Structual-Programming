#include <stdio.h>
#include <stdlib.h>
int labKolzad1(){
    int n,m,j=0,blag=1,i,cifra;
    scanf("%d %d", &n,&m);

    for(i=n;i<=m;i++){
        j= i;
        blag=1;
        while(j){
            if((j%10)%2!=0){
                blag=0;
            }
            j/=10;
        }if(blag==1){
            printf("%d", i);
            return 0;
        }
    }if(blag==0){
    printf("NE\n");
    }
    return 0;
}



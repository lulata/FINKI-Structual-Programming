#include <stdio.h>
#include <stdlib.h>

int zad10()
{
    int n,m,i,cifra,op,s=0,j;
    scanf("%d %d",&n, &m);

    for(i=n; i<=m;i++){
        j=i;
        op=0;
        cifra=0;
        while(j >0){
            cifra=j%10;
            op= (op * 10) + cifra;
            j/=10;
        }if(i>=op){
            printf("%d\n",i);
            s++;
        }
    }
    printf("Vkupno: %d",s);

    return 0;
}

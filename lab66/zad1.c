#include <stdio.h>
#include <stdlib.h>

int edinici(int p[100][100],int i,int j) {
    int broj=0,rab1,rab2,r1,r2;
    if(i>0){
        rab1=i-1;
    }else{
        rab1=i;
    }if(j>0){
        rab2=j-1;
    }else{
        rab2=j;
    }for(r1=rab1;r1<=i+1;r1++){
        for (r2=rab2;r2<=j+1;++r2) {
            if(p[r1][r2]==1)
                broj++;
        }
    }
    return broj;
}

int zad1(){
    int a[100][100]={0};
    int n,m,i,j;
    scanf("%d %d",&m,&n);
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0)
                printf("%d ",edinici(a,i,j));
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}

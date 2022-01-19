#include <stdio.h>
#include <stdlib.h>


int zad2i(){
    int a[100][100];
    int i,m,n,j,k,l,flag=1,max;
    scanf("%d%d",&m,&n);

    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",a[i][j]);
            if(flag){
                max=a[i][j];
                flag=0;
            }if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }scanf("%d%d",&k,&l);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i<k&&j>l){
                a[i][j]=max;
            }else if(i>k && j<l){
                a[i][j]=0;
            }
        }
    }for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int lab6zad2()
{
    int n,i,j;
    int glavna=0, sporedna =0,dijagonala,prva=0,posledna=0,koloni;
    int a[100][100];
    scanf("%d", &n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
                if(i==j){
                    glavna+=a[i][j];
                } if(i+j==n-1){
                    sporedna+=a[i][j];
                }if(j==0){
                    prva+=a[i][j];
                } if(j==n-1){
                    posledna+=a[i][j];
                }
        }
    }
    dijagonala= glavna - sporedna;
    koloni = prva - posledna;
    printf("%d\n%d",dijagonala,koloni);
    return 0;
}

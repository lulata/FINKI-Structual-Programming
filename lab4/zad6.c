#include <stdio.h>
#include <stdlib.h>
int zad6()
{
int i, n,a[100],m,ogledalni=0;
scanf("%d",&n);
for(;n>0;n--){
    scanf("%d",&m);
      for(i=0;i<m;i++){
        scanf("%d",&a[i]);
        }ogledalni=0;
        for(i=0;i<(m+1)/2;i++){
            if(a[i]==a[m-i-1]){
                ogledalni+=2;
            }
        }if(m%2!=0){
        ogledalni--;
        }
        printf("%.2f%%\n",((float)ogledalni/m) *100);
    }
    return 0;
}

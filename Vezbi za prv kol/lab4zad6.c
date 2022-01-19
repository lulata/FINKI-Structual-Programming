#include <stdio.h>
#include <stdlib.h>

int lab4zad6()
{
   int n,i,k,m,temp,j,ogledalni=0;;
   int a[100];
   scanf("%d",&m);

    for(j=0;j<m;j++){
        scanf("%d",&n);
      for(i=0;i<n;i++){
        scanf("%d", &a[i]);
        }ogledalni=0;
        for(i=0; i<(n+1)/2; i++) {
            if(a[i]==a[n-i-1]){
                ogledalni+=2;
            }
        }if(n%2!=0){
        ogledalni--;
        }printf("%.2f%%\n",((float)ogledalni/n) *100);
    }

  return 0;
}


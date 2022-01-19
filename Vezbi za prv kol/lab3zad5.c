#include <stdio.h>
#include <stdlib.h>

int lab3zad5()
{
   int n,i;
   float ddv,vkddv=0,m;
   char c;
   scanf("%d",&n);

   for(i=0;i<n;i++){
    scanf("%f %c",&m,&c);
        if(c=='A'){
            ddv+=(m*18)/100;
        }else if (c== 'B'){
            ddv+=(m*5)/100;
        }else if (c=='V'){
            ddv+=m*0;
        }
   }
   vkddv=(ddv*15)/100;
    printf("Total tax return is: %.2f", vkddv);

  return 0;
}


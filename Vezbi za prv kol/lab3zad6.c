#include <stdio.h>
#include <stdlib.h>

int lab3zad6()
{
   int n,m;
   float ddv,vkddv=0,vkIznos=0,maxIznos=0,maxNazad=0,iznos=0;
   char c;
   scanf("%d",&m);
   for(int j=0;j<m;j++){
    scanf("%d",&n);
    vkIznos=0;
       for(int i=0; i<n; i++){
        scanf("%f %c",&iznos,&c);
            vkIznos+=iznos;
            if(c=='A'){
                ddv+=(iznos*18)/100;
            }else if (c== 'B'){
                ddv+=(iznos*5)/100;
            }else if (c=='V'){
                ddv+=iznos*0;
            }vkddv=(ddv*15)/100;
       }if(vkIznos>30000){
            printf("Sum %.0f is bigger than 30000\n",vkIznos);
        }else {
            printf("Total tax return is: %.2f\n",vkddv);
            if(maxNazad<vkddv){
                maxNazad=vkddv;
                maxIznos=vkIznos;
            }
        }
        vkIznos=0;
        vkddv=0;
        ddv=0;
   }
    printf("Max amount of reciept: %.0f. Max tax return for reciepts: %.2f\n",maxIznos,maxNazad);

  return 0;
}

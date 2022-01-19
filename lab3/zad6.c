#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    char vidDdv;
    float ddvnazad,ddv,iznos,vkupnoDanok=0,vkupnoIznos=0,maxIznos=0,maxNazad=0;
    scanf("%d",&m);
     for(int j=0;j<m;j++){
        scanf("%d",&n);
        vkupnoDanok=0;
        vkupnoIznos=0;
        for(int i=0; i<n; i++){
             scanf("%f %c", &iznos, &vidDdv);
             vkupnoIznos+=iznos;
             if( vidDdv == 'A') {
                ddv+=(iznos*18)/100.0;
             }else if( vidDdv == 'B'){
                ddv+=(iznos*5)/100.0;
             }else if( vidDdv == 'C'){
                ddv+=(iznos*0)/100.0;
             }
             ddvnazad= (ddv*15)/100.0;
        }if(vkupnoIznos>30000){
            printf("Sum %.0f is bigger than 30000\n",vkupnoIznos);
        }else{
            printf("Total tax return is: %.2f\n",ddvnazad);
             if(maxNazad<ddvnazad){
                maxNazad=ddvnazad;
                maxIznos=vkupnoIznos;
                }
            }
            vkupnoIznos=0;
            ddvnazad=0;
            ddv=0;
        }

    printf("Max amount of reciept: %.0f. Max tax return for reciepts: %.2f\n",maxIznos,maxNazad);

    return 0;
}

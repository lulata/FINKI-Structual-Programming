#include <stdio.h>
#include <stdlib.h>

int zad5()
{
    int n;
    char vidDdv;
    float ddvnazad,ddv,iznos;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
         scanf("%f %c", &iznos, &vidDdv);
         if( vidDdv == 'A') {
            ddv+=(iznos*18)/100.0;
         }else if( vidDdv == 'B'){
            ddv+=(iznos*5)/100.0;
         }else if( vidDdv == 'C'){
            ddv+=(iznos*0)/100.0;
         }
    }
    ddvnazad= (ddv*15)/100.0;
    printf("Total tax return is: %.2f",ddvnazad);

    return 0;
}


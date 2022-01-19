#include <stdio.h>
#include <stdlib.h>
int sumOfDigits(int number) {
    if(number==0){
        return 0;
    }
    return number%10+ sumOfDigits(number/10);
}

int zad7()
{
   int n,m,i,zbir=0;
   scanf("%d",&n);

   for(i=0;i<n;i++){
    scanf("%d",&m);
    printf("%d\n", sumOfDigits(m));
    zbir+= sumOfDigits(m);
   }
   printf("%d", zbir);
    return 0;
}

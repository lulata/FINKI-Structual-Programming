#include <stdio.h>
#include <stdlib.h>
int sumOfDigitslab7zad7(int number) {
    if(number==0){
        return 0;
    }
    return number%10+ sumOfDigitslab7zad7(number/10);
}

int lab7zad7()
{
   int n,m,i,zbir=0;
   scanf("%d",&n);

   for(i=0;i<n;i++){
    scanf("%d",&m);
    printf("%d\n", sumOfDigitslab7zad7(m));
    zbir+= sumOfDigitslab7zad7(m);
   }
   printf("%d", zbir);
    return 0;
}

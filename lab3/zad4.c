#include <stdio.h>
#include <stdlib.h>

int zad4()
{
    int i,a,b,cifra,j,suma,vk=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        suma=0;
        j=i;
        while(j>0)
        {
            cifra=j%10;
            if(cifra%2==0 && cifra%3!=0)
            {
                suma+=cifra;
            }
            j/=10;
        }
        if ((suma>0)&&(suma%7==0))
        {
            printf("%d \n",i);
            vk++;
        }
    }
    printf("Vkupno: %d",vk);
    return 0;
}

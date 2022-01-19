#include <stdio.h>
#include <stdlib.h>
int razlicen(int i,int j){
    int z;
    while(i){
        z=j;
        while(z){
            if(z%10==i%10)
                return 0;
            else
                z/=10;
        }
        i/=10;
    }
    return 1;

}
int zad8()
{
    int x,n;
    scanf("%d%d",&n,&x);

    for(n--;n>=0;n--){
        if(razlicen(n,x)==1){
            printf("%d",n);
            return 0;
        }
    }
    return 0;
}

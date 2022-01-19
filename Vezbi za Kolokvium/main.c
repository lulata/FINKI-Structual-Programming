#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    scanf("%d %d", &n,&m);

    for(;n<=m;n++){
        if(n%2==0 || n%4==0 || n%6==0 n%8==0){
            printf("%d",n);
        }else{
            printf("nema");
        }
    }


    return 0;
}

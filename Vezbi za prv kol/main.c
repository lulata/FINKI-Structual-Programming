#include <stdio.h>
#include <stdlib.h>
int main()
{
    int z,a,b,i,zbir=0,pati=0;
    scanf("%d",&z);
    a=1;
    b=1;
    for(i=0;a!=0 || b!=0;i++){
        scanf("%d %d",&a,&b);
        zbir=0;
        zbir=a+b;
            if(a!=0 || b!=0){
                if(zbir==z){
                pati++;
            }
        }
    }
    float procent=(pati/((i-1)*1.0))*100;
    printf("Vnesovte %d parovi od broevi chij zbir e %d\nProcentot na parovi so zbir %d e %.2f%%",pati,z,z,procent);

    return 0;
}

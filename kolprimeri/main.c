#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[1000],n,i,vkupnoBrojki=0,dzoker=0;

    while(scanf("%d ",&n)){
        if(1<=n && n<=90){
            a[i]=n;
            i++;
            vkupnoBrojki++;
        }else{
            break;
        }
    }for(i=0;i<7;i++){
        dzoker=dzoker*10+(a[i]%10);
    }for(i=7;i<vkupnoBrojki;i++){
        dzoker+=a[i];
    }printf("%d ",dzoker);
    return 0;
}

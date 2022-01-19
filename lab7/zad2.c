#include <stdio.h>
int NZD(int n,int m){
    if (m == 0) return n;
    return NZD(m, n%m);
}
int main()
{
    int n,m;
    scanf("%d %d", &n,&m);
    printf("%d", NZD(n,m));

    return 0;
}

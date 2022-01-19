#include <stdio.h>
int NZDlab7zad6(int n,int m){
    if (m == 0) return n;
    return NZDlab7zad6(m, n%m);
}
int lab7zad6()
{
    int n,m;
    scanf("%d %d", &n,&m);
    printf("%d", NZDlab7zad6(n,m));

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

double maxlab8zad3(double *niza, int n){
    int i;
    double max = *(niza);
    for (i=1;i<n;i++){
        if (*(niza+i)>max){
            max = *(niza+i);
        }
    }
    return max;
}
double minlab8zad3(double *niza, int n){
    int i;
    double min = *(niza);
    for (i=1;i<n;i++){
        if (*(niza+i)<min){
            min = *(niza+i);
        }
    }
    return min;
}

void normalizelab8zad3 (double * niza, int n){
    int i;
    for (i=0;i<n;i++){
        printf("%.3lf ",(*(niza+i)-minlab8zad3(niza,n)) / (maxlab8zad3(niza,n) - minlab8zad3(niza,n)));
    }

}

int lab8zad3(){
    double niza[MAX];
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%lf",&niza[i]);
    }

    printf("MAX -> %.3lf\n",maxlab8zad3(niza,n));
    printf("MIN -> %.3lf\n",minlab8zad3(niza,n));
    normalizelab8zad3(niza,n);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

double max(double *niza, int n){
    int i;
    double max = *(niza);
    for (i=1;i<n;i++){
        if (*(niza+i)>max){
            max = *(niza+i);
        }
    }
    return max;
}
double min(double *niza, int n){
    int i;
    double min = *(niza);
    for (i=1;i<n;i++){
        if (*(niza+i)<min){
            min = *(niza+i);
        }
    }
    return min;
}

void normalize (double * niza, int n){
    int i;
    for (i=0;i<n;i++){
        printf("%.3lf ",(*(niza+i)-min(niza,n)) / (max(niza,n) - min(niza,n)));
    }

}

int zad3(){
    double niza[MAX];
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%lf",&niza[i]);
    }

    printf("MAX -> %.3lf\n",max(niza,n));
    printf("MIN -> %.3lf\n",min(niza,n));
    normalize(niza,n);

    return 0;
}

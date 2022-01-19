#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

double maxlab8zad2 (double * niza, int n){
    return *(niza);
}
double minlab8zad2 (double *niza, int n){
    return *(niza+n-1);
}
void normalizelab8zad2 (double *niza, int n){
    int i;
    double x;
    for (i=0;i<n;i++){
        x = ((*(niza+i)-minlab8zad2(niza,n)) / (maxlab8zad2(niza,n) - minlab8zad2(niza,n)));
        printf("%.3lf ",x);
    }
}
void sortlab8zad2(double *niza, int n){
    int i,j;
    double temp;
    for (i=0;i<n;i++){
        for (j=0;j<n-i-1;j++){
            if (*(niza+j) <= *(niza+j+1)){
                temp =  *(niza+j);
                *(niza+j) =  *(niza+j+1);
                *(niza+j+1) = temp;
            }
        }
    }

}


int lab8zad2(){

    double niza[MAX];
    int i,n;
    scanf ("%d",&n);

    for (i=0;i<n;i++){
        scanf ("%lf",&niza[i]);
    }
    sortlab8zad2(niza,n);
    printf("MAX -> %.3lf\n",maxlab8zad2(niza,n));
    printf("MIN -> %.3lf\n",minlab8zad2(niza,n));

    normalizelab8zad2 (niza,n);

    return 0;
}

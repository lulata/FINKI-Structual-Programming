#include<stdio.h>

float maxl8z3 (float * array, int n) {

    int i;
    double max = *array;

    for (i=1;i<n;i++) {
        if (*(array+i)>max) {
            max = *(array+i);
        }
    }

    return max;
}

float minl8z3 (float * array, int n) {

    int i;
    double min = *array;

    for (i=1;i<n;i++) {
        if (*(array+i)<min) {
            min = *(array+i);
        }
    }

    return min;
}

void normalizel8z3 (float * niza, int n) {

    float maxx = maxl8z3(niza,n);
    float minn = minl8z3(niza,n);

    int i;

    for (i=0;i<n;i++) {
        *(niza+i) = (*(niza+i) - minn)/(maxx-minn);
    }
}

void swapl8z3 (float * x, float * y) {
    double temp = *x;
    *x = *y;
    *y = temp;
}

int l8z3 () {

    float niza [200];
    int i,n;

    scanf("%d", &n);

    for (i=0;i<n;i++) {
        scanf("%f", &niza[i]);

    }

    printf("MAX -> %.3f\n", maxl8z3(niza,n));
    printf("MIN -> %.3f\n", minl8z3(niza,n));

    normalizel8z3(niza,n);

     for (i=0;i<n;i++) {
        printf("%.3f ", niza[i]);

    }

    return 0;

}

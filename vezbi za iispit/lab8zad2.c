#include<stdio.h>

float maxl8z2 (float * array, int n) {

    int i;
    double max = *array;

    for (i=1;i<n;i++) {
        if (*(array+i)>max) {
            max = *(array+i);
        }
    }

    return max;
}

float minl8z2 (float * array, int n) {

    int i;
    double min = *array;

    for (i=1;i<n;i++) {
        if (*(array+i)<min) {
            min = *(array+i);
        }
    }

    return min;
}

void normalizel8z2 (float * niza, int n) {

    float maxx = maxl8z2(niza,n);
    float minn = minl8z2(niza,n);

    int i;

    for (i=0;i<n;i++) {
        *(niza+i) = (*(niza+i) - minn)/(maxx-minn);
    }
}

void swapl8z2 (float * x, float * y) {
    double temp = *x;
    *x = *y;
    *y = temp;
}

void sortl8z2 (float * niza, int n) {
	int i = 0, j = 0;

    for (i = 0; i < n; i++) {   // loop n times - 1 per element
        for (j = 0; j < n - i - 1; j++) { // last i elements are sorted already
            if (*(niza+j) < *(niza+j+1)) {  // swop if order is broken
                swapl8z2(niza+j, niza+j+1);
            }
        }
    }
}




int l8z2 () {

    float niza [200];
    int i,n;

    scanf("%d", &n);

    for (i=0;i<n;i++) {
        scanf("%f", &niza[i]);

    }

    printf("MAX -> %.3f\n", maxl8z2(niza,n));
    printf("MIN -> %.3f\n", minl8z2(niza,n));

    normalizel8z2(niza,n);
    sortl8z2(niza,n);

     for (i=0;i<n;i++) {
        printf("%.3f ", niza[i]);

    }

    return 0;

}

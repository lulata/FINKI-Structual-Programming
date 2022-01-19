#include <stdio.h>
#include <stdlib.h>
int zad2(){
    char c, dekodiran;
    int K;
    scanf("%c", &c);
    int cBr = c-65;
    scanf("%d", &K);

    int a[26];
    for (int i = 0; i<26; i++){
        a[i] = 65+i;
    }
    int temp;
    if ((a[cBr]+K) > 90){
        if (K>26){
             K = K % 26;
             temp = abs(90 - a[cBr]);
             a[cBr] = a[0];
             dekodiran = (a[0]+abs((K-temp)))-1;
        }
        else if (K<=26){
            temp = abs(90 - a[cBr]);
            a[cBr] = a[0];
            dekodiran = a[0]+abs((K-temp));
        }

    }else{
        dekodiran = a[cBr]+K;
    }
    printf("%c", dekodiran);

    return 0;
}


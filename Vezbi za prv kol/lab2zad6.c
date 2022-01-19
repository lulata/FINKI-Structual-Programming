#include <stdio.h>
#include <stdlib.h>

int lab2zad6()
{
    int poeni, ocenka = 0,p;
    char znak = ' ';

    scanf("%d", &poeni);

  if (poeni < 0 || poeni > 100){
  printf("Nevalidna vrednost za poeni!");
  }else {
    if (poeni > 90){
        ocenka = 10;
     }else if (poeni > 80){
        ocenka = 9;
     }else if (poeni > 70){
        ocenka = 8;
     }else if (poeni > 60){
        ocenka = 7;
     }else if (poeni > 50){
        ocenka = 6;
     }else {
        ocenka =5;
     }

  p = poeni % 10;
  if (ocenka != 5) {
    if (p >= 1 && p <= 3){
        znak = '-';
    }else if (p >= 8 || p == 0){
        znak = '+';
    }
  }
  printf("Ocenka %d%c\n", ocenka, znak);
  }
  return 0;
}

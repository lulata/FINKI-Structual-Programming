#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFilekol2zad1() {
  FILE *f = fopen("text.txt", "w");
  char c;
  while((c = getchar()) != '#') {
    fputc(c, f);
  }
  fclose(f);
}

int samoglaskakol2zad1 (char c){
    return tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u';
}

int kol2zad1() {

  writeToFilekol2zad1();

    FILE *file;
    char curr, prev;
    int sam1 = 0, sam2 = 0, brojac = 0, flag = 1;

    if ((file = fopen("text.txt", "r")) == NULL) {
        return 0;
    }

    while ((curr = fgetc(file)) != EOF) {
        if (sam2) {
            if (samoglaskakol2zad1(curr)) {
                printf("%c%c\n", tolower(prev), tolower(curr));
                brojac++;
            }
        }
        sam2 = 0;
        if (flag) {
            if (samoglaskakol2zad1(curr)) {
                sam1 = 1;
                flag = 0;
                prev = curr;
                continue;
            }
        }
        if (sam1) {
            if (samoglaskakol2zad1(curr)) {
                sam2 = 1;
            }
        }if (sam1 && sam2) {
            printf("%c%c\n", tolower(prev), tolower(curr));
            prev = curr;
            brojac++;
        }
        sam1 = 0;
        flag = 1;
    }

    printf("%d", brojac);

    fclose(file);



  return 0;
}

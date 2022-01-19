#include <stdio.h>
#include <stdlib.h>

int zad2()
{
    int index,o1,o2,o3,o4,o5,o6,br2,god;

    float prosek;
    scanf("%d%d%d%d%d%d%d", &index,&o1,&o2,&o3,&o4,&o5,&o6);

    prosek = (o1 + o2 + o3 + o4 + o5 +o6)/6.0;

    printf("Prosek: %.3f \n", prosek);

    printf("Student: %d \n", index);


    br2 = index/10000;
    god = 20-br2;

    printf("%d godina \n", god);

    if (prosek>=9.5) {
        printf("Nagraden: 1");
    }else {
        printf("Nagraden: 0");
    }


  return 0;
}

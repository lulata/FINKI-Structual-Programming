#include <stdio.h>
#include <stdlib.h>

int lab2zad2()
{
    int index,o1,o2,o3,o4,o5,o6;

    scanf("%d %d %d %d %d %d %d", &index,&o1,&o2,&o3,&o4,&o5,&o6);

    float prosek = (o1+o2+o3+o4+o5+o6)/6;
    int god =20- (index/10000);
    printf("Prosek: %0.3f \nStudent: %d \n%d godina\n", prosek,index,god);
    if(prosek>=9.5)
        printf("Nagredaen: 1");
    else
        printf("Nagraden: 0");


}

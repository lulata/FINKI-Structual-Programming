#include <stdio.h>
#include <stdlib.h>

int lab1zad2()
{
    float masa,visina,vis,BMI;

    scanf("%f%f", &masa,&vis);

    visina= vis/100;

    BMI=masa/(visina*visina);


    printf("%.2f", BMI);
    return 0;
}

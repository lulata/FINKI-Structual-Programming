#include <stdio.h>
#include <stdlib.h>

struct proizovd{
    char ime[50];
    float cena;
    float kolicina;
};

typedef struct proizovd pro;

int zad1()
{
    pro a[100];
    int n,i;
    float total;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&a[i].ime);
        scanf("%f",&a[i].cena);
        scanf("%f",&a[i].kolicina);
    }for(i=0;i<n;i++){
        printf("%d. %s\t%.2f x %.1f = %.2f\n",i+1,a[i].ime,a[i].cena,a[i].kolicina,a[i].kolicina*a[i].cena);
        total+=a[i].cena*a[i].kolicina;
    }printf("Total: %.2f",total);
    return 0;
}

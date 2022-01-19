#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct threeDee{
    float x,y,z;
} tocka3D;

typedef struct twoDee{
    float x,y;
} tocka2D;

int ista_prava(tocka2D a,tocka2D b,tocka2D c){
    float plostina=(a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y))/2;
    if (plostina==0)
        return 1;
    else
        return 0;
}
float rastojanie(tocka2D a,tocka2D b){
    return sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
}
float rastojanie3D(tocka3D a,tocka3D b){
    return sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2)+pow(b.z-a.z,2));
}
int zad3() {
    float x1, y1, x2, y2;
    scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	tocka2D t1 = { x1, y1 };
	tocka2D t2 = { x2, y2 };
	printf("%.2f\n", rastojanie(t1, t2));
    float z1, z2;
    scanf("%f %f", &z1, &z2);
    tocka3D t3 = {x1, y1, z1};
    tocka3D t4 = {x2, y2, z2};
    printf("%.2f\n", rastojanie3D(t3, t4));
    tocka2D t5 = {z1, z2};
    printf("%d\n", ista_prava(t1, t2, t5));
	return 0;
}

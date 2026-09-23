#include <stdio.h>
#include <math.h>
int main(){
    float x1, x2, y1, y2, prod, distance;

    printf("Enter x1:");
    scanf("%f", &x1);
    printf("Enter x2:");
    scanf ("%f",&x2);
    printf("Enter y1:");
    scanf ("%f",&y1);
    printf("Enter y2:");
    scanf ("%f",&y2);

    prod = ((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    distance = sqrt(prod);
    printf ("The distance between the points are: %.2f\n", distance);
    return 0;
}
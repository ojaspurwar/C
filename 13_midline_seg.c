#include <stdio.h>
#include <math.h>
int main(){
    float x1, x2, y1, y2, midpoint1, midpoint2;

    printf("Enter x1:");
    scanf("%f", &x1);
    printf("Enter x2:");
    scanf ("%f",&x2);
    printf("Enter y1:");
    scanf ("%f",&y1);
    printf("Enter y2:");
    scanf ("%f",&y2);

    midpoint1 = ((x2 + x1)/2);
    midpoint2 = ((y2 + y1)/2);

    printf("The Midpoints are : (%.2f and %.2f)\n", midpoint1, midpoint2);
    return 0;
}

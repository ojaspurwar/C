#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, a, b, c, distance;

    printf("The general equation of a line is: ax + by + c = 0\n");

    printf("Enter x1 for the point: ");
    scanf("%f", &x1);

    printf("Enter y1 for the point: ");
    scanf("%f", &y1);

    printf("Enter a for the equation: ");
    scanf("%f", &a);

    printf("Enter b for the equation: ");
    scanf("%f", &b);

    printf("Enter c for the equation: ");
    scanf("%f", &c);

    distance = (a * x1 + b * y1 + c) / sqrt(a * a + b * b);

    printf("The distance of the point from the line is: %.2f\n", distance);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, angle, cosa;

    printf("Enter the length of the sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    cosa = (b * b + c * c - a * a) / (2 * b * c);
    angle = acos(cosa) * 180 / M_PI;

    printf("The angle of the triangle is: %.2f degrees\n", angle);

    return 0;
}

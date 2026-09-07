#include <stdio.h>

int main() {
    float x, y, r;

    printf("Enter the coordinates of the center: ");
    scanf("%f %f", &x, &y);

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("The equation of the circle is: (x - %.2f)^2 + (y - %.2f)^2 = %.2f^2\n", x, y, r);
    printf("The circle centre and radius is: (%.2f, %.2f) and %.2f\n", x, y, r);

    return 0;
}
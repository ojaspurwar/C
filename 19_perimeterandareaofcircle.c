#include <stdio.h>
#include <math.h>

int main() {
    float r, perimeter, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    perimeter = 2 * M_PI * r;
    area = M_PI * r * r;

    printf("The perimeter of the circle is: %.2f\n", perimeter);
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
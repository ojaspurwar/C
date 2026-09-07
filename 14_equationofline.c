#include <stdio.h>

int main() {
    float a, b, c, slope;

    printf("The general equation of a line is: ax + by + c = 0\n");

    printf("Enter a for the equation: ");
    scanf("%f", &a);

    printf("Enter b for the equation: ");
    scanf("%f", &b);

    printf("Enter c for the equation: ");
    scanf("%f", &c);

    printf("So the equation is %.2fx + %.2fy + %.2f = 0\n", a, b, c);

    if (b == 0) {
        printf("The line is vertical, so the slope is undefined.\n");
    } else {
        slope = -a / b;
        printf("The slope of the equation is %.2f\n", slope);
    }

    return 0;
}

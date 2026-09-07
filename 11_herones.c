#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, prod, area;

    printf("Enter 1st side: ");
    scanf("%f", &a);
    printf("Enter 2nd side: ");
    scanf("%f", &b);
    printf("Enter 3rd side: ");
    scanf("%f", &c);

    s = (a + b + c) / 2.0f;
    prod = s * (s - a) * (s - b) * (s - c);
    area = sqrt(prod);

    printf("The semiperimeter is: %.2f\n", s);
    printf("The area via Heron's formula is: %.2f\n", area);

    return 0;
}

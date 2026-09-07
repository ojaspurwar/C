#include <stdio.h>

int main() {
    int a, b, c;
    float average;

    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("Enter third integer: ");
    scanf("%d", &c);

    average = (a + b + c) / 3.0f;

    printf("Average = %.2f\n", average);

    return 0;
}

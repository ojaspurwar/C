#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0f / 5.0f) * celsius + 32;

    printf("Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}

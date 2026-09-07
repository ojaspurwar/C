#include <stdio.h>
#include <math.h>

int main() {
    float r, d, chord;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("Enter the distance from the center of the circle to the line: ");
    scanf("%f", &d);

    chord = 2 * sqrt(r * r - d * d);

    printf("The length of the chord is: %.2f\n", chord);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    float r,h,k,s, chord;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    printf("Enter the coordinates of the center (h,k): ");
    scanf("%f %f", &h, &k);

    printf("Enter the x-coordinate of the line: ");
    scanf("%f", &s);

    chord = 2 * sqrt(r * r - (s - h) * (s - h));

    printf("The length of the chord is: %.2f\n", chord);

    return 0;
}

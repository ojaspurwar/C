#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3, x4, y4, m1, m2;

    printf("Enter the coordinates of the first point: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of the second point: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter the coordinates of the third point: ");
    scanf("%f %f", &x3, &y3);

    printf("Enter the coordinates of the fourth point: ");
    scanf("%f %f", &x4, &y4);

    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y4 - y3) / (x4 - x3);
    
    if (m1 == m2) {
        printf("The lines are parallel.\n");
    } else {
        printf("The lines are not parallel.\n");
    }

    return 0;
}
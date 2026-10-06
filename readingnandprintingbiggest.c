#include <stdio.h>
int main(){
    int n;
    int number;
    int biggest;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    }

    scanf("%d", &biggest);
    for (int i = 1; i < n; i++) {
        scanf("%d", &number);
        if (number > biggest) {
            biggest = number;
        }
    }

    printf("Biggest: %d\n", biggest);
    return 0;
}
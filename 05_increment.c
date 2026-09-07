#include <stdio.h>

int main() {
    int a;

    a = 5;
    printf("Post-increment (a++): used %d, ", a++);
    printf("then a = %d\n", a);

    a = 5;
    printf("Pre-increment  (++a): used %d, ", ++a);
    printf("then a = %d\n", a);

    a = 5;
    printf("Post-decrement (a--): used %d, ", a--);
    printf("then a = %d\n", a);

    a = 5;
    printf("Pre-decrement  (--a): used %d, ", --a);
    printf("then a = %d\n", a);

    return 0;
}
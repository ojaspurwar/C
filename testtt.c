#include <stdio.h>
int main()
{
    int a, b,temp;
    printf("Enter a number:");
    scanf("%d", &a);
    while (a > 0)
    {
        temp = a;
        temp = temp % 10;
        b += temp;
        a = a / 10;
    }
    printf("the sum of the digits of number:%d", b);
    return 0;
}
#include <stdio.h>
int main()
{
    int n, num, a = 0, b = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            a = num;
            b = 1;
        }
    }
    if (b)
    {
        printf("%d\n", a);
    }
    else
    {
        printf("No even found");
    }
    return 0;
}
#include <stdio.h>

int main() {
    char name[100];
    char phone[20];

    printf("Enter your name: ");
    scanf("%99s", name);

    printf("Enter your phone no.: ");
    scanf("%19s", phone);

    printf("Your name is: %s\nYour phone no. is: %s\n", name, phone);

    return 0;
}

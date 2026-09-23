#include <stdio.h>
/*int main () {
    char op;
    double n1,n2;
    printf("Read the operator (+, -, *, /): ");
    scanf(" %c", &op);
    switch(op) {
        case '+':
            printf("Enter two numbers: ");
            scanf("%lf %lf",&n1,&n2);
            printf("%.1lf + %.1lf = %.1lf",n1,n2,n1+n2);
            break;
        case '-':
            printf("Enter two numbers: ");
            scanf("%lf %lf",&n1,&n2);
            printf("%.1lf - %.1lf = %.1lf",n1,n2,n1-n2);
            break;
        case '*':
            printf("Enter two numbers: ");
            scanf("%lf %lf",&n1,&n2);
            printf("%.1lf * %.1lf = %.1lf",n1,n2,n1*n2);
            break;
        case '/':
            printf("Enter two numbers: ");
            scanf("%lf %lf",&n1,&n2);
            if(n2 != 0.0)
                printf("%.1lf / %.1lf = %.1lf",n1,n2,n1/n2);
            else
                printf("Divide by zero situation");
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            printf("Error! operator is not correct");
    }
    return 0;
} */

int main() {
    int day;
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);
    while (day < 1 || day > 7) {
        printf("Invalid input. Please enter a day number between 1 and 7: ");
        scanf("%d", &day);
    }
    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }
    return 0;   
}
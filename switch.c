#include <stdio.h>
int main(){
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    switch(i){
        case 1:
            printf("You entered One\n");
            break;
        case 2:
            printf("You entered Two\n");
            break;
        case 3:
            printf("You entered Three\n");
            break;
        case 4:
            printf("You entered Four\n");
            break;
        case 5:
            printf("You entered Five\n");
            break;
        default:
        while (i != 1 && i != 2 && i != 3 && i != 4 && i != 5){
            printf("You entered a number other than 1,2,3,4,5\n");
            printf("Enter a number: ");
            scanf("%d", &i);
        }
    }
    return 0;
}
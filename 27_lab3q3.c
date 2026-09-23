#include <stdio.h>
int main(){
    int i = 0;
    while (i <= 50){
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        }
        i++;
    }
    while (i >= 51 && i <= 100){
        if (i % 2 != 0) {
            printf("%d is odd\n", i);
        }
        i++;
    }
    return 0;
}

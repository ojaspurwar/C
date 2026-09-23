#include <stdio.h>
int main (){
    int i = 0;
    while (i < 100){
        if (i % 2 ==0 && i%3 !=0 && i%7 !=0) {
            printf("%d is even and not divisible by 3 and 7\n", i);
        }
        i++;
    }
    return 0;
}
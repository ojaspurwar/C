#include <stdio.h>
int main (){
    int i = 0;
    while (i < 100){
        if (i % 2 ==0 && i%3 !=0 && i%5 !=0) {
            printf("%d is not a multiple of 3 or 5 and is even\n", i);
        }
        i++;
    }
    return 0;
}
#include <stdio.h>
int main () {
    int i = 0;
    while (i < 20){
        printf("%d is less than 20\n", i);
        i++;
    }
    int j=50;
    while (j<70){
        printf("%d is between 50 and 70\n", j);
        j++;
    }
    int k=90;
    while (k<100){
        printf("%d is between 90 and 100\n", k);
        k++;
    }
    return 0;
}

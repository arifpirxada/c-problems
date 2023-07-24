#include <stdio.h>


int main () {
    int fact = 1;
    int factorial(int num) {
        for(int i = 2; i<=num; i++) {
            fact = fact * i;
        }
        return fact;
    }
    printf("%d",factorial(4));
    return 0;
}
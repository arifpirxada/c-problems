#include <stdio.h>

// Prime or not
void primeCheck(int num)
{
    for (int i = 2; i < num - 1; i++)
    {
        if (num%i == 0) {
            printf("%d is not a prime number", num);
            return;
        }
    }
    printf("%d is a prime number", num);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    primeCheck(n);
    return 0;
}
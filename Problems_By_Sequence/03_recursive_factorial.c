#include <stdio.h>

// Factorial by recursion

int factorial_by_recursion(int num)
{
    if (num == 1) return num;
    return num * factorial_by_recursion(num - 1);
}

int main()
{
    int n;
    printf("Factorial finder\n");
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("%d",factorial_by_recursion(n));
    return 0;
}
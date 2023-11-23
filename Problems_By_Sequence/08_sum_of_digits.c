#include <stdio.h>

// To find the sum of digits of a number

int sum_of_digits(int num);

int main()
{
    int number;
    printf("Sum of digits finder\n");
    printf("Enter a number: ");
    scanf("%d", &number);
    int sum = sum_of_digits(number);
    printf("Sum: %d", sum);
    return 0;
}

int sum_of_digits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}
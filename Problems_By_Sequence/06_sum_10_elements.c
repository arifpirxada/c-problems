#include <stdio.h>

// Program to find the sum of ten elements of array & their average

int main()
{
    int arr[10], sum = 0, i;
    float average;

    printf("Enter the 10 elements:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        sum += arr[i];
    }

    average = (double)sum / 10;
    printf("Sum: %d; Average: %.2f", sum, average);
    return 0;
}
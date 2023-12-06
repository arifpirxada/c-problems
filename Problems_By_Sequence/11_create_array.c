#include <stdio.h>
#include <stdlib.h>

// Write a C program to read N integers and store them in an array A, and so find the
// sum of all these elements using pointer. Output the given array and the computed sum
// with suitable heading

int main()
{
    int n, i, sum = 0;

    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + *(arr + i);
    }

    printf("Total sum: %d", sum);

    return 0;
}
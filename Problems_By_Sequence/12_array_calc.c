#include <stdio.h>

// Write a C program to read N integers (zero, +ve and -ve) *
// * into an array A and to *
// * a) Find the sum of negative numbers *
// * b) Find the sum of positive numbers and *
// * c) Find the average of all input numbers *
// * Output the various results computed with proper headings

int main()
{
    int n, i, negative_sum = 0, positive_sum = 0;
    float avg = 0;

    printf("Enter the number of integers in array: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0) {
            positive_sum += arr[i];
        } else {
            negative_sum += arr[i];
        }
        avg += arr[i];
    }

    avg /= n;

    printf("Sum of positive numbers: %d\n", positive_sum);
    printf("Sum of negative numbers: %d\n", negative_sum);
    printf("Average: %.2f\n", avg);

    return 0;
}
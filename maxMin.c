#include <stdio.h>

int findMaxMin()
{
    int arrLen;
    printf("Enter the number of elements: ");
    scanf("%d", &arrLen);

    int arr[arrLen];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d",&arr[i]);
    }

    int leastNum = arr[0];
    int maxNum = arr[0];

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] < leastNum) {
            leastNum = arr[i];
        }

        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }

    printf("\nMimimum number is: %d and max number is: %d", leastNum, maxNum);
}

int main()
{
    findMaxMin();
    return 0;
}
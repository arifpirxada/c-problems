#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 2};
    int numTimes = 0;
    int givenNum = 3;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (arr[i] == givenNum)
        {
            numTimes++;
        }
    }
    printf("The number %d occurs %d times in the array", givenNum, numTimes);
    return 0;
}
#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        int *ptr = &arr[i];
        printf("%d\n", *ptr);
    }

    return 0;
}
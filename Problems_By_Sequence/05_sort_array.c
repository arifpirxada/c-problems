#include <stdio.h>

// 5. Function to sort array in descending order

void sort_arr_desc(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int array[] = {4, 1, 5, 89, 8, 79, 40}, x;
    int length = sizeof(array) / sizeof(array[0]);
    sort_arr_desc(array, length);

    for (x = 0; x < length; x++)
    {
        printf("%d\n", array[x]);
    }

    return 0;
}
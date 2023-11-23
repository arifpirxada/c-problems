#include <stdio.h>
#include <stdlib.h>

// Funtion to remove duplicate elements in an array

void remove_duplicate(int arr[], int len);
// int remove_element(int arr[], int *len, int index);

int main()
{
    int array[] = {4, 1, 4, 5}, x;
    int length = sizeof(array) / sizeof(array[0]);

    remove_duplicate(array, length);

    for (x = 0; x < length; x++)
    {
        printf("Element: %d;\n", array[x]);
    }

    return 0;
}

void remove_duplicate(int arr[], int len)
{
    int i, j, k = 0;

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (i == j) {
                continue;
            }
            if (arr[i] != arr[j])
            {
                printf("this: %d;\n", arr[i]);
                arr[k] = arr[i];
                k++;
            }
        }
    }
}

// int remove_element(int arr[], int *len, int index)
// {
//     if (index >= *len || index < 0)
//     {
//         printf("The element does not exist!");
//         return 0;
//     }
//     for (int i = index; i < *len; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     *len -= 1;
//     return 1;
// }
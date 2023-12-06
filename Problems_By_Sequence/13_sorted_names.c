#include <stdio.h>
#include <string.h>

// Write a C program to read N names, store them in the form of an array and sort
// them in alphabetical order. Output the give names and the sorted names in two columns
// side by side with suitable heading

int main()
{
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);

    char arr[n][15], sorted_arr[n][15], temp[15];

    printf("Enter names:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", &arr[i]);
        strcpy(sorted_arr[i], arr[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmpi(sorted_arr[i], sorted_arr[j]) > 0)
            {
                strcpy(temp, sorted_arr[i]);
                strcpy(sorted_arr[i], sorted_arr[j]);
                strcpy(sorted_arr[j], temp);
            }
        }
    }

    printf("\n----------------------------------------\n");
    printf("Input Names\tSorted names\n");
    printf("------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t\t%s\n", arr[i], sorted_arr[i]);
    }
    printf("------------------------------------------\n");

    return 0;
}
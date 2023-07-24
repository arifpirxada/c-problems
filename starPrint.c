#include <stdio.h>
#include <string.h>

void stars(int numberOfLines)
{
    if (numberOfLines == 0)
    {
        printf("Number should be above 0");
    }
    else
    {
        char star[100] = "*";
        int i = 0;
        while (i < numberOfLines)
        {
            printf("%s\n", star);
            strcat(star, "**");
            i++;
        }
    }
}

int main()
{
    char proceed;
    int lines;

    while (1)
    {
        if (proceed == 'n')
        {
            break;
        }

        printf("Enter the number of lines: ");
        scanf("%d", &lines);
        stars(lines);

        getchar();

        printf("Do you want to proceed type (y/n): ");
        scanf("%c", &proceed);
    }
    return 0;
}
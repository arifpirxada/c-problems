#include <stdio.h>

// 01. Calculate the percentage of 5 subjects

int main()
{
    int sub1, sub2, sub3, sub4, sub5;

    printf("Write marks of first subject: ");
    scanf("%d", &sub1);
    printf("Write marks of second subject: ");
    scanf("%d", &sub2);
    printf("Write marks of third subject: ");
    scanf("%d", &sub3);
    printf("Write marks of fourth subject: ");
    scanf("%d", &sub4);
    printf("Write marks of fifth subject: ");
    scanf("%d", &sub5);

    int sum = sub1 + sub2 + sub3 + sub4 + sub5;
    float percentage = ((double)sum / 500) * 100;
    printf("\nTotal marks: %d; Percentage: %.1f%%", sum, percentage);

    return 0;
}
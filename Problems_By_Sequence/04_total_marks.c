#include <stdio.h>

// To find the total marks obtained by student according to given number of subjects.

int main()
{
    int num_of_subjects, total_marks = 0, i, marks;
    printf("Enter the number of subjects: ");
    scanf("%d", &num_of_subjects);

    printf("Enter marks in subjects:\n");
    for (i = 1; i <= num_of_subjects; i++)
    {
        printf("Subject %d: ", i);
        scanf("%d", &marks);
        total_marks += marks;
    }

    printf("Total marks: %d", total_marks);

    return 0;
}
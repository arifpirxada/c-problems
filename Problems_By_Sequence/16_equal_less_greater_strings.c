#include <stdio.h>

// Program to accepts two strings and compare them. Finally it prints whether both are
// equal, or first string is greater than the second or the first string is less than the second
// string

void compare_strings(char str1[], char str2[]);

int main()
{
    char str1[10], str2[10];
    int len1, len2;

    printf("Enter two strings:\n");
    scanf("%s%s", str1, str2);
    printf("\nStrings: %s, %s;\n", str1, str2);

    len1 = sizeof(str1) / sizeof(char);
    len2 = sizeof(str2) / sizeof(char);

    printf("\nstr1: %d\nstr2: %d",len1, len2 );

    if (str1[4] == ' ') {
        printf("Nothing is available\n");
    }
    printf("\ncharacter: %c", str1[3]);
    return 0;
}

void compare_strings(char str1[], char str2[]) {
    
}
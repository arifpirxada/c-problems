#include <stdio.h>
#include <string.h>

// Develop a program to determine whether a given character is a vowel or a consonant.

int main()
{
    char c, ans[10] = "consonant";
    printf("Enter the character: ");
    scanf("%c", &c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        strcpy(ans, "vowel");
    }
    
    printf("%c is a %s", c, ans);

    return 0;
}
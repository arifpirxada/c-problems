#include <stdio.h>
#include <string.h>
// Write a C Program to convert the lower case letters to upper case and vice-versa

char *changeCharCase(char c[]);

int main()
{
    char name[20];
    printf("Enter your Name: ");
    scanf("%s", &name);

    strcpy(name, changeCharCase(name));

    printf("Changed Cases: %s", name);

    return 0;
}

char *changeCharCase(char c[])
{
    char *ptr = c;
    int i = 0;

    while (ptr[i] != '\0')
    {
        if (ptr[i] == 'a')
        {
            ptr[i] = 'A';
        }
        else if (ptr[i] == 'A')
        {
            ptr[i] = 'a';
        }
        else if (ptr[i] == 'b')
        {
            ptr[i] = 'B';
        }
        else if (ptr[i] == 'B')
        {
            ptr[i] = 'b';
        }
        else if (ptr[i] == 'c')
        {
            ptr[i] = 'C';
        }
        else if (ptr[i] == 'C')
        {
            ptr[i] = 'c';
        }
        else if (ptr[i] == 'd')
        {
            ptr[i] = 'D';
        }
        else if (ptr[i] == 'D')
        {
            ptr[i] = 'd';
        }
        else if (ptr[i] == 'e')
        {
            ptr[i] = 'E';
        }
        else if (ptr[i] == 'E')
        {
            ptr[i] = 'e';
        }
        else if (ptr[i] == 'f')
        {
            ptr[i] = 'F';
        }
        else if (ptr[i] == 'F')
        {
            ptr[i] = 'f';
        }
        else if (ptr[i] == 'g')
        {
            ptr[i] = 'G';
        }
        else if (ptr[i] == 'G')
        {
            ptr[i] = 'g';
        }
        else if (ptr[i] == 'h')
        {
            ptr[i] = 'H';
        }
        else if (ptr[i] == 'H')
        {
            ptr[i] = 'h';
        }
        else if (ptr[i] == 'i')
        {
            ptr[i] = 'I';
        }
        else if (ptr[i] == 'I')
        {
            ptr[i] = 'i';
        }
        else if (ptr[i] == 'j')
        {
            ptr[i] = 'J';
        }
        else if (ptr[i] == 'J')
        {
            ptr[i] = 'j';
        }
        else if (ptr[i] == 'k')
        {
            ptr[i] = 'K';
        }
        else if (ptr[i] == 'K')
        {
            ptr[i] = 'k';
        }
        else if (ptr[i] == 'l')
        {
            ptr[i] = 'L';
        }
        else if (ptr[i] == 'L')
        {
            ptr[i] = 'l';
        }
        else if (ptr[i] == 'm')
        {
            ptr[i] = 'M';
        }
        else if (ptr[i] == 'M')
        {
            ptr[i] = 'm';
        }
        else if (ptr[i] == 'n')
        {
            ptr[i] = 'N';
        }
        else if (ptr[i] == 'N')
        {
            ptr[i] = 'n';
        }
        else if (ptr[i] == 'o')
        {
            ptr[i] = 'O';
        }
        else if (ptr[i] == 'O')
        {
            ptr[i] = 'o';
        }
        else if (ptr[i] == 'p')
        {
            ptr[i] = 'P';
        }
        else if (ptr[i] == 'P')
        {
            ptr[i] = 'p';
        }
        else if (ptr[i] == 'q')
        {
            ptr[i] = 'Q';
        }
        else if (ptr[i] == 'Q')
        {
            ptr[i] = 'q';
        }
        else if (ptr[i] == 'r')
        {
            ptr[i] = 'R';
        }
        else if (ptr[i] == 'R')
        {
            ptr[i] = 'r';
        }
        else if (ptr[i] == 's')
        {
            ptr[i] = 'S';
        }
        else if (ptr[i] == 'S')
        {
            ptr[i] = 's';
        }
        else if (ptr[i] == 't')
        {
            ptr[i] = 'T';
        }
        else if (ptr[i] == 'T')
        {
            ptr[i] = 't';
        }
        else if (ptr[i] == 'u')
        {
            ptr[i] = 'U';
        }
        else if (ptr[i] == 'U')
        {
            ptr[i] = 'u';
        }
        else if (ptr[i] == 'v')
        {
            ptr[i] = 'V';
        }
        else if (ptr[i] == 'V')
        {
            ptr[i] = 'v';
        }
        else if (ptr[i] == 'w')
        {
            ptr[i] = 'W';
        }
        else if (ptr[i] == 'W')
        {
            ptr[i] = 'w';
        }
        else if (ptr[i] == 'x')
        {
            ptr[i] = 'X';
        }
        else if (ptr[i] == 'X')
        {
            ptr[i] = 'x';
        }
        else if (ptr[i] == 'y')
        {
            ptr[i] = 'Y';
        }
        else if (ptr[i] == 'Y')
        {
            ptr[i] = 'y';
        }
        else if (ptr[i] == 'z')
        {
            ptr[i] = 'Z';
        }
        else if (ptr[i] == 'Z')
        {
            ptr[i] = 'z';
        }
        i++;
    }

    return ptr;
}
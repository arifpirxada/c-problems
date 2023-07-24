#include <stdio.h>

int nSum(int num)
{
    if (num == 0)
    {
        return num;
    }
    else
    {
        return nSum(num-1) + num;
    }
}

int main()
{
    int userNum;
    printf("Enter the number: ");
    scanf("%d", &userNum);
    printf("The sum is: %d", nSum(userNum));
    return 0;
}
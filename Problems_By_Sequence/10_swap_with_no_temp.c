#include <stdio.h>


void main()
{
    int i, k;
    printf("Enter two integers\n");
    scanf("%ld %ld", &i, &k);
    printf("\nBefore swapping i= %ld and k = %ld", i, k);
    i = i + k;
    k = i - k;
    i = i - k;
    printf("\nAfter swapping i= %ld and k = %ld", i, k);
}
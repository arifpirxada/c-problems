#include <stdio.h>

// Write a c program to convert given number of days to a measure of time *
// given in years, weeks and days. For example 375 days is equal to 1 year * 1
// week and 3 days (ignore leap year)

void measure_time(int days);

int main()
{
    int dyz = 382;
    measure_time(dyz);
    return 0;
}

void measure_time(int days)
{
    int years, weeks;

    years = days / 365;
    days %= 365;
    weeks = days / 7;
    days %= 7;

    printf("Years: %d; Weeks: %d; Days: %d", years, weeks, days);
}
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>

int main()
{
    time_t firstCustomTime, secondCustomTime;
    double elapsedTime;
    int days, firstDay, firstMonth, firstYear, secondDay, secondMonth, secondYear;

    printf("Provide two dates and get difference in days.\n\n");

    printf("First date:\n");
    printf("Enter first date day: ");
    scanf("%d", &firstDay);
    printf("Enter first date month: ");
    scanf("%d", &firstMonth);
    printf("Enter first date year: ");
    scanf("%d", &firstYear);

    struct tm firstTime;
    firstTime.tm_year = firstYear - 1900;
    firstTime.tm_mon = firstMonth - 1;
    firstTime.tm_mday = firstDay;
    firstTime.tm_hour = 0;
    firstTime.tm_min = 0;
    firstTime.tm_sec = 0;
    firstTime.tm_isdst = -1;

    firstCustomTime = mktime(&firstTime);

    printf("\nSecond date:\n");
    printf("Enter second date day: ");
    scanf("%d", &secondDay);
    printf("Enter second date month: ");
    scanf("%d", &secondMonth);
    printf("Enter second date year: ");
    scanf("%d", &secondYear);

    // Create a custom time (2023-07-24, 00:00:00)
    struct tm secondTime;
    secondTime.tm_year = secondYear - 1900;
    secondTime.tm_mon = secondMonth - 1;
    secondTime.tm_mday = secondDay;
    secondTime.tm_hour = 0;
    secondTime.tm_min = 0;
    secondTime.tm_sec = 0;
    secondTime.tm_isdst = -1;

    secondCustomTime = mktime(&secondTime);

    if (ctime(&firstCustomTime) != NULL && ctime(&secondCustomTime) != NULL)
    {
        // Extract only the date information (first 10 characters)

        printf("\nfirst time: %s", ctime(&firstCustomTime));
        printf("second time: %s\n", ctime(&secondCustomTime));

        elapsedTime = difftime(secondCustomTime, firstCustomTime) / 86400;
        elapsedTime = fabs(elapsedTime);
        days = (int)elapsedTime;
        char specifier[5];
        strcpy(specifier, (days == 1) ? "day" : "days");

        printf("Difference: %d %s\n", days, specifier);
    }
    else
    {
        printf("\nFailed to get time string.\n");
    }

    char exit[5];
    printf("\nType any key to exit: ");
    scanf("%s", &exit);

    return 0;
}

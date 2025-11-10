//Check leap year

#include <stdio.h>

void CheckLeapYear(int year)
{
    if (((year % 400) == 0) || (((year % 4) == 0) && (year % 100 != 0)))
    {
        printf("%d is a Leap year", year);
    }
    else
    {
        printf("%d is not a Leap year", year);
    }
}
int main()
{
    int yr = 0;

    printf("Enter year: ");
    scanf("%d", &yr);

    CheckLeapYear(yr);

    return 0;
}
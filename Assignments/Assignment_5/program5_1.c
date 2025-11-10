
//1. Check even odd using if else

#include <stdio.h>

void CheckEvenOdd(int num)
{
    if ((num % 2) == 0)
    {
        printf("%d is Even", num);
    }
    else
    {
        printf("%d is Odd", num);
    }
}

int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}

//4. Sum of even factors(exclude the number itself)

#include<stdio.h>

int sum_of_even_factors(int number)
{
    int iCnt = 0, iSum = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= number; iCnt++)
    {
        if((number % iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
    }
    return iSum;
}

int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("%d\n", sum_of_even_factors(number));
    return 0;
}
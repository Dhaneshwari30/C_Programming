//3. Sum of all the positive factors

#include<stdio.h>

int sum_of_factors(int number)
{
    int iCnt = 0, iSum = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= (number/2); iCnt++)
    {
        if((number % iCnt) == 0)
        {
            iSum = iSum + iCnt;
            printf("%d\n", iCnt);
        }
    }
    return iSum;
}

int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("%d\n", sum_of_factors(number));
    return 0;
}
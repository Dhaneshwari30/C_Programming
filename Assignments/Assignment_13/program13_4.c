//4. Find sum of first N natural number

#include<stdio.h>

int sum_natural_numbers(int limit)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d",&limit);

    printf("%d\n", sum_natural_numbers(limit));

    return 0;
}
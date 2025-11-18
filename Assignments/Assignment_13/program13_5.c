//5. Find sum of first N even numbers

#include<stdio.h>

int sum_even_numbers(int limit)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    printf("%d\n", sum_even_numbers(limit));

    return 0;
}
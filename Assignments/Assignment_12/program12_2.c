//2.Count total positive factors of a number

#include<stdio.h>

int count_factors(int iNo)
{
    int iCnt = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            if((iCnt % 2) == 0)
            {
                iCount++;
            }
        }
    }
    return iCount;
}

int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("%d\n", count_factors(number));

    return 0;
}
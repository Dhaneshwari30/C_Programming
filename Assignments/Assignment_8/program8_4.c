//4. Write a program which accept number from user and display its table

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d \t", iMul);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}
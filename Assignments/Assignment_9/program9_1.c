//1. Write a program which accept number from user and display below pattern

#include<stdio.h>

void Display(int iNo)
{
    int iCnt1 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt1 = 1; iCnt1 <= iNo; iCnt1++)
    {
        printf("* \t");
    }

    for(iCnt1 = 1; iCnt1 <= iNo; iCnt1++)
    {
        printf("# \t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

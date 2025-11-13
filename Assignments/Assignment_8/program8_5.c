//5. Write a program which accept number from user and display its table in reverse order

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCnt = 10;
    while(iCnt >= 1)
    {
        iMul = iNo * iCnt;
        printf("%d \t", iMul);
        iCnt--;
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
//3.Write a program to find factorial of given number

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iCnt = iNo;
    while(iCnt != 1)
    {
        iMul = iCnt * iMul;
        iCnt--;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}
//4. Write a program which accet number from user and return multiplication of all digits.

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMul = iMul * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d", iRet);

    return 0;
}
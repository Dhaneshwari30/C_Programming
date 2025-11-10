//Accpet number from user and check wheather number is even or odd.

#include <stdio.h>
#include <stdbool.h>

bool ChkEven(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if(bRet == true)
    {
        printf("%d is Even...", iValue);
    }
    else
    {
        printf("%d is odd...", iValue);
    }
    
    return 0;
}
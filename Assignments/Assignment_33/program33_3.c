//3.Accept Charater from user and check whether it is digit or not(0,9)
/*
    Input: 7        , d
    Output: TRUE    , FALSE
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    BOOL BFlag = FALSE;

    if(ch >= '0' && ch <= '9')
    {
        BFlag = TRUE;
    }

    return BFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("ENter the character: ");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}
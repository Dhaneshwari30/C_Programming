//4. Accept Character from user and check wheather it is small case or not (a - z)
/*
    Input: g        , D
    Output: TRUE    , FALSE
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    BOOL BFlag = FALSE;

    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a Small case Character");
    }

    return 0;
}
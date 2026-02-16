//1. Write a program which accept string from user and accept one character. Check whether that character is present is present in string or not
/*
    Input: Marvellous Multi OS
            e
    Output: TRUE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            bFlag = TRUE;
            break;
        }
        iCnt++;
    }
    return bFlag;
}

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter String: \n");
    scanf("%[^\n]s",arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Charachter found\n");
    }
    else
    {
        printf("Charachter not found\n");
    }

    return 0;
}

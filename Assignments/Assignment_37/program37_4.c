//4. Write a program which accept string from user and accept one character. Return index of last occurrence of that character
/*
    Input: Marvellous Multi OS
            M
    Output: 11
*/

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int Index = -1;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            Index = iCnt;
        }
        iCnt++;
    }
    return Index;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^\n]s",arr);

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Character location is %d",iRet);

    return 0;
}
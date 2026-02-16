//3. Write program which accept string from user and accept ont character. Return index of of first occurrence of that character
/*
    Input: Marvellous Multi OS
            M
    Output: 0
*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;
    int Index = -1;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            Index = iCnt;
            break;
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

    iRet = FirstChar(arr,cValue);

    printf("Character location is %d",iRet);

    return 0;
}
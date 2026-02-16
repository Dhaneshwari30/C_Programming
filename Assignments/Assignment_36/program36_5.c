//5. Write a program which accept string from user and count number of while spaces
/*
    Input: Marvellous Infosystem by Piyush
    Output: 3
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    int iCount = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ' ')
        {
            iCount++;
        }
        iCnt++;
    }

    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%['^\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}
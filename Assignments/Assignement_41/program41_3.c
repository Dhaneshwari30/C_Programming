//3. Write a recursive program which accept string from user an count number of characters

#include<stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;
    static int iCnt = 0;

    if(str[iCnt] != '\0')
    {
        iCount++;
        iCnt++;
        Strlen(str);
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string: \n");
    scanf("%[^\n]s",arr);

    iRet = Strlen(arr);

    printf("%d\n",iRet);

    return 0;
}
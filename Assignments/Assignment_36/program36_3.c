//3. Write a program which accept string from user and toggle case
/*
    Input: Dhanoo
    Output: dHANOO
*/
#include<stdio.h>

void strtogglex(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if((str[iCnt] >= 'a') && (str[iCnt] <= 'z'))
        {
            str[iCnt] = str[iCnt] - 32;
        }
        else if((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
        {
            str[iCnt] = str[iCnt] + 32;
        }
        iCnt++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: \n");
    scanf("%[^'\n]s",arr);

    strtogglex(arr);

    printf("Modified string is %s",arr);

    return 0;
}
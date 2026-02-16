//4. Write a program which accept string from user and display only digits from that string
/*
    Input: marve89llous121
    Output: 89121

    Input: Demo
    Output: 
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if((str[iCnt] >= '0') && (str[iCnt] <= '9'))
        {
            printf("%c",str[iCnt]);
        }

        iCnt++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: \n");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}
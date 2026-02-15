//1. Write a program which accpet string from user and count number of capital characters.

#include<stdio.h>

int CountCapital(char *str)
{
    int Count = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str<= 'Z')
        {
            Count++;
        }
        str++;
    }

    return Count;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    iRet = CountCapital(arr);

    printf("%d", iRet);

    return 0;
}

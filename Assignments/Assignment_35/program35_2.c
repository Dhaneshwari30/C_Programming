//2. Write a program which accept string from user and count number of small character

#include<stdio.h>

int CountSmall(char *str)
{
    int Count = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str<= 'z')
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

    iRet = CountSmall(arr);

    printf("%d", iRet);

    return 0;
}
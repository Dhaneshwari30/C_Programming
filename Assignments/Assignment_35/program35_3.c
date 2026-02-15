//3. Write a program whcih accept string from user and return difference between frquency of small charcters and frequency of capital characters

#include<stdio.h>

int Difference(char *str)
{
    int cCount = 0;
    int sCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str<= 'Z')
        {
            cCount++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            sCount++;
        }

        str++;
    }

    return (sCount - cCount);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);

    printf("%d", iRet);

    return 0;
}
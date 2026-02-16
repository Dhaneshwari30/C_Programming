//2. Write a program which accept string from user and copy that characters of that string into another string by removnig all white spaces

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    int i = 0, j = 0;

    while(src[i] != '\0')
    {
        if(src[i] != ' ')
        {
            dest[j] = src[i];
            j++;
        }
        i++;
    }

    dest[j] = '\0';
}

int main()
{
    char arr[30] = "Marvel lous Pyth on";
    char brr[30];

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}
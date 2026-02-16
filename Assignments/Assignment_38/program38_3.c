//3. Write a program which accept string from user and copy that charachter of that string into another string by converting all small characters into chapital 

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    int i = 0, j =0;

    
    while(src[i] != '\0')
    {
        dest[j] = src[i];

        if((dest[j] >= 'a') && (dest[j] <= 'z'))
        {
            dest[j] = dest[j] - 32;
        }
        j++;
        i++;
    }

    dest[j] = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyCap(arr,brr);

    printf("%s",brr);

    return 0;
}
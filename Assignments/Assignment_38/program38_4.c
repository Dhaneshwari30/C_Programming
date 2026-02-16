//4. Write program which accept string from user and copy that characters of that string into another string by converting all acpital charcter into small case

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    int i = 0, j =0;

    
    while(src[i] != '\0')
    {
        dest[j] = src[i];

        if((dest[j] >= 'A') && (dest[j] <= 'Z'))
        {
            dest[j] = dest[j] + 32;
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

    StrCpySmall(arr,brr);

    printf("%s",brr);

    return 0;
}
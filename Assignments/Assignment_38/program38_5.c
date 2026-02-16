//5. Write a program which accept atring from user and copy that characters of that string into another string by toggling that case

#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
    int i = 0, j =0;

    
    while(src[i] != '\0')
    {
        dest[j] = src[i];

        if((dest[j] >= 'A') && (dest[j] <= 'Z'))
        {
            dest[j] = dest[j] + 32;
        }
        else if((dest[j] >= 'a') && (dest[j] <= 'z'))
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

    StrCpyToggle(arr,brr);

    printf("%s",brr);

    return 0;
}
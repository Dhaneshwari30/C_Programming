//1. Write a program which accept string from user and copy that characters of that string into another string in reverse order

#include<stdio.h>

void StrCpyRev(char *src,char *dest)
{
    int i = 0, j =0;
    
    while(src[j] != '\0')
    {
        j++;
    }
    j--;

    while(j >= 0)
    {
        dest[i] = src[j];

        i++;
        j--;
    }

    dest[i] = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr,brr);

    printf("%s",brr);

    return 0;
}

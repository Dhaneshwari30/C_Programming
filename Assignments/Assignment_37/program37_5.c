//5. Write a program which accept string from user reverse that string in place
/*
    Input: abcd
    Output: dcba
*/

#include<stdio.h>

void StrRevX(char *str)
{
    char temp;
    int i = 0, j = 0;

    while(str[j] != '\0')
    {
        j++;
    }
    j--;

    printf("%s",str);
    
    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: \n");
    scanf("%[^\n]s",arr);

    StrRevX(arr);

    printf("Modified string is %s",arr);

    return 0;
}
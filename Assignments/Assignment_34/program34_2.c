//2. Accept character from user. If character is small display its corresponting capital character and if it capital display its corresponting capital. In other case display as it is

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'a' && ch <='z') || ch >= 'A' && ch <= 'Z')
    {
        if(ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
            printf("%c\n",ch);
        }
        else
        {
            ch = ch + 32;
            printf("%c\n",ch);
        }
    }
    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
//3. Accept character from user. If it is capital them display all the character from the input charchter till Z. if input character is small then print all the characters in reverse prder till a. In other case return directly

#include<stdio.h>

void Display(char ch)
{
    int iCnt = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c\t", iCnt);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        iCnt = ch;
        while(iCnt != '`')
        {
            printf("%c\t",iCnt);
            iCnt--;
        }
    }
    else
    {
        printf("%c",ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
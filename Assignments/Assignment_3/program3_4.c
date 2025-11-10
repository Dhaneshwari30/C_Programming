/* 4. Accept one character from user and convert case of that character

    Input: a          Output: A
    Input: D          Output: d
*/

#include <stdio.h>
#include <ctype.h>

void DisplayConvert(char CValue)
{
    if(isupper(CValue))                 //to identify if charachter is upper
    {
        printf("%c", tolower(CValue));   // to convert it to lower
    }
    else
    {
        printf("%c", toupper(CValue));   //if not then convert to lower
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
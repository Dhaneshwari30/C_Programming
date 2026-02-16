//5. Write a recursive program which display below pattern
/*
    Input: 5
    Output: a   b   c   d   e
*/

#include<stdio.h>

void Display(int iNo)
{
    static char iChar = 'a';
    static int iCnt = 0;

    if(iCnt < iNo)
    {
        printf("%c\t",iChar);
        iCnt++;
        iChar++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
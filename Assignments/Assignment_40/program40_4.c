//5. Write a recursive program which display below pattern
/*
    Input: 5
    Output: A   B   C   D   E
*/

#include<stdio.h>

void Display(int iNo)
{
    static char iChar = 'A';
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
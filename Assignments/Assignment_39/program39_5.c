//5. Write a recursive program which display below pattern
//  a   b   c   d   e   f

#include<stdio.h>

void Display()
{
    static char iCnt = 'a';

    while(iCnt <= 'f')
    {
        printf("%c\t",iCnt);
        iCnt++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}
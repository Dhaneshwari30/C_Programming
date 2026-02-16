//1. Write a recursive program which display below pattern
// * * * * *

#include<stdio.h>

void Display()
{
    static int iCnt = 0;

    if(iCnt < 5)
    {
        printf("*\t");
        Display(iCnt++);
    }
}

int main()
{
    Display();

    return 0;
}

//1. Write a program which accpet number from user and print that number of $ and * on screen
//input: 5 output: $ * $ * $ * $ * $ *

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("&\t*\t");
    }
}
//Time Complexcity: log O(N)
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

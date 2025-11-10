/*1.Write a program which accpet one number from user and print that number or even numbers on screen

Input: 5
output: 2 4 6 8 10

*/

#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iCal = 0;

    if(iNo <= 0)
    {
        return;
    }
    else
    {
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iCal = 2 * iCnt;
            printf("  %d ",iCal);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}

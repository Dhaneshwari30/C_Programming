//1. Write a program which accept range from user and display all numbers in between that range
//input: 2 7
//ouput: 2 3 4 5 6 7

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    
    if(iStart <= iEnd)
    {
        iCnt = iStart;
        while(iCnt != iEnd + 1)
        {
            printf("%d\t", iCnt);
            iCnt++;
        }    
    }
    else
    {
        printf("Invalid Range");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}

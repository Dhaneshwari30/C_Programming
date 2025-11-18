//5. Write a program which accept range from user and display all numbers in between that range in reverse order
//input: 2 6
//output: 6 5 4 3 2

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart <= iEnd)
    {
        iCnt = iEnd;
        while(iCnt != iStart-1)
        {
            printf("%d\t", iCnt);
            iCnt--;
        }
    }
    else
    {
        printf("Invalid range");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting number: ");
    scanf("%d", &iValue1);

    printf("Enter ending number: ");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
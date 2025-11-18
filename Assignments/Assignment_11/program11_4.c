//4. Write a program which accept range from user and return addition of all even numbers in between that range.(Range should contains positive numbers only)

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        return -1;
    }

    iCnt = iStart;
    while(iCnt != (iEnd + 1))
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == (-1))
    {
        printf("Invalid Range");
    }
    else
    {
        printf("Addition is %d", iRet);
    }
    
    return 0;
}
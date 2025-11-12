//4. Write a program which accept three numbers and print its multiplication
//input: 5 4 7 output: 140

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 1;
    int iCnt = 0;

    if(iNo1 != 0)
    {
        iMul = iMul * iNo1;
    }
    else
    {
        iCnt++;
    }

    if(iNo2 != 0)
    {
        iMul = iMul * iNo2;
    }
    else
    {
        iCnt++;
    }

    if(iNo3 != 0)
    {
        iMul = iMul * iNo3;
    }
    else
    {
        iCnt++;
    }

    if(iCnt == 3)
    {
        return 0;
    }
    else
    {
        return iMul;   
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    
    printf("Please enter three numbers:");
    scanf("%d%d%d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication: %d", iRet);

    return 0;
}
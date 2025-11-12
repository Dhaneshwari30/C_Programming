//5. Write a program which accept N and print first 5 multiples of N
//intput: 4 output: 4 8 12 16 20

#include<stdio.h>

int MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d \t", iMul);
    }
}
//Time complexcity: log O(N)
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}
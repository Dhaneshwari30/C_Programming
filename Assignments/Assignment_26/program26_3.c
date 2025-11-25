//3.Accept number from user and display below pattern
//input: 5
//output: 1 * 2 * 3 * 4 * 5 *

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iCount = 1;

    for(iCnt = 1;iCnt <= iNo*2; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("*\t");
        }
        else
        {
            printf("%d\t", iCount);
            iCount++;
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}

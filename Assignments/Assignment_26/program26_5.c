//5. Accept number from user and display beloww pattern
//input: 8
//output: 2 4 6 8 10 12 14 16

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iMul = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMul = 2 * iCnt;
        printf("%d\t", iMul);
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

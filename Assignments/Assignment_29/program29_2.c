//1. Accept number of rows and number of columns from user and display below pattern
/*
    iRow = 4
    iCol = 4

    2 4 6 8
    1 3 5 7
    2 4 6 8
    1 3 5 7
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0,iEven = 0, iOdd = 0;

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) == 0)
            {
                iEven = 2 * j;
                printf("%d\t", iEven);
            }
            else
            {
                iOdd = (2 * j) - 1;
                printf("%d\t", iOdd);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter the number of columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
//4. Accept number of rows and number of columns from user and display below pattern.
/*
    iRow = 6
    iCol = 6

    * * * * * *
    * *       *
    *   *     *
    *     *   *
    *       * * 
    * * * * * *     
*/

#include<stdio.h>

void Patter(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input");
        printf("Number of rows and columns should be same");

        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol || i == j)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
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

    Patter(iValue1, iValue2);

    return 0;
}
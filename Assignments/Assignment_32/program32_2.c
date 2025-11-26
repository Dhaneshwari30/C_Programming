//1. Accpet number of rows and number od columns from user and display below patter
/*
    iRow = 4
    iCol = 4

    * * * #
    * * # @
    * # @ @
    # @ @ @ 
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
            if(j == (iCol - i) + 1)
            {
                printf("#\t");
            }
            else if(j < (iCol - i) + 1)
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
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
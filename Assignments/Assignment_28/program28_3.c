//2. Accept number of rows and number of columns from user and display below pattern
/*
    iRow = 3
    iCol = 5

    A A A A A 
    B B B B B
    C C C C C
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char CH = '\0';

    for(CH = 'A',i = 1; i <= iRow; i++, CH++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t",CH);
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
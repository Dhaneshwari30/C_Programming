//2. Accept number of rows and number of columns from user and display below pattern
/*
    iRow = 4
    iCol = 4

    A B C D 
    a b c d
    A B C D
    a b c d
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';
    char CH = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(ch = 'a',CH = 'A',j = 1; j <= iCol; j++,ch++,CH++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t",ch);
            }
            else
            {
                printf("%c\t",CH);
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
//1. Print all positive factors of a number

#include<stdio.h>

void print_factor(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {    
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    print_factor(number);

    return 0;
}

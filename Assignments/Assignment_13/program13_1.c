//1. Print all numbers from 1 to N

#include<stdio.h>

void print_numbers(int limit)
{
    int iCnt = 1;

    while(iCnt != limit+1)
    {
        printf("%d\t", iCnt);
        iCnt++;
    }
}

int main()
{
    int limit = 0;

    printf("Enter number: ");
    scanf("%d", &limit);

    print_numbers(limit);

    return 0;
}

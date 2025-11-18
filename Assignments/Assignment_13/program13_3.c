//3. Print all odd numbers up to N

#include<stdio.h>

void print_odd_numbers(int limit)
{
    int iCnt = 1;

    while(iCnt <= limit)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
        }
        iCnt++;
    }
}

int main()
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    print_odd_numbers(limit);

    return 0;
}
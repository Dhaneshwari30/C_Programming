//2. Print all even numbers up to N

#include<stdio.h>

void print_even_numbers(int limit)
{
    int iCnt = 1;

    while(iCnt <= limit+1)
    {
        if((iCnt % 2) == 0)
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

    print_even_numbers(limit);

    return 0;
}
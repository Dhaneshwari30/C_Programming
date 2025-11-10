//4. Check positive, negative or zero

#include <stdio.h>

void CheckNumberType(int iNo)
{
    if(iNo > 0)
    {
        printf("%d is postive number", iNo);
    }
    else if(iNo < 0)
    {
        printf("%d is negative number", iNo);
    }
    else
    {
        printf("%d is a zero number", iNo);
    }
}

int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckNumberType(number);

    return 0;
}
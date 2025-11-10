//5.Find the largest amoung three numbers

#include <stdio.h>

int FindLargest(int x, int y, int z)
{
    if (x > y && x >z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int a = 0, b = 0, c = 0, result = 0;

    printf("Enter three number: ");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a,b,c);
    printf("Largestnumber is: %d\n", result);

    return 0;
}
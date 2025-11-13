//5.Write a program which accept area in square feel and convert it into square meter.
//1 square feet = 0.0929 Square meter

#include<stdio.h>

double SquareMeter(int iValue)
{
    double Sm = 0.0;

    Sm = (double)iValue * 0.0929;

    return Sm;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Square meter : %f", dRet);

    return 0;
}
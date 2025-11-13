//4. Write a program which accpet temperature in Fahrenheit and convert it into celsius.
//1 celsius = (Fahrenheit - 32) * (5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double Cs = 0.0;

    Cs = (fTemp -32.0) * (5.0/9.0);

    return Cs;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Celsius : %f", dRet);

    return 0;
}
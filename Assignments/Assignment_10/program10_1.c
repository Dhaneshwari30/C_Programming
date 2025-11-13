//1. Write a program which accept radius of circle from user and calculate its area. 
//Consider value of PI as 3.14.( Area = PI * Radius * Radius)

#include<stdio.h>

double CircleArea(float fRadius)
{
    double iArea = 0.0f;

    if(fRadius < 0)
    {
        fRadius = -fRadius;
    }

    iArea = 3.14 * fRadius * fRadius;

    return iArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("ENter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area is %0.4f", dRet);

    return 0;
}

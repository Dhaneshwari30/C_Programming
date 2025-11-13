//2. Write a program which accpet width and height of rectangle from user and calculate its area.
//(Area = Width * Height)

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double Area = 0;

    Area = fWidth * fHeight;

    return Area;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0f;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area: %0.3f", dRet);
}
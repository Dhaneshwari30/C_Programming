//5. write a program which accept total marks & obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    float fPer = 0.0f;

    if((iNo1 == 0) || (iNo2 == 0))
    {
        return 0.0f;
    }
    else
    {
        fPer = ((float)iNo2/iNo1) * 100;
        return fPer;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obatined marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %f%%", fRet);

    return 0;
}
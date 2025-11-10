/*1. Write a program which accept number from user and display its multiplication of factors.
Input : 12
output: 144 (1*2*3*4*6)
*/

#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0, iMul = 1;

    if (iNo < 0)
    {
        iNo == -iNo;
    }

    for(i = 1; i <= (iNo/2); i++)
    {
        if((iNo % i) == 0)
        {
            iMul = iMul * i;
        }
    }

    return iMul;
}

int main()
{
     int iValue = 0;
     int iRet = 0;

     printf("Enter number: ");
     scanf("%d", &iValue);

     iRet = MultFact(iValue);

     printf("%d", iRet);

     return 0;
}
//4. Write a recursive program which accept number from user and return its factorial

#include<stdio.h>

int Fact(int iNo)
{
    static int iMul = 1;

    if(iNo >= 1)
    {
        iMul = iNo * iMul;
        iNo--;
        Fact(iNo);
    }

    return iMul;
}
int main()
{
    int iValue = 0, iRet =0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d",iRet);

    return 0;
}
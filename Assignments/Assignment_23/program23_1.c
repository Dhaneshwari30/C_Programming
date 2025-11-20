//1. Accept N number from user and accept another number as No, check whethe no is present of not

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = TRUE;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0,iValue = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number: ");
    scanf("%d", &iValue);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element: ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("%d is present", iValue);
    }
    else 
    {
        printf("%d is not present", iValue);
    }

    free(p);

    return 0;
}

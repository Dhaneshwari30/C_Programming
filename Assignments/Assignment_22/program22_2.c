//2. Accept N numbers from user and return difference between frquency of even number and odd numbers

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLenght)
{
    int iCnt = 0, iCountEven = 0, iCountOdd = 0;

    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCountEven++;
        }
        else 
        {
            iCountOdd++;
        }
    }

    return iCountEven-iCountOdd;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iSize);

    p = (int *) malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p, iSize);

    printf("Difference of even and odd factors: %d", iRet);

    free(p);

    return 0;
}
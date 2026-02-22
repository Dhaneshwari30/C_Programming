//Write a program which count prime number

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void DisplayReverse(PNODE Head)
{
    if(Head != NULL)
    {
        DisplayReverse(Head->Next);
        printf("| %d |->",Head->Data);
    }
}

void CountDigits(PNODE Head)
{
    int iDigit = 0;
    int iCount = 0;
    int temp = 0;

    while(Head != NULL)
    {
        iDigit = 0;
        iCount = 0;
        temp = Head->Data;

        while(temp != 0)
        {
            iDigit = temp % 10;
            iCount++;
            temp = temp / 10;
        }

        printf("%d\t",iCount);

        Head = Head->Next;
    }
}

void SumDigits(PNODE Head)
{
    int iDigit = 0;
    int iSum = 0;
    int temp = 0;

    while(Head != NULL)
    {
        iDigit = 0;
        iSum = 0;
        temp = Head->Data;

        while(temp != 0)
        {
            iDigit = temp % 10;
            iSum = iSum + iDigit;
            temp = temp / 10;
        }
        printf("%d\t",iSum);

        Head = Head->Next;
    }
}

void DisplayPrime(PNODE Head)
{
    int iCnt = 0;
    int Prime = 0;

    while(Head != NULL)
    {
        for(iCnt = 2, Prime = 0; iCnt <= (Head->Data/2); iCnt++)
        {
            if(Head->Data % iCnt == 0)
            {
                Prime = 1;
                break;
            }
        }

        if(Prime == 0)
        {
            printf("%d\t",Head->Data);
        }

        Head = Head->Next;

    }
}

int CountPrime(PNODE Head)
{
    int iCnt = 0;
    int Prime = 0;
    int iCount = 0;

    while(Head != NULL)
    {
        for(iCnt = 2, Prime = 0; iCnt <= (Head->Data/2); iCnt++)
        {
            if(Head->Data % iCnt == 0)
            {
                Prime = 1;
                break;
            }
        }

        if(Prime == 0)
        {
            iCount++;
        }

        Head = Head->Next;
    }

    return iCount;
}

int main()
{
    PNODE first = NULL;
    BOOL bRet = 0;
    int iRet = 0;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,6);
    InsertFirst(&first,101);
    InsertFirst(&first,11);
    InsertFirst(&first,21);
    InsertFirst(&first,28);

    DisplayReverse(first);

    printf("\n");

    CountDigits(first);

    printf("\n");

    SumDigits(first);

    printf("\n");

    DisplayPrime(first);

    printf("\n");

    iRet = CountPrime(first);

    printf("%d\n",iRet);

    return 0;
}
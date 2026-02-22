//Write program which Count two digit number

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

int Difference(PNODE Head)
{
    int iMax = 0, iMin = 0;

    iMin = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iMax = Head->Data;
        }
        else if(Head->Data < iMin)
        {
            iMin = Head->Data;
        }

        Head = Head->Next;
    }

    return (iMax-iMin);
}

BOOL CheckAllPositive(PNODE Head)
{
    BOOL bFlag = TRUE;

    while(Head != NULL)
    {
        if(Head->Data < 0)
        {
            bFlag = FALSE;
            break;
        }

        Head = Head->Next;
    }

    return bFlag;
}

void DisplayDivByThree(PNODE Head)
{
    while(Head != NULL)
    {
        if((Head->Data % 3) == 0)
        {
            printf("%d\t",Head->Data);
        }

        Head = Head->Next;
    }
}

int CountDivByFive(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        if(Head->Data % 5 == 0)
        {
            iCount++;
        }

        Head = Head->Next;
    }

    return iCount;
}

int CountTwoDigit(PNODE Head)
{
    int iDigit = 0;
    int dCount = 0;
    int iCount = 0;

    while(Head != NULL)
    {
        int dCount = 0;
        while(Head->Data != 0)
        {
            iDigit = Head->Data % 10;
            dCount++;
            Head->Data = Head->Data / 10;
        }

        if(dCount == 2)
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
    InsertFirst(&first,1377);
    InsertFirst(&first,21);
    InsertFirst(&first,28);

    iRet = Difference(first);

    printf("%d\n",iRet);

    bRet = CheckAllPositive(first);

    if(bRet == TRUE)
    {
        printf("All values are positive\n");
    }
    else
    {
        printf("Not all values are positive\n");
    }

    DisplayDivByThree(first);

    iRet = CountDivByFive(first);

    printf("\n");

    printf("%d",iRet);

    iRet = CountTwoDigit(first);

    printf("\n");

    printf("%d",iRet);
    
    return 0;

}
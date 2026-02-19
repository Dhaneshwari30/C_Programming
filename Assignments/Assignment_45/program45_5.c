//Write a program which count number that are greater than given number

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

void DisplayOdd(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->Data % 2 != 0)
        {
            printf("%d\t",Head->Data);
        }

        Head = Head->Next;
    }
}

int FirstOccur(PNODE Head, int No)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            return iPos;
        }

        iPos++;
        Head = Head->Next;
    }

    return 0;
}

int LastOccur(PNODE Head, int No)
{
    int iPos = 1;
    int LastPos = 0;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            LastPos = iPos;
        }

        iPos++;
        Head = Head->Next;
    }

    return LastPos;
}

int CountGreater(PNODE Head, int X)
{
    int iCount = 0;

    while(Head != NULL)
    {
        if(Head->Data > X)
        {
            iCount++;
        }

        Head = Head->Next;
    }

    return iCount;
}

int CountLess(PNODE Head, int X)
{
    int iCount = 0;

    while(Head != NULL)
    {
        if(Head->Data < X)
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

    DisplayOdd(first);

    iRet = FirstOccur(first,101);

    printf("\n%d",iRet);

    iRet = LastOccur(first,101);

    printf("\n%d",iRet);

    iRet = CountGreater(first,30);

    printf("Greater than 30 are: %d\n",iRet);

    iRet = CountLess(first,30);

    printf("Less than 30 are: %d\n",iRet);
    
    return 0;

}
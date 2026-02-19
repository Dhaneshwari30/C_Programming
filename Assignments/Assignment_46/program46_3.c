//Write a program which Display number that are lesser than given number

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

void DisplayGreater(PNODE Head, int X)
{
    while(Head != NULL)
    {
        if(Head->Data > X)
        {
            printf("%d\t",Head->Data);
        }

        Head = Head->Next;
    }
}

void DisplayLess(PNODE Head, int X)
{
    while(Head != NULL)
    {
        if(Head->Data < X)
        {
            printf("%d\t",Head->Data);
        }

        Head = Head->Next;
    }
}

BOOL IsEmpty(PNODE Head)
{
    BOOL bFlag = FALSE;

    if(Head == NULL)
    {
        bFlag = TRUE;
    }

    return bFlag;
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

    DisplayGreater(first,30);

    printf("\n");
    
    DisplayLess(first,30);

    printf("\n");

    bRet = IsEmpty(first);

    if(bRet == TRUE)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("List is not empty\n");
    }

    return 0;

}
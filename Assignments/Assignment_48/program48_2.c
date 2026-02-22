//Write program which replace Odd number with 0

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

void ReplaceEven(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if((temp->Data % 2) == 0)
        {
            temp->Data = 0;
        }

        temp = temp->Next;
    }
}

void ReplaceOdd(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if((temp->Data % 2) != 0)
        {
            temp->Data = 0;
        }

        temp = temp->Next;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\t",Head->Data);
        Head =  Head->Next;
    }
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

    Display(first);

    //ReplaceEven(&first);

    //printf("\n");

    //Display(first);

    ReplaceOdd(&first);

    printf("\n");

    Display(first);

    return 0;

}
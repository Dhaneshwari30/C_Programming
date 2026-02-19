//Write a program which display only Odd Element

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

int main()
{
    PNODE first = NULL;
    BOOL bRet = 0;
    int iRet = 0;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,6);
    InsertFirst(&first,11);
    InsertFirst(&first,21);
    InsertFirst(&first,28);

    DisplayOdd(first);

    return 0;

}

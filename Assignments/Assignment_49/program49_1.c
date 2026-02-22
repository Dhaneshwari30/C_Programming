//Write program which returns the difference between Mix value and Min value

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

    while(Head != 0)
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

    iRet = Difference(first);

    printf("%d\n",iRet);

    return 0;

}

//Write a program which returns the largest element SLL
//Function should return position at which element is found

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

int SearchFirstOcc(PNODE Head, int no)
{
    int iPos = 1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            return iPos;
        }

        Head = Head->Next;
        iPos++;
    }

    return 0;
}

int SearchLastOcc(PNODE Head, int no)
{
   int iPos = 1;
   int LastPos = 0;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            LastPos = iPos;
        }

        Head = Head->Next;
        iPos++;
    }

    return LastPos; 
}

int Addition(PNODE Head)
{
    int iSum = 0;

    while(Head != 0)
    {
        iSum = iSum + Head->Data;

        Head = Head->Next;
    }

    return iSum;
}

int Maximum(PNODE Head)
{
    int iMax = 0;

    while(Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iMax = Head->Data;
        }

        Head = Head->Next;
    }

    return iMax;
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |->",Head->Data);
        Head = Head->Next;
    }
    printf(" NULL\n");
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);
    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    iRet = SearchFirstOcc(first,101);

    printf("First Occ of searched number: %d\n",iRet);

    iRet = SearchLastOcc(first,101);

    printf("Last Occ of searched number: %d\n",iRet);

    iRet = Addition(first);

    printf("Sum of elements in the list: %d\n",iRet);

    iRet = Maximum(first);

    printf("Largest element is: %d\n",iRet);

    return 0;
}
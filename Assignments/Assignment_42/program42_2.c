//Write a program which search last occurance of particular element from singly linear linked list
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

    iRet = SearchLastOcc(first,101);

    printf("Last Occ of searched number: %d\n",iRet);

    return 0;
}
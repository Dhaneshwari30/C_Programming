//Write a program which search an element check whether a number is present

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

BOOL Search(PNODE Head, int No)
{
    BOOL bFlag = FALSE;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            bFlag = TRUE;
            break;
        }

        Head = Head->Next;
    }

    return bFlag;
}

int main()
{
    PNODE first = NULL;
    BOOL bRet = 0;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,6);
    InsertFirst(&first,11);
    InsertFirst(&first,21);
    InsertFirst(&first,28);

    bRet = Search(first, 30);

    if(bRet == TRUE)
    {
       printf("Number is present\n"); 
    }
    else
    {
        printf("Number is not present\n");
    }

    return 0;

}

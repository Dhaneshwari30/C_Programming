//Write a program which display all elements which are perfect from SLL
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

void DisplayPrime(PNODE Head)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    while(Head != NULL)
    {
        bFlag = TRUE;

        for(iCnt = 2; iCnt <= (Head->Data/2); iCnt++)
        {
            if(Head->Data % iCnt == 0)
            {
                bFlag = FALSE;
                break;
            }
        }

        if(bFlag == TRUE)
        {
            printf("%d\t",Head->Data);
        }

        Head = Head->Next;
    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,6);
    InsertFirst(&first,11);
    InsertFirst(&first,21);
    InsertFirst(&first,28);

    DisplayPrime(first);

    return 0;
}
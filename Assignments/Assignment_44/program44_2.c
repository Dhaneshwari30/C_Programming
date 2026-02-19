//Write a program which count nodes containing even values

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

int CountEven(PNODE Head)
{
    int iCnt = 0;

    while(Head != NULL)
    {
        if(Head->Data % 2 == 0)
        {
            iCnt++;
        }

        Head = Head->Next;
    }

    return iCnt;
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

    bRet = Search(first, 30);

    if(bRet == TRUE)
    {
       printf("Number is present\n"); 
    }
    else
    {
        printf("Number is not present\n");
    }

    iRet = CountEven(first);

    printf("Total Even elements: %d\n",iRet);

    return 0;

}
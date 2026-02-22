//Write program which count nodes at Nth Position

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

void MakeAbsolute(PPNODE Head)
{
    PNODE temp = *Head;

    while(temp != NULL)
    {
        if(temp->Data < 0)
        {
            temp->Data =  temp->Data * -1;
        }

        temp = temp->Next;
    }
}

void DisplayGreaterThanAvg(PNODE Head)
{
    float avg = 0.0f;
    int iCount = 0;
    PNODE temp = Head;

    while(temp != NULL)
    {
        avg = avg + (temp)->Data;
        iCount++;
        temp = temp->Next;
    }

    avg = avg/iCount;

    while(Head != NULL)
    {
        if(Head->Data > avg)
        {
            printf("%d\t",Head->Data);
        }
        Head = Head->Next;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\t",Head->Data);

        Head = Head->Next;
    }
}

BOOL CheckSorted(PNODE Head)
{
    BOOL bFlag = FALSE;
    int temp = 0;

    bFlag = TRUE;

    while(Head != NULL)
    {
        if(temp < Head->Data)
        {
            temp = Head->Data;
        }
        else
        {
            bFlag = FALSE;
            break;
        }

        Head = Head->Next;
    }

    return bFlag;
}

void DisplayAlternate(PNODE Head)
{
    int iCount = 1;

    while(Head != NULL)
    {
        if(iCount % 2 != 0)
        {
            iCount++;
        }
        else if(iCount % 2 == 0)
        {
            printf("%d\n",Head->Data);
            iCount++;
        }

        Head =  Head->Next;
    }
}

int Count(PNODE Head , int pos)
{
    int iCount = 0;

    while(iCount != pos)
    {
        iCount++;

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
    InsertFirst(&first,-13);
    InsertFirst(&first,21);
    InsertFirst(&first,28);

    Display(first);

    MakeAbsolute(&first);

    printf("\n");

    Display(first);

    printf("\n");

    DisplayGreaterThanAvg(first);

    printf("\n");

    bRet = CheckSorted(first);

    if(bRet == TRUE)
    {
        printf("List is sorted\n");
    }
    else
    {
        printf("List is not sorted\n");
    }

    DisplayAlternate(first);

    iRet = Count(first, 4);

    return 0;

}
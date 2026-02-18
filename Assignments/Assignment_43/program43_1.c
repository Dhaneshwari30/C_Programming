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

void DisplayPerfect(PNODE Head)
{
    int i = 0;
    
    while(Head != NULL)
    {
        int iSum = 0;

        for(i = 1; i <= (Head->Data/2); i++)
        {
            if((Head->Data % i) == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == Head->Data)
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

    DisplayPerfect(first);

    return 0;
}

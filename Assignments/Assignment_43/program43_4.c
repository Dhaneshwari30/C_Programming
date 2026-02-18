//Write a program which return second maximum element
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

int Minimum(PNODE Head)
{
    int iMin = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data < iMin)
        {
            iMin = Head->Data;
        }

        Head = Head->Next;
    }

    return iMin;
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

int AdditionEven(PNODE Head)
{
    int iSum = 0;

    while(Head != NULL)
    {
        if(Head->Data % 2 == 0)
        {
            iSum = iSum + Head->Data;
        }

        Head = Head->Next;
    }

    return iSum;
}

int SecMaximum(PNODE Head)
{
    int FirstMax = 0;
    int SecondMax = 0;

    while(Head != NULL)
    {
        if(FirstMax < Head->Data)
        {
            SecondMax = FirstMax;
            FirstMax = Head->Data;
        }
        else if((SecondMax < Head->Data) && (Head->Data != FirstMax))
        {
            SecondMax = Head->Data;
        }
        Head = Head->Next;
    }

    return SecondMax;
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

    iRet = SearchFirstOcc(first,101);

    printf("First Occ of searched number: %d\n",iRet);

    iRet = SearchLastOcc(first,101);

    printf("Last Occ of searched number: %d\n",iRet);

    iRet = Addition(first);

    printf("Sum of elements in the list: %d\n",iRet);

    iRet = Maximum(first);

    printf("Largest element is: %d\n",iRet);

    iRet = Minimum(first);

    printf("Smallest element is: %d\n",iRet);

    DisplayPerfect(first);

    printf("\n");

    DisplayPrime(first);

    printf("\n");

    iRet = AdditionEven(first);

    printf("Addition of even elements: %d\n",iRet);

    iRet = SecMaximum(first);

    printf("Second Maximum: %d",iRet);

    return 0;
}
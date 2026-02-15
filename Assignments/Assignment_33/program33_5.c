//5. Accept division of student from user and depends on the devision display exam timing.
//   There are 4 divisions in school as A,B,C,D. Exam of division A at 7AM, B at 8:30AM, C at 9:20AM and D at 10:30AM.
//(Application should be case insensitive)
/*
    Input: C or c
    Output: Your exam at 9:20AM
*/

#include <stdio.h>

void DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your exam is at 7AM");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Your exam is at 8:30 AM");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Your exam is at 9:20 AM");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("Your exam is at 10:30 AM");
    }
    else
    {
        printf("Invaild Input");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter your division: ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
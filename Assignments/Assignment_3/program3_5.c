//5. Accpet character from user and check wheather that character is vowel(a,e,i,o,u) or not

#include <stdio.h>

typedef int BOOL;        //keyword used to give new name to existinig data type

#define TRUE 1         //preprocessor directive to create macro TRUE is the symbolic representstion of int 1
#define FALSE 0

BOOL ChkVowel (char cLetter)
{
    if(('a'== cLetter) || ('e' == cLetter) || ('i' == cLetter) || ('o' == cLetter) || ('u' == cLetter) || 
        ('A' == cLetter) || ('E' == cLetter) || ('I' == cLetter) || ('O' == cLetter) || ('U' == cLetter))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: \n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}
//1. Write a program which displays ASCII table.Table contains symbol Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    char *ControlChar[] = {"NUL","SOH","STX","ETX","EOT","ENQ","ACK","BEL",
                            "BS","TAB","LF","VT","FF","CR","SO","SI","DLE",
                            "DC1","DC2","DC3","DC4","NAK","SYN","ETB","CAN",
                            "EM","SUB","ESC","FS","GS","RS","US"};

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%d\t",iCnt);
        printf("%x\t",iCnt);
        printf("%o\t",iCnt);

        if(iCnt < 32 )
        {
            printf("%s",ControlChar[iCnt]);
        }
        else if(iCnt == 127)
        {
            printf("DEL");
        }
        else
        {
            printf("%c",iCnt);
        }
        printf("\n");
    }
}

int main()
{
    printf("Dec\tHex\tOct\tChar\n");

    DisplayASCII();

    return 0;
}

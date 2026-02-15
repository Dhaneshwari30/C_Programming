//5. Write a program which accept string from user and display it in reverse order.

#include<stdio.h>

void Reverse(char *str)
{
    char temp = *str;

    while(temp != '\0')
    {
        
    }

}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return 0;
}
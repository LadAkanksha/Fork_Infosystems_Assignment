/// Write a program to accept a character from user and check whether it is alphabet or not
///(A-Z , a-z).

#include<stdio.h>
#include<conio.h>

int main()
{
    char cChar = '\0';

    printf("Enter a Character(A-Z , a-z) : ");
    scanf("%c",&cChar);

    if((cChar >= 'A' && cChar <= 'Z') || (cChar >= 'a' && cChar <= 'z') )
        printf("\nTrue");
    else
        printf("\nFalse");

    getch();
    return 0;
}

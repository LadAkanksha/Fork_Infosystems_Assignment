/// Write a program to accept a character from the user and check if it is an upper case letter or
/// a lower case letter.

#include<stdio.h>
#include<conio.h>

int main()
{
    char cChar = '\0';

    printf("Enter a Character : ");
    scanf("%c",&cChar);

    if(cChar >= 'A' && cChar <= 'Z')
        printf("\nThe character '%c' is Upper Case.",cChar);
    else if (cChar >= 'a' && cChar <= 'z')
        printf("\nThe character '%c' is a Lower Case.",cChar);
    else
        printf("\nThe character '%c' is not a letter.",cChar);

    getch();
    return 0;
}

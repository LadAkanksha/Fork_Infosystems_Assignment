/// Write a program to accept a character from the user and determine if it is an upper case
/// letter, lower case letter, digit, or special symbol.

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
    else if (cChar >= '0' && cChar <= '9')
        printf("\nThe character '%c' is a Digit.",cChar);
    else
        printf("\nThe character '%c' is a Special Symbol.",cChar);

    getch();
    return 0;
}

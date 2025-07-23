/// Write a program to accept a character from user and convert case (Toggle Case) of that
/// character

#include<stdio.h>
#include<conio.h>

int main()
{
    char cChar = '\0';

    printf("Enter a Character(A-Z , a-z) : ");
    scanf("%c",&cChar);

    if((cChar >= 'A' && cChar <= 'Z'))
        printf("%c",cChar+32);
    else if(cChar >= 'a' && cChar <= 'z')
        printf("%c",cChar-32);
    else
        printf("\n%c",cChar);

    getch();
    return 0;
}

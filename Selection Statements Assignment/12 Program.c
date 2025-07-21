/// Write a program to accept a character from the user and check whether that character is a
/// vowel (a, e, i, o, u). Display the result.

#include<stdio.h>
#include<conio.h>

int main()
{
    char cVowel = '\0';

    printf("Enter a Character : ");
    scanf("%c",&cVowel);

    if(cVowel == 'A' || cVowel =='a' || cVowel == 'E' || cVowel =='e' || cVowel == 'I' || cVowel =='i' || cVowel == 'O' || cVowel =='o' || cVowel == 'U' || cVowel =='u')
        printf("\nThe character '%c' is a vowel.",cVowel);
    else
        printf("\nThe character '%c' is not a vowel.",cVowel);
    getch();
    return 0;
}

/// Write a program to accept a character from the user and determine if it is a vowel (a, e, i, o,
/// u), a consonant, or other. Display the result.

#include<stdio.h>
#include<conio.h>

int main()
{
    char cVowel = '\0';

    printf("Enter a Character : ");
    scanf("%c",&cVowel);

    if(cVowel == 'A' || cVowel =='a' || cVowel == 'E' || cVowel =='e' || cVowel == 'I' || cVowel =='i' || cVowel == 'O' || cVowel =='o' || cVowel == 'U' || cVowel =='u')
        printf("\nThe character '%c' is a vowel.",cVowel);
    else if ((cVowel >= 'A' && cVowel <= 'Z')|| (cVowel >= 'a' && cVowel <= 'z'))
        printf("\nThe character '%c' is a consonant.",cVowel);
    else
        printf("\nThe character '%c' is a other.",cVowel);

    getch();
    return 0;
}

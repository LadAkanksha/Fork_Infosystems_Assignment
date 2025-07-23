/*
    Write a program to accept division of student from user and depends on the division display
exam timing.
    There are 4 divisions in school as A, B, C, D.
    Exam of division A at 10 AM,
    Exam of division B at 10.30 AM,
    Exam of division C at 1 PM and
    Exam of division D at 1.30 PM.
    (Application should be case insensitive) (by using switch).
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char cDiv = '\0';

    printf("\nEnter a Division : ");
    scanf("%c",&cDiv);

    switch(cDiv)
    {
        case 'A':
        case 'a':
                printf("\nExam of division A at 10 AM.");
                break;
        case 'B':
        case 'b':
                printf("\nExam of division B at 10.30 AM");
                break;
        case 'C':
        case 'c':
                printf("\nExam of division C at 1 PM and");
                break;
        case 'D':
        case 'd':
                printf("\nExam of division D at 1.30 PM");
                break;
        default:
                printf("\nInvalid Division !!!");
                break;
    }

    getch();
    return 0;
}

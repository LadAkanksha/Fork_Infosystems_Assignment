/// Write a program to check if a given number is positive or negative

#include<stdio.h>
#include<conio.h>

int main()
{

    int iNo = 0;

    printf("Enter a Number : ");
    scanf("%d",&iNo);

    if(iNo > 0)
        printf("\n%d is Positive Number.",iNo);
    else if(iNo < 0)
        printf("\n%d is Negative Number.",iNo);
    else
        printf("\n%d is Neutral Number.",iNo);
    getch();
    return 0;
}123

/// Write a program to check if a given number is even or odd.


#include<stdio.h>
#include<conio.h>

int main()
{

    int iNo = 0;

    printf("Enter a Number : ");
    scanf("%d",&iNo);

    if(iNo % 2 == 0)
        printf("\n%d is Even Number.",iNo);
    else
        printf("\n%d is Odd Number.",iNo);
    getch();
    return 0;
}

/// Write a program that accepts a number from the user and checks if it is even or odd using
/// the ternary operator

#include<stdio.h>
#include<conio.h>

int main()
{

    int iNo = 0 ;

    printf("Enter a Number : ");
    scanf("%d",&iNo);

    iNo % 2 == 0 ? printf("\nThe Number is Even."):printf("\nThe Number is Odd.");

    getch();
    return 0;
}

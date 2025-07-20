/// Write a program to accept a number from the user and check if it is less than 10.
/// if it is less than 10, print "Hello"; otherwise, print "World"


#include<stdio.h>
#include<conio.h>

int main()
{

    int iNo = 0 ;

    printf("Enter a Number : ");
    scanf("%d",&iNo);

    if(iNo < 10)
        printf("\nHello");
    else
        printf("\n World");
    getch();
    return 0;
}

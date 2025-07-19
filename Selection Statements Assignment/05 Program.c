/// Write a program to accept a number from the user and check whether it is divisible by 7,
/// then display the result.

#include<stdio.h>
#include<conio.h>

int main()
{

    int iNo = 0 ;

    printf("Enter a Number : ");
    scanf("%d",&iNo);

    if(iNo % 7 == 0)
        printf("\n%d is divisible by 7.",iNo);
    else
        printf("\n%d is not divisible by 7.",iNo);


    getch();
    return 0;
}

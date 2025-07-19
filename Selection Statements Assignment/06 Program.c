/// Write a program to accept a number from the user and check whether it is divisible by 5 and
/// 7 or not.

#include<stdio.h>
#include<conio.h>

int main()
{

    int iNo = 0 ;

    printf("Enter a Number : ");
    scanf("%d",&iNo);

    if( iNo % 7 == 0 && iNo % 5 == 0)
        printf("\n%d is divisible by 7 and 5.",iNo);
    else if(iNo % 7 == 0)
        printf("\n%d is only divisible by 7.",iNo);
    else if(iNo % 5 == 0)
        printf("\n%d is only divisible by 5.",iNo);
    else
        printf("\n%d is not divisible by 7 nor by 5.",iNo);


    getch();
    return 0;
}

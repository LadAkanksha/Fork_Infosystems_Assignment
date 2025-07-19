/// Write a program to find the maximum number among three given numbers provided by the
/// user and display the result.

#include<stdio.h>
#include<conio.h>

int main()
{

    int iNo1 = 0 , iNo2 = 0 , iNo3 = 0;

    printf("Enter Three Number : ");
    scanf("%d%d%d",&iNo1,&iNo2,&iNo3);

    if(iNo1 > iNo2 && iNo1 > iNo3)
        printf("The Greater Number is : %d",iNo1);
    else if(iNo2 > iNo3)
        printf("\nThe Greater Number is : %d",iNo2);
    else
        printf("\nThe Greater Number is : %d",iNo3);

    getch();
    return 0;
}

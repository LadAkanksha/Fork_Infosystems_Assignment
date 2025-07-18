/// Write a program to find the maximum number between two given numbers.

#include<stdio.h>
#include<conio.h>

int main()
{

    int iNo1 = 0 , iNo2 = 0;

    printf("Enter Two Number : ");
    scanf("%d%d",&iNo1,&iNo2);


   (iNo1 > iNo2)?printf("The Greater Number is : %d",iNo1):((iNo1 < iNo2)?printf("The Greater Number is : %d",iNo2):printf("Both Numbers are Equal"));

    getch();
    return 0;
}

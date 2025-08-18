///Write a program which accept number from user and check whether it is Palindrome or not.
///(use a separate reverse variable to compare)

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iRev = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);

    iTemp = iNum;

    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        iRev = (iRev * 10) + iDigit;
        iTemp /= 10;
    }
    if(iNum == iRev)
    {
        printf("----------------------------------------");
        printf("\n\tThe Number is Palindrome ");
        printf("\n----------------------------------------");
    }
    else
    {
        printf("\nThe Number is Not Palindrome ");
    }

    getch();
    return 0;
}

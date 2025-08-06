///Write a program that accepts a number from the user, sums its digits, and displays them in
///the following format.
#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iSum = 0 , iDigit = 0, iTemp = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);
    iTemp = iNum;
    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        iSum += iDigit;
        iTemp /= 10;
    }

    printf("\nSum of Digits in %d = %d",iNum , iSum);

    getch();
    return 0;

}

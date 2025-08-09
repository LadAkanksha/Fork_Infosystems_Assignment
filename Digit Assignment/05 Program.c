///Write a program which accept number from user and return the count of odd digits.

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iOddCount = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);
    iTemp = iNum;
    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        if(iDigit % 2 != 0)
        {
            ++iOddCount;
        }
        iTemp /= 10;
    }

    printf("\nOdd1 Count of Digits in %d = %d",iNum , iOddCount);

    getch();
    return 0;

}

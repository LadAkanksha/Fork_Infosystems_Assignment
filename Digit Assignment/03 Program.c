///Write a program which accept number from user and return the count of digits.

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iCount = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);
    iTemp = iNum;
    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        ++iCount;
        iTemp /= 10;
    }

    printf("\nCount of Digits in %d = %d",iNum , iCount);

    getch();
    return 0;

}

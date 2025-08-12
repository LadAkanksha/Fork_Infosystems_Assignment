///Write a program which accept number from user and Count Zeros in it.

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iZeroCount = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);

    iTemp = iNum;

    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        if(iDigit == 0)
        {
            iZeroCount++;
        }
        iTemp /= 10;
    }

    printf("\nCount of Zeros in %d is %d",iNum , iZeroCount);

    getch();
    return 0;

}

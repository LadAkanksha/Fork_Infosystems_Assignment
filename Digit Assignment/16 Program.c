///Write a program which accept 4 digits number from the user and if it is 4 digits number
///display its Reverse Number otherwise iterate till user enters 4 digits number.

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iRev = 0 , iCnt = 0;

    UP:
    printf("\nEnter a 4-Digit Number : ");
    scanf("%d",&iNum);

    iTemp = iNum;

    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        iRev = (iRev * 10) + iDigit;
        iTemp /= 10;
        iCnt++;
    }
    if(iCnt == 4)
    {
        printf("----------------------------------------");
        printf("\nNumber = %d      Reverse Number = %d ",iNum , iRev);
        printf("\n----------------------------------------");
    }
    else
    {
        iNum = iCnt = iRev = 0;
        goto UP;
    }

    getch();
    return 0;
}

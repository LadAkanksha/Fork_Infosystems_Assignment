/// Write a program which accept number from user and display its digits in reverse order.

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iDigitCnt = 0, i = 0;
    int iRevArray[10] = {};

    UP:
    printf("\nEnter a Number : ");
    scanf("%d",&iNum);

    if(iNum < 0)
        iNum = -iNum;

    iTemp = iNum;

    while(iTemp > 0)
    {
        iDigitCnt++;
        iDigit = iTemp % 10;
        iRevArray[i] = iDigit;
        iTemp /= 10;
        i++;
    }

    for(i = 10 ; i >= 0 ; i--)
    {
        if(iRevArray[i] == 0)
            continue;
        else
            printf("\n%d",iRevArray[i]);
    }

    getch();
    return 0;
}

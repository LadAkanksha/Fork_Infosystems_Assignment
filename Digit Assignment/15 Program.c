///Write a program which accept number from user and if display its Reverse Number. (with
///new variable for storing reverse)

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
        iRev = (iRev * 10)+ iDigit;
        iTemp /= 10;
    }

    printf("Number = %d \nReverse Number = %d ",iNum , iRev);

    getch();
    return 0;

}

///Write a program which accept number from user and return the count of even digits.

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iEvenCount = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);
    iTemp = iNum;
    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        if(iDigit % 2 == 0)
        {
            ++iEvenCount;
        }
        iTemp /= 10;
    }

    printf("\nEven Count of Digits in %d = %d",iNum , iEvenCount);

    getch();
    return 0;

}

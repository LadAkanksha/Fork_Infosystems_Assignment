///Write a program which accept number from user and return the count of Even, Odd, Zeros
///digits.(Use Loop Once)
#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iOddCount = 0, iEvenCount = 0, iZeroCount = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);
    iTemp = iNum;
    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        if(iDigit == 0)
        {
            ++iZeroCount;
        }
        else if(iDigit % 2 != 0)
        {
            ++iOddCount;
        }
        else
        {
            ++iEvenCount;
        }
        iTemp /= 10;
    }

    printf("\nEven Count of Digits in %d = %d",iNum , iEvenCount);
    printf("\nOdd Count of Digits in %d = %d",iNum , iOddCount);
    printf("\nZeros Count of Digits in %d = %d",iNum , iZeroCount);

    getch();
    return 0;

}

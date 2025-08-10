///Write a program which accept number from user and return difference between summation
///of even digits and summation of odd digits
#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iOddSum = 0, iEvenSum = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);
    iTemp = iNum;
    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        if(iDigit % 2 != 0)
        {
            iOddSum += iDigit;
        }
        else
        {
           iEvenSum += iDigit;
        }
        iTemp /= 10;
    }

    printf("\nDifference Between Summation of Even and Odd Digit is %d",iEvenSum - iOddSum);

    getch();
    return 0;

}

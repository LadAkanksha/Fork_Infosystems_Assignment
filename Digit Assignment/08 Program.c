///Write a program which accept number from user and Display Max digit in it.

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iMax = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);

    iTemp = iNum;

    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iTemp /= 10;
    }

    printf("\n The maximum digit is %d",iMax);

    getch();
    return 0;

}

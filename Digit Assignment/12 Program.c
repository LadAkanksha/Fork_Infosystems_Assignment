///Write a program which accept number from user and count frequency of User Entered digit
///in it.

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iCount = 0 , iValue = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);

    printf("\nEnter a digit to count : ");
    scanf("%d",&iValue);

    iTemp = iNum;

    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        if(iDigit == iValue)
        {
            iCount++;
        }
        iTemp /= 10;
    }

    printf("\nCount of %d in %d is %d",iValue,iNum , iCount);

    getch();
    return 0;

}

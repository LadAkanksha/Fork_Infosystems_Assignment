///Write a program which accept number from user and Display Min digit in it.

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iMin = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);

    iTemp = iMin = iNum;

    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iTemp /= 10;
    }

    printf("\n The maximum digit is %d",iMin);

    getch();
    return 0;

}

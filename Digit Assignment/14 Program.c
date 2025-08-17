///Write a program which accept 5 digits number from user and if it is digit 5 number display its
///Sum otherwise invalid input.

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iCount = 0, iSum = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);

    iTemp = iNum;

    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        iCount++;
        iSum += iDigit;
        iTemp /= 10;
    }

    if(iCount == 5)
        printf("\nThe sum of digits is %d.",iSum);
    else
        printf("\nInvalid Input.");


    getch();
    return 0;

}

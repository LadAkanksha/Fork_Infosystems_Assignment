///Write a program which accept number from user and return multiplication of all digits

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iMul = 1 , iDigit = 0, iTemp = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);
    iTemp = iNum;
    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        iMul *= iDigit;
        iTemp /= 10;
    }

    printf("\nMultiplication of Digits in %d = %d",iNum , iMul);

    getch();
    return 0;

}

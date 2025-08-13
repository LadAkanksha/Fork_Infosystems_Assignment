///Write a program which accept number from user and count frequency of 2 in it.

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iTwoCount = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);

    iTemp = iNum;

    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        if(iDigit == 2)
        {
            iTwoCount++;
        }
        iTemp /= 10;
    }

    printf("\nCount of 2 in %d is %d",iNum , iTwoCount);

    getch();
    return 0;

}

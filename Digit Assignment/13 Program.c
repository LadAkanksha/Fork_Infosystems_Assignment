///Write a program which accept number from user and check whether it contains 2 in it or
///not

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNum = 0, iDigit = 0, iTemp = 0, iFlag = 0;

    printf("\nEnter a Number : ");
    scanf("%d",&iNum);

    iTemp = iNum;

    while(iTemp > 0)
    {
        iDigit = iTemp % 10;
        if(iDigit == 2)
        {
            iFlag = 1;
            break;
        }
        iTemp /= 10;
    }

    if(iFlag == 1)
        printf("\n%d Contains Two.",iNum);
    else
        printf("\nThere is No Two.");


    getch();
    return 0;

}

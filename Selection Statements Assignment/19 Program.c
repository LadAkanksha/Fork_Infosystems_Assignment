/// Write a program to create a console-based calculator that uses all arithmetic operators.
/// (by using switch).

#include<stdio.h>
#include<conio.h>

int main()
{
    char cOper = '\0';
    int iNo1 = 0 , iNo2 = 0 , res = 0;

    printf("\nEnter a Operator : ");
    scanf("%c",&cOper);

    printf("\nEnter First Number : ");
    scanf("%d",&iNo1);

    printf("\nEnter Second Number : ");
    scanf("%d",&iNo2);

    switch(cOper)
    {
        case '+':
                res = iNo1 + iNo2;
                printf("\nResult : %d",res);
                break;
        case '-':
                res = iNo1 - iNo2;
                printf("\nResult : %d",res);
                break;
        case '*':
                res = iNo1 * iNo2;
                printf("\nResult : %d",res);
                break;
        case '/':
                res = iNo1 / iNo2;
                printf("\nResult : %d",res);
                break;
        case '%':
                res = iNo1 % iNo2;
                printf("\nResult : %d",res);
                break;
        default:
                printf("\nInvalid Operator !!!");
                break;
    }

    getch();
    return 0;
}

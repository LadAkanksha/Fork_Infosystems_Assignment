/// Write a program that accepts a month number (1 to 12) and prints the corresponding
/// month name

#include<stdio.h>
#include<conio.h>

int main()
{

    int iNo = 0 ;

    printf("Enter a Number (1-12) : ");
    scanf("%d",&iNo);

    switch(iNo)
    {
        case 1:
                printf("\nThe Month is : January");
                break;
        case 2:
                printf("\nThe Month is : February");
                break;
        case 3:
                printf("\nThe Month is : March");
                break;
        case 4:
                printf("\nThe Month is : April");
                break;
        case 5:
                printf("\nThe Month is : May");
                break;
        case 6:
                printf("\nThe Month is : June");
                break;
        case 7:
                printf("\nThe Month is : July");
                break;
        case 8:
                printf("\nThe Month is : August");
                break;
        case 9:
                printf("\nThe Month is : Septmber");
                break;
        case 10:
                printf("\nThe Month is : Octomber");
                break;
        case 11:
                printf("T\nThe Month is : November");
                break;
        case 12:
                printf("\nThe Month is : December");
                break;
        default:
                printf("\nInvalid Number !!!");
                break;
    }

    getch();
    return 0;
}

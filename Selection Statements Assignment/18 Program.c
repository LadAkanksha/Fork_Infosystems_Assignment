/// Write a program to accept a day number (1 to 7) and prints the corresponding day of the
/// week (by using switch)

#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 0 ;

    printf("Enter a Number (1-7) : ");
    scanf("%d",&iNo);

    switch(iNo)
    {
        case 1:
                printf("The Day of Week is : Sunday");
                break;
        case 2:
                printf("The Day of Week is : Monday");
                break;
        case 3:
                printf("The Day of Week is : Tuesday");
                break;
        case 4:
                printf("The Day of Week is : Wednsday");
                break;
        case 5:
                printf("The Day of Week is : Thursday");
                break;
        case 6:
                printf("The Day of Week is : Friday");
                break;
        case 7:
                printf("The Day of Week is : Saturday");
                break;
        default:
                printf("Invalid Number !!!");
                break;
    }

    getch();
    return 0;
}

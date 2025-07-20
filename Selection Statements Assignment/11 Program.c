/// Write a program to check whether a given year is a leap year.


#include<stdio.h>
#include<conio.h>

int main()
{
    int iyear = 0 ;

    printf("Enter a Year : ");
    scanf("%d",&iyear);

    if(iyear % 4 == 0)
        printf("\nThe year %d is a leap year.",iyear);
    else
        printf("\nThe year %d is not a leap year.",iyear);
    getch();
    return 0;
}

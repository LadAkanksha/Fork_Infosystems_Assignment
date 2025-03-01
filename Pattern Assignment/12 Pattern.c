#include<stdio.h>
#include<conio.h>

int main()
{
    int row = 0 , col = 0 , i = 0 , j = 0;
    char ltr = '\0';

    printf("\nEnter No.of Rows : ");
    scanf("%d",&row);
    printf("\nEnter No.of Columns : ");
    scanf("%d",&col);

    for(i = 1 ,ltr = 'a'; i <= row ; i++ ,ltr++)
    {
        for(j = 1 ; j <= col ; j++)
        {
            if(j % 2 == 0)
            {
                printf(" %c ",ltr-32);
            }
            else
            {
                printf(" %c ",ltr);
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}

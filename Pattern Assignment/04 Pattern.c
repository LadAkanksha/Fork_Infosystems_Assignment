#include<stdio.h>
#include<conio.h>

int main()
{
    int row = 0 , col = 0 , i = 0 , j = 0;

    printf("\nEnter No.of Rows : ");
    scanf("%d",&row);
    printf("\nEnter No.of Columns : ");
    scanf("%d",&col);

    for(i = 1 ; i <= row ; i++)
    {
        for(j = col ; j > 0 ; j--)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}

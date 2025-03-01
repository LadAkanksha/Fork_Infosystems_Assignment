#include<stdio.h>
#include<conio.h>

int main()
{
    int row = 0 , col = 0 , i = 0 , j = 0 , num = 0, temp = 0;

    printf("\nEnter No.of Rows : ");
    scanf("%d",&row);
    printf("\nEnter No.of Columns : ");
    scanf("%d",&col);

    for(i = 1 , num = 5; i <= row ; i++,num += 5)
    {
        for(j = 1 ,temp = num; j <= col ; j++,temp += 25)
        {
            printf(" %2d ",temp);
        }
        printf("\n");
    }
    getch();
    return 0;
}

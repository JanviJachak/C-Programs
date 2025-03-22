#include<stdio.h>

void Display(int rows, int columns)
{
    int i=0;
    int j=0;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("*\t");
        }

        printf("\n"); 
    }

   
}

int main()
{
    int iNo1=0;
    int iNo2=0;

    printf("Enter no of rows : ");
    scanf("%d",&iNo1);

    printf("Enter no of columns : ");
    scanf("%d",&iNo2);


    Display(iNo1,iNo2);
    return 0;
}
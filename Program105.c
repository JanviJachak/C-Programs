#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i=0, j=0;

    for(i=1; i<= iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if((j%2)==0)
            {
                printf("&\t");
            }
            else
            {
                printf("$\t");
            }
        }

        printf("\n");
    }
}

int main()
{
    int iNo1=0, iNo2=0;

    printf("Enter no of rows : ");
    scanf("%d",&iNo1);

    printf("Enter no of columns: ");
    scanf("%d",&iNo2);

    Pattern(iNo1,iNo2);

    return 0;
}
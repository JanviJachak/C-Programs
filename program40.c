#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= iNo; iCnt--)
    {
       printf(" %d \n",iCnt);
    }
}

int main()
{   
    int iValue = 0;

    printf("enter no of times you want to display : ");
    scanf("%d",&iValue);
    
    display(iValue);

    return 0;
}
#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
       printf(" * \n");
    }
}

int main()
{   
    int iValue = 0;

    printf("enter no of times you want to display star : ");
    scanf("%d",&iValue);
    
    display(iValue);

    return 0;
}
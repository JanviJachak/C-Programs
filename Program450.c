#include<stdio.h>


void DisplayDigitsR(int iNo)
{
   
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);

        iNo = iNo/10;
    DisplayDigitsR(iNo);
        
    }

}
int main()
{
    int iValue = 0;

    printf("Enter thr number : ");
    scanf("%d",&iValue);
   
    DisplayDigitsR(iValue);
    return 0;

}